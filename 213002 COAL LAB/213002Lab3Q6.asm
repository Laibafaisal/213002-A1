.data
str1: .asciiz "Enter a signed number: "
str2: .asciiz "The product of 24.5 and this number is: "

.text
.globl main
main:
li $v0,4
la $a0,str1
syscall

#code to get the floating point
li $v0,6
syscall
move $s0,$v0

li $s1,24.5
mul.d $s1,$s2,$s0

li $v0,4
la $a0,str2
syscall

#code to display the floating point
li $v0,2
la $a0,($s1)
syscall

#exit
li $v0,10
syscall