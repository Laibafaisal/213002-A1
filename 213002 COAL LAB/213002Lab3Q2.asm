.data
str1: .asciiz "Enter an integer, A: "
str2: .asciiz "Enter an integer, B: "
str3: .asciiz "The result of the expression A+2B-5 is: "

.text
.globl main
main:
li $v0,4
la $a0,str1
syscall

li $v0,5
syscall
move $t0,$v0

li $v0,4
la $a0,str2
syscall

li $v0,5
syscall
move $t1,$v0

li $t2,2
mul $s0,$t1,$t2
add $s1,$s0,$t0
subi $s2,$s1,5

li $v0,4
la $a0,str3
syscall

li $v0,1
la $a0,($s2)
syscall

li $v0,10
syscall