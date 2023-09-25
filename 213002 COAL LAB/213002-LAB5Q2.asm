.data
array: .space 20 #to store 5 integers, we need 5*4 = 20 bytes 
s1:.asciiz "Enter an integer: "
.text
.globl main
main:

la $a0,array #address of array in a0
li $a1,5 #a1 = number of elemests to read
li $t0,0

read:
beq $t0,$a1,exit
li $v0,4  #prompt 
la $a0,s1
syscall

li $v0,5
syscall
move $t1,$v0
sw $t1,0($t0)
addi $t0,$t0,1 #increment the counter
j read

exit:
li $v0,10
syscall
