
.data
id0:
	.word 0;
id1:
	.word 0;
id2:
	.word 0;
id3:
	.word 0;
id4:
	.asciiz "Enter Val :"
id5:
	.word 0;
id6:
	.asciiz "Val of Fact("
id7:
	.asciiz ") : "
id8:
	.asciiz "\n"
.text
.globl main
main:
li $t0, 3
sw $t0 , id3
li $v0 , 4
la $a0 , id4
syscall
lw $t1, id3
li $v0 , 1
move $a0 , $t1
syscall
lw $s3 , id3
sw $s3 , id0
addi $sp , $sp , -44
sw $ra , 0($sp)
sw $t0 , 4($sp)
sw $t1 , 8($sp)
sw $t2 , 12($sp)
sw $t3 , 16($sp)
sw $t4 , 20($sp)
sw $t5 , 24($sp)
sw $t6 , 28($sp)
sw $t7 , 32($sp)
sw $t8 , 36($sp)
sw $t9 , 40($sp)
jal factorial 
lw $ra , 0($sp)
lw $t0 , 4($sp)
lw $t1 , 8($sp)
lw $t2 , 12($sp)
lw $t3 , 16($sp)
lw $t4 , 20($sp)
lw $t5 , 24($sp)
lw $t6 , 28($sp)
lw $t7 , 32($sp)
lw $t8 , 36($sp)
lw $t9 , 40($sp)
addi $sp , $sp , 44
sw $s0 , id5
li $v0 , 4
la $a0 , id6
syscall
lw $t2, id3
li $v0 , 1
move $a0 , $t2
syscall
li $v0 , 4
la $a0 , id7
syscall
lw $t3, id5
li $v0 , 1
move $a0 , $t3
syscall
li $v0 , 4
la $a0 , id8
syscall
jr $ra

factorial:	
li $t0, 1
sw $t0 , id1
lw $t1, id0
li $t2, 0
sle $t3 , $t1 , $t2
beq $t3 , $zero , l0 
lw $s0 , id1
jr $ra
l0:
lw $t4, id0
li $t5, 1
sub $t6 , $t4 , $t5
sw $t6 , id0
lw $s3 , id0
sw $s3 , id0
addi $sp , $sp , -44
sw $ra , 0($sp)
sw $t0 , 4($sp)
sw $t1 , 8($sp)
sw $t2 , 12($sp)
sw $t3 , 16($sp)
sw $t4 , 20($sp)
sw $t5 , 24($sp)
sw $t6 , 28($sp)
sw $t7 , 32($sp)
sw $t8 , 36($sp)
sw $t9 , 40($sp)
addi $sp , $sp , -12
lw $s2 , id0
sw $s2 , 0($sp)
lw $s2 , id1
sw $s2 , 4($sp)
lw $s2 , id2
sw $s2 , 8($sp)
jal factorial 
lw $s2 , 0($sp)
sw $s2 , id0
lw $s2 , 4($sp)
sw $s2 , id1
lw $s2 , 8($sp)
sw $s2 , id2
addi $sp , $sp , 12
lw $ra , 0($sp)
lw $t0 , 4($sp)
lw $t1 , 8($sp)
lw $t2 , 12($sp)
lw $t3 , 16($sp)
lw $t4 , 20($sp)
lw $t5 , 24($sp)
lw $t6 , 28($sp)
lw $t7 , 32($sp)
lw $t8 , 36($sp)
lw $t9 , 40($sp)
addi $sp , $sp , 44
sw $s0 , id2
lw $t7, id0
li $t8, 1
add $t9 , $t7 , $t8
lw $t0, id2
mul $t1 , $t9 , $t0
sw $t1 , id2
lw $s0 , id2
jr $ra
