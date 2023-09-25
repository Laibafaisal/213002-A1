.data
s1: .asciiz "Enter an integer x: "
s2: .asciiz "Enter an integer y: "
.text
.globl main
main:
li $v0,4
la $a0,s1
syscall
li $v0,5
syscall
move $s0,$v0

li $v0,4
la $a0,s2
syscall
li $v0,5
syscall
move $s1,$v0
li $s2,10
while:
bge $s0,$s2,next
addi $s1,$s1,10
addi $s0,$s0,1
j while

next:
li $v0,1
move $a0,$s0
syscall

li $v0,1
move $a0,$s1
syscall
exit:
li $v0,10 
syscall
