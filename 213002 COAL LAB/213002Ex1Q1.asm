.data
hello: .asciiz "Hello, world"
.text
main:
	la $a0, hello
#cout:
	li $v0, 4
	syscall
	
#return:
	li $v0,10
	syscall
	