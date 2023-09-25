.data
str: .asciiz "          " #to store 10 spaces
s1: .asciiz "The unsigned integer 5128 in string is: "
.text
.globl main
main:
li $a0,5128
la $v0,str
addiu $v0,$v0,11 #to move the ptr to the end of str
li $a1,10

int2str:
divu $a0,$a1
mflo $a0
mfhi $t0
addiu $t0,$t0,48
addiu $v0,$v0,-1
sb $t0, ($v0)
bnez $a0,int2str

done:
li $v0,4
la $a0,s1
syscall

li $v0,4
la $a0,str
syscall

exit:
li $v0,10
syscall