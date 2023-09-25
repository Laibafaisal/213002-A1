.data
outfile: .asciiz "out.txt"
msg: .asciiz "This message should be written to the output file!"
.text
.globl main
main:
li $v0,13 #service to open file
la $a0,outfile #output file name'
li $a1,1 #write only and create
syscall #open file

move $s0,$v0  #s0 = file descriptor
li $v0,15 #15 to write to the file
move $a0,$s0 #a0 = file descriptor

la $a1,msg #a1 = address of the buffer
li $a2,43 #a2 = number of characters to write to the file
syscall #write to file

li $v0,16 #service 16 to close the file
move $a0,$s0 #a0 = file descriptor
syscall #close file

exit:
li $v0,10
syscall


