.data
.text
.globl main
main: 
li $s1,10
sll $t1,$s1,4
 
li $v0,1
move $a0,$t1
syscall

li $v0,10
syscall