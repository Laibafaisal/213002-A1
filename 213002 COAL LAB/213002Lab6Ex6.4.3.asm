.data
M: .word 0:50
.text
.globl main
main:
la $t0,M
li $t1,0
li $t2,10

for:
sw $t1,12($t0)
addi $t1,$t1,1
addi $t0,$t0,20
bne $t1,$t2,for

exit:
li $v0,10
syscall
