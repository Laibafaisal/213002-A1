.data
str1: .asciiz "Enter an integer value: "
str2: .asciiz "\nThe double of the value that you entered: "
str3: .asciiz "\nDo you want to repeat [y/n]?\n"

.globl main
.text

main:
li $v0, 4
la $a0 , str1
syscall
#print str1

#get input 
li $v0, 5
syscall
#print str2
move $s0, $v0
li $v0, 4
la $a0, str2
syscall

#doubling

add $s1, $s0 , $s0

#print the doubled value
li $v0,1
move $a0, $s1
syscall

#ask to repeat
li $v0, 4
la $a0, str3
syscall

#read char
li $v0,12
syscall

#save char input
move $s1, $v0

#conditional statement
li $s2,'y'
beq $s1, $s2 ,main

#return 0 (program termination)
li $v0, 10
syscall
