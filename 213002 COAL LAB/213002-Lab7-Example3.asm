.data
str: .asciiz "512943687"
s1: .asciiz "The string 512943687 in int is: "
.text
.globl main
main:
la $t0,str
li $v0,0
li $v1,10
lb $t1, ($t0)

str2int:
addiu $t1,$t1,-48
mul $v0,$v0,$v1
addu $v0,$v0,$t1
addiu $t0,$t0,1
lb $t1, ($t0)
bnez $t1,str2int

done:
move $s0,$v0
li $v0,4
la $a0,s1
syscall

li $v0,1
move $a0,$s0
syscall

exit:
li $v0,10
syscall



