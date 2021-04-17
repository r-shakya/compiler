
.data
id0:
	.space 32;
id1:
	.word 0;
id2:
	.word 0;
id3:
	.word 0;
id4:
	.word 0;
id5:
	.asciiz "hello world\n"
id6:
	.word 0;
.text
.globl main
main:
li $t0, 14
sw $t0 , id3
jr $ra
