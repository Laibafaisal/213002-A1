.data
num: .space 40
str1: .asciiz "Enter an integer: "
str2: .asciiz"\nSum of numbers: "
.text
.globl main
main:

li $t0,0
li $t1,9
li $s0,0
li $s1,0
li $s2,0

input:
beq $t0,$t1,sum
li $v0,4
la $a0,str1
syscall

li $v0,5
syscall
move $s5,$v0
sw $s5,num($t0)
addi $t0,$t0,1
j input

sum:
beq $s0,$t1,display
lw $s1,num($s0)
add $s2,$s2,$s1
addi $s0,$s0,1
j sum

display:
li $v0,4
la $a0,str2
syscall

li $v0,1
syscall
move $a0, $s2

exit:
li $v0,10
syscall
