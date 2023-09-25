.data
numbers: .word 8, 100, 0, 3, 7, 9, 2, 7, -3, 0	#initialise the array 	
message: .asciiz "Output: "		#string	
.text
main:
	la $s7, numbers		#assigning the base address of the array to s7			
	li $s0, 0		#s0 = 0			
	li $s6, 9 		#s6 = 9		
	li $s1, 0 		#s1 = 0			
	li $t3, 0		#t3=0		
	li $t4, 10		
	li $v0, 4		#printing the string "message"		
	la $a0, message
	syscall
loop:
	sll $t7, $s1, 2			#t7 = 4*s1		
	add $t7, $s7, $t7 		#t7 = s7+t7 -word alignment
#	t7 = 4		; t7 = 4+base address of aray so t7 points to i=1
	lw $t0, 12($t7)  		#load the value at the zeroeth index (i=0) of array into the register t0			
	lw $t1, 2($t7) 			#load the value at the second index (i=2) of array into the register t0	-offset value 8	
	slt $t2, $t0, $t1		#t2 = 1 if t0 < t1 else t2 = 0		
	bne $t2, $zero, increment       #if t2 is not zero,branch to the increment function ie if the value at index zero > value at index 2 , branch
	sw $t1, 0($t7) 			# store the value of t1 at the zeroeth index of t7		
	sw $t0, 4($t7)			#store the value of t0 at the first index (i=1) of $t7
increment:	
	addi $s1, $s1, 2		#s1 = s1+2		
	sub $s5, $s6, $s0 		#s5 = s6-s0: decrement 	
	bne  $s1, $s5, loop		#if s1 != s5, branch to loop; else perform sequential execution		
	addi $s0, $s0, 1 		#increment s0		
	li $s1, 0 			#s1=0		
	bne  $s0, $s6, loop		#if s0 != s6, branch to loop; else perform sequential execution, s6 is upper limit of array 	
print:
	beq $t3, $t4, final		#condition - print unless t3!=t4 (ensures that all indexes from 0 to 9 are printed)		
	lw $t5, 0($s7)			#store the value of t5 onto the first index (i=0) of t7		
	li $v0, 1			#print the value of t5
	move $a0, $t5
	syscall
	li $a0, 32		        #print a character (32)			
	li $v0, 11
	syscall
	addi $s7, $s7, 4		#add 4 to s7 - word alignment		
	addi $t3, $t3, 1		#increment t3 (the counter)		
	j print				#jump to the print function
final:	
	li $v0, 10			#exit		
	syscall