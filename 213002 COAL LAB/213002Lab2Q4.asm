.data
str1: .asciiz "Enter an integer a: "
str2: .asciiz "Enter an integer b: "
str3: .asciiz "Enter an integer c: "
str4: .asciiz "The result of [(a + b) - (c + 101)} is:	"

.globl main

.text
main:

#display str1
li $v0,4
la $a0,str1
syscall

#input a
li $v0,5
syscall
move $t0,$v0

#prompt for integer b
li $v0,4
la $a0,str2
syscall

#input b
li $v0,5
syscall
move $t1,$v0

#display str3
li $v0,4
la $a0,str3
syscall

#input c
li $v0,5
syscall
move $t2,$v0

#processing
add $s0,$t0,$t1
addi $s1,$t2,101
sub $s2,$s0,$s1

#display the result
li $v0,4
la $a0,str4
syscall

li $v0,1
la $a0,($s2)
syscall

#terminate the program
li $v0,10
syscall



















