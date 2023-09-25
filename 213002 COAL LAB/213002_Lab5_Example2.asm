.data
str1: .asciiz "Enter an integer: "
str2: .asciiz "The numbers stored in the array are: "
str3: .asciiz "The elements printed in the reverse order are as follows: "
x: .word 0:10
.text
.globl main
main:

li $t0,0
la  $t1,x

jal input
li $v0,4
la $a0,str2
syscall
jal print
li $v0,4
la $a0,str3
syscall

jal reverse

li $v0,10
syscall

input:
li $v0,4
la $a0,str1
syscall

li $v0,5
syscall

mul $t2,$t0,4
add $t2,$t1,$t2
sw $v0,0($t2)
addi $t0,$t0,1
slti $t3,$t0,10 
bnez $t3,input
jr $ra

print:
li $v0,1
syscall

mul $t2,$t0,4
add $t2,$t1,$t2
lw $v0,0($t2)
addi $t0,$t0,1
slti $t3,$t0,11 
bne $t3,$zero,input
jr $ra

reverse:
li $t4,10

mul $t2,$t0,4
add $t2,$t1,$t2
lw $v0,0($t2)
subi $t4,$t4,1
sl $t3,$t4,
bne $t3,$zero,input
jr $ra












