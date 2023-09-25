.data
.text
.globl main
main:
li $t0,0x00040008

sll $t2, $t0, 2


li $v0,1
move $a0,$t2
syscall

li $v0,10
syscall