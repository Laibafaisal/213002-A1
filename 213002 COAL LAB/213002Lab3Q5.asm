.data
str1: .asciiz "Enter an integer: "
str2: .asciiz "Enter the bit position whose value you want to know: "
str3: .asciiz "The value of this bit is: "
.text
.globl main
main:
li $v0,4
la $a0, str1
syscall

li $v0,5
syscall
move $s0, $v0

li $v0,4
la $a0,str2
syscall

li $v0,5
syscall
move $s1, $v0

srav  $s3,$s0,$s1

li $v0,4
la $a0,str3
syscall

andi $s4,$s3,1
li $v0,1
la $a0,($s4)
syscall

li $v0,10
syscall
