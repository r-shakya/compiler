
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
lw $t1, id3
li $t2, 0
sub $t3 , $t2 , $t1
li $t4, 20
add $t5 , $t3 , $t4
li $t6, 2
add $t7 , $t5 , $t6
sw $t7 , id1
li $t8, 0
sw $t8 , id2
l0:
lw $t9, id2
lw $t0, id1
slt $t1 , $t9 , $t0
beq $t1 , $zero , l3 
j l2
l1:
lw $t2, id2
li $t3, 1
add $t4 , $t2 , $t3
sw $t4 , id2
j l0
l2:
lw $t5, id2
sll $t6 , $t5 , 2
la $t7 , id0
add $t8 , $t7 , $t6
li $v0 , 5
syscall
sw $v0 , 0($t8)
j l1
l3:
li $v0 , 4
la $a0 , id5
syscall
li $t9, 4
sw $t9 , id6
li $t0, 0
sw $t0 , id2
l4:
lw $t1, id2
lw $t2, id1
li $t3, 1
sub $t4 , $t2 , $t3
slt $t5 , $t1 , $t4
beq $t5 , $zero , l7 
j l6
l5:
lw $t6, id2
li $t7, 1
add $t8 , $t6 , $t7
sw $t8 , id2
j l4
l6:
li $t9, 0
sw $t9 , id3
l8:
lw $t0, id3
lw $t1, id1
lw $t2, id2
sub $t3 , $t1 , $t2
li $t4, 1
sub $t5 , $t3 , $t4
slt $t6 , $t0 , $t5
beq $t6 , $zero , l11 
j l10
l9:
lw $t7, id3
li $t8, 1
add $t9 , $t7 , $t8
sw $t9 , id3
j l8
l10:
lw $t0, id3
sll $t1 , $t0 , 2
la $t2 , id0
add $t3 , $t2 , $t1
lw $t4 , 0($t3)
lw $t5, id3
li $t6, 1
add $t7 , $t5 , $t6
sll $t8 , $t7 , 2
la $t9 , id0
add $t0 , $t9 , $t8
lw $t1 , 0($t0)
sgt $t2 , $t4 , $t1
beq $t2 , $zero , l12 
lw $t3, id3
sll $t4 , $t3 , 2
la $t5 , id0
add $t6 , $t5 , $t4
lw $t7 , 0($t6)
sw $t7 , id4
lw $t8, id3
sll $t9 , $t8 , 2
la $t0 , id0
add $t1 , $t0 , $t9
lw $t2, id3
li $t3, 1
add $t4 , $t2 , $t3
sll $t5 , $t4 , 2
la $t6 , id0
add $t7 , $t6 , $t5
lw $t8 , 0($t7)
sw $t8 , 0($t1)
lw $t9, id3
li $t0, 1
add $t1 , $t9 , $t0
sll $t2 , $t1 , 2
la $t3 , id0
add $t4 , $t3 , $t2
lw $t5, id4
sw $t5 , 0($t4)
l12:
j l9
l11:
j l5
l7:
li $t6, 9
li $t7, 5
li $t8, -2
sgt $t9 , $t7 , $t8
sgt $t0 , $t6 , $t7
beq $t0 , $zero , l14 
lw $t1, id6
li $v0 , 1
move $a0 , $t1
syscall
l14:
li $t2, 9
li $t3, 9
sge $t4 , $t2 , $t3
beq $t4 , $zero , l16 
lw $t5, id6
li $t6, 1
add $t7 , $t5 , $t6
li $v0 , 1
move $a0 , $t7
syscall
l16:
li $t8, 9
li $t9, 9
sle $t0 , $t8 , $t9
beq $t0 , $zero , l18 
lw $t1, id6
li $t2, 2
add $t3 , $t1 , $t2
li $v0 , 1
move $a0 , $t3
syscall
l18:
li $t4, 9
li $t5, 9
seq $t6 , $t4 , $t5
beq $t6 , $zero , l20 
lw $t7, id6
li $t8, 3
add $t9 , $t7 , $t8
li $v0 , 1
move $a0 , $t9
syscall
l20:
jr $ra
