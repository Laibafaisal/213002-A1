.data
str1: .asciiz "Enter a positive integer: "
str2: .asciiz"Fibonnaci sequence: "
str3: .asciiz " "
.text
.globl main
main:
li $v0,4
la $a0,str1
syscall

li $v0,5
syscall
move $s0,$v0
#first is t0
#second is t1
#next is t2
li $t0,0
li $t1,1
li $t3,2 #counter variable

li $v0,4
la $a0,str2
syscall

loop:
beqz $s0,z

uy6
move $t0,$t1
move $t1,$t2
move $t2,$t0
addi $t3,$t3,1
li $v0,1
la $a0,($t0)
syscall
li $v0,4
la $a0,str3
syscall

z:
li $v0,1
la $a0,($zero)
syscall
j exit

exit:
li $v0,10
syscall

