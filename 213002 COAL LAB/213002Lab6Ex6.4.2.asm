.data
M: .word 0:50
.text
.globl main
main:

la $t0,M
li $t1,0
li $t2,10

for:
sll $t3,$t1,4
sll $t4,$t1, 2
add $t5,$t3,$t4
add $t5,$t0,$t5
sw $t1,12(($t5)
addi $t1,$t1,1
bne $t1,$t2,4

exit:
li $v0,10
syscall