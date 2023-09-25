.data
str1: .asciiz "Enter an integer: "
str2: .asciiz "Enter another integer: "
str3: .asciiz"The sum is: "
.text
.globl main
main:
li $v0,4
la $a0,str1
syscall

li $v0,5
syscall
move $a1, $v0

li $v0,4
la $a0,str2
syscall

li $v0,5
syscall
move $a2,$v0
jal sum
li $v0,4
la $a0,str3
syscall

li $v0,1
la $a0,($v1)
syscall

li $v0,10
syscall
sum:
add $v1,$a2,$a1
jr $ra

