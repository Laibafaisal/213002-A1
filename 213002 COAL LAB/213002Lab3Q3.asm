.data
str1: .asciiz "Shift left logic: "
str2: .asciiz "Shift right logic: "
str3: .asciiz "Shift right arithmetic: "

.text
.globl main
main:
li $s1,0x87654321
sll $s2,$s1,16
srl $s3,$s1,8
sra $s4,$s1,12

li $v0,10
syscall