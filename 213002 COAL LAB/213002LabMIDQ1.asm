.data
str1: .asciiz "Enter any number: "
str2: .asciiz "Enter nth bit to check (0 - 31): "
str3: .asciiz  "The bit at this position is: "
.text
.globl main
main:

li $v0,4 #prompt 1
la $a0,str1
syscall

li $v0,5
syscall
move $s0,$v0 #s0 = num

li $v0,4 #prompt 2
la $a0,str2
syscall

li $v0,5
syscall
move $s1,$v0 #s1 = bit pos

srlv $t0,$s0,$s1
andi $t1,$t0,1

li $v0,4
la $a0,str3
syscall

li $v0,1
la $a0,($t1)
syscall

li $v0,10
syscall
