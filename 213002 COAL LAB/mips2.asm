.data
s1: .asciiz "Enter a number to find its factorial: "
s2: .asciiz "The factorial is: "
.text
.globl main
main:
li $v0,4
la $a0,s1
syscall

li $v0,5
syscall
move $s0,$v0 #read integer and store it in s0

addi $s1,$s0,-1
li $t0,1

fact:
beq $s1,$t0,,next
mul $s2,$s1,$s0
addi $s1,$s1,-1
j fact

next:
li $v0,4
la $a0,s2
syscall

li $v0,1
move $a0,$s2
syscall

exit:
li $v0,10
syscall
