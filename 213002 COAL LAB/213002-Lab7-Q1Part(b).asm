.data
s1: .asciiz "This program uses the multu instruction to give the product of -98765 and -54321"
s2: .asciiz "\nThe value stored in HI: "
s3: .asciiz "\nThe value stored in LO: "
.text
.globl main
main:
li $s0,-98765
li $s1,-54321
mult $s0,$s1
mfhi $t0 #hi
mflo $t1 #lo

li $v0,4
la $a0,s1
syscall

li $v0,4
la $a0,s2
syscall

li $v0,1
move $a0,$t0
syscall

li $v0,4
la $a0,s3
syscall

li $v0,1
move $a0,$t1
syscall

exit:
li $v0,10
syscall

 