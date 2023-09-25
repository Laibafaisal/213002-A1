.data
str1: .asciiz "AND: "
str2: .asciiz "OR: "
str3: .asciiz "XOR: "
str4: .asciiz "NOR: "
.text
.globl main
main:
li $s1,0x12345678
li $s2,0xffff9a00

and $s3,$s1,$s2
or $s4,$s1,$s2
xor $s5,$s1,$s2
nor $s6,$s1,$s2

