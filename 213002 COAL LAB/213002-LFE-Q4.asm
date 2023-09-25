.data
s1: .asciiz "Enter number to which you want the sum: "
s2: .asciiz "Sum is: "

.text
.globl main
main:
li $v0,4
la $a0,s1
syscall

li $v0,5
syscall
move $a0,$v0
li $t0,0
li $t1,1
li $t2,2

jal sum

sum:
beq $t0,$a0,next
sw $ra, 0($sp)
addi $sp,$sp,-4
add $t1,$t1,$t2
addi $t2,$t2,1
addi $t0,$t0,1
jal sum
addi $sp,$sp,4
lw $ra,0($sp)
jr $ra


next:
li $v0,4
la $a0,s2
syscall

li $v0,1
move $a0,$t2
syscall
exit:
li $v0,10
syscall