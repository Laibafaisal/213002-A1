.data
str1: .asciiz "Enter an integer to add fiv to it: "
str2: .asciiz "The result is: "

.text
.globl main
main:

li $v0,4
la $a0,str1
syscall

li $v0,5
syscall

move $s0,$v0

addi $s1,$s0,5

li $v0,4
la $a0,str2
syscall

li $v0,1
la $a0,($s1)
syscall

li $v0,10
syscall
