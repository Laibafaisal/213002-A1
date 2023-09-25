.data
str1: .asciiz "Enter an integer: "
str2: .asciiz "The factorial of this number is: "
.text
.globl main
main:
li $v0,4
la $a0,str1
syscall

li $v0,5
syscall
move $a0,$v0

fact:
bge $a0,2,else
li $v0,1
jr $ra

else:
addi $sp,$sp,-8
sw $a0,0($sp)
sw $ra, 4($sp)
addi $a0,$a0,-1
jal fact
lw $a0, 0($sp)
lw $ra, 4($sp)
mul $v0,$a0,$v0
addi $sp,$sp,8
jr $ra


li $v0,4
la $a0,str2
syscall

li $v0,1
la $a0,($v0)
syscall
li $v0,10
syscall