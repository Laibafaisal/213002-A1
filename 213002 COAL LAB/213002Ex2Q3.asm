.data
str1: .asciiz "Enter your name: "
str2: .asciiz "Hello, "
str3: .space 50
.globl main
.text

main:

#prompt the user to enter his/her name
li $v0,4
la $a0,str1
syscall

#storing input in str3
li $v0,8
la $a0,str3
li $a1, 50
syscall

#print hello
li $v0,4
la $a0,str2
syscall

#store inout in name
li $v0,4
la $a0,str3
syscall

#termination
li $v0, 10
syscall
