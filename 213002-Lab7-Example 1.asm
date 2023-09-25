.data
s1:.asciiz "The greatest common divisor of 18 and 30 is: "
.text
.globl main
main:
li $a0,30
li $a1,18

gcd:
div $a0,$a1
move $a0,$a1
mfhi $a1
bnez $a1,gcd
move $v1,$a0

display:
li $v0,4
la $a0,s1
syscall

li $v0,1
move $a0,$v1
syscall

exit:
li $v0,10 
syscall
