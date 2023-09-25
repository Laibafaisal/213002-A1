.data
str1: .asciiz "Enter a character: "
str2: .asciiz "\nThe character in uppercase is: "
str3: .asciiz "\nThe character in lowercase is: "

.text
.globl main
main:
#prompt
li $v0,4
la $a0,str1
syscall

li $v0,12
syscall
move $s0,$v0

ble $s0,'Z',case1
bge $s0,'a',case2

case1:
addi $s1,$s0,32
li $v0,4
la $a0,str3
syscall
li $v0,11
la $a0,($s1)
syscall
j exit

case2:
subi $s2,$s0,32
li $v0,4
la $a0,str2
syscall
li $v0,11
la $a0,($s2)
syscall
j exit

exit:
li $v0,10 
syscall