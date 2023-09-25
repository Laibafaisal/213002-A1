.data
str1: .asciiz "Enter a character: "
str2: .asciiz "The character is a lowercase letter."
str3: .asciiz "The character is not a lowercase letter: "
.text
.globl main
main:
li $v0,4
la $a0,str1 
syscall

li $v0,12
syscall
move $a1,$v0

jal islower

li $v0,10
syscall

islower:
blt $a1,'a',else
bgt $a1,'z',else
li $v0,4
la $a0,str2
syscall
jr $ra 

else:
li $v0,4
la $a0,str3
syscall
jr $ra