.data
str1: .asciiz "The result is: "

.text
.globl main
main:

li $t0,10
li $t1,30

addi $s0,$t0,20
addi $s1,$t1,50
sub $s2,$s0,$s1

li $v0,4
la $a0,str1
syscall

li $v0,1
la $a0,($s2)
syscall

li $v0,4
syscall
