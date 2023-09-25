.data
s1: .asciiz "Enter the value to search for in the array:  "
s2: .asciiz "Found!"
s3: .asciiz "Not found!"
arr: .word 10,20,30,40,50
.text
.globl main
main:
#$a0 = address of array
#$a1 = n
#$a2 = target
li $v0,4
la $a0,s1
syscall

li $v0,5
syscall
move $a2,$v0 #a2 = target

li $a1,5 #a1 = size of array
la $a0,arr
move $t0,$a0
li $t1,0 #index

while:
lw $t2,0($t0)    #t2 = arr[i]
beq $t2,$a2,true
beq $t1,$a1,false
addi $t1,$t1,1  # i = i + 1
sll $t3,$t1,2 #sll by 2 to actually multply by 4
add $t0 , $a0, $t3
j while

true:
li $v0,4
la $a0,s2
syscall
j exit

false:
li $v0,4
la $a0,s3
syscall

exit:
li $v0,10
syscall
