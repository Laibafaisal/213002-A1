.data
s1: .asciiz "Enter a number to check whwther it is prime or nor: "
s2: .asciiz "It is a prime number." 
s3: .asciiz "It is a composite number: "
.text
.globl main
main: 
li $v0,4
la $a0,s1
syscall

li $v0,5
syscall #read n
move $s0,$v0

li $t0,1 #counter
li $t2,2 #to be used in check function
li $s2,0 #accumulator

loop:
slt $t1,$t0,$s0
beqz $t1,check
div $s0,$t0 
mfhi $s1 #store the remainder in s1
addi $t0,$t0,1 #increment the counter
beqz $s1,sum #add to accumulator if it is zero 
j loop

sum: 
add $s2,$s2,1
beq $s2,$t2,display2
j loop

check:
slt $t3,$s2,$t2
beqz $t3,display2

display1:
li $v0,4
la $a0,s2 #is prime
syscall
j exit

display2:
li $v0,4
la $a0,s3 #is not prime
syscall

exit:
li $v0,10
syscall


