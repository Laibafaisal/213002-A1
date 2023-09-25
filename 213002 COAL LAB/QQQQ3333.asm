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
move $t0,$v0 #read integer and store it in s0

li $s0,1

fact:
beqz $t0,next
mul $s0,$s0,$t0
addi $t0,$t0,-1
j fact

next:
li $v0,4
la $a0,s2
syscall

li $v0,1
move $a0,$s0
syscall


exit:
li $v0,10
syscall
