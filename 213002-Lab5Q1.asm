.data
s1: .asciiz"Ebnter a character: "
s2: .asciiz "\nThe character you enetered is a lowercase letter."
s3: .asciiz "\nThe character you enetered is not a lowercase letter."
.text
.globl main
main:
li $v0,4
la $a0,s1
syscall

li $v0,12
syscall
move $a0,$v0
jal islower

exit:
li $v0,10
syscall

islower:
blt $a0, 'a', else
bgt $a0, 'z', else
li $v0,1 #true if char is lowercase
li $v0,4
la $a0, s2
syscall
jr $ra 

else:
li $v0,0
li $v0,4
la $a0,s3
syscall
jr $ra


