
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
	.asciiz "   "
.text
.globl main
main:
li $t0, 8
sw $t0 , id1
li $t1, 0
sw $t1 , id2
l0:
lw $t2, id2
lw $t3, id1
slt $t4 , $t2 , $t3
beq $t4 , $zero , l3 
j l2
l1:
lw $t5, id2
li $t6, 1
add $t7 , $t5 , $t6
sw $t7 , id2
j l0
l2:
lw $t8, id2
sll $t9 , $t8 , 2
la $t0 , id0
add $t1 , $t0 , $t9
li $v0 , 5
syscall
sw $v0 , 0($t1)
j l1
l3:
li $t2, 0
sw $t2 , id2
l4:
lw $t3, id2
lw $t4, id1
li $t5, 1
sub $t6 , $t4 , $t5
slt $t7 , $t3 , $t6
beq $t7 , $zero , l7 
j l6
l5:
lw $t8, id2
li $t9, 1
add $t0 , $t8 , $t9
sw $t0 , id2
j l4
l6:
li $t1, 0
sw $t1 , id3
l8:
lw $t2, id3
lw $t3, id1
lw $t4, id2
sub $t5 , $t3 , $t4
li $t6, 1
sub $t7 , $t5 , $t6
slt $t8 , $t2 , $t7
beq $t8 , $zero , l11 
j l10
l9:
lw $t9, id3
li $t0, 1
add $t1 , $t9 , $t0
sw $t1 , id3
j l8
l10:
lw $t2, id3
sll $t3 , $t2 , 2
la $t4 , id0
add $t5 , $t4 , $t3
lw $t6 , 0($t5)
lw $t7, id3
li $t8, 1
add $t9 , $t7 , $t8
sll $t0 , $t9 , 2
la $t1 , id0
add $t2 , $t1 , $t0
lw $t3 , 0($t2)
sgt $t4 , $t6 , $t3
beq $t4 , $zero , l12 
lw $t5, id3
sll $t6 , $t5 , 2
la $t7 , id0
add $t8 , $t7 , $t6
lw $t9 , 0($t8)
sw $t9 , id4
lw $t0, id3
sll $t1 , $t0 , 2
la $t2 , id0
add $t3 , $t2 , $t1
lw $t4, id3
li $t5, 1
add $t6 , $t4 , $t5
sll $t7 , $t6 , 2
la $t8 , id0
add $t9 , $t8 , $t7
lw $t0 , 0($t9)
sw $t0 , 0($t3)
lw $t1, id3
li $t2, 1
add $t3 , $t1 , $t2
sll $t4 , $t3 , 2
la $t5 , id0
add $t6 , $t5 , $t4
lw $t7, id4
sw $t7 , 0($t6)
l12:
j l9
l11:
j l5
l7:
li $t8, 0
sw $t8 , id2
l14:
lw $t9, id2
lw $t0, id1
slt $t1 , $t9 , $t0
beq $t1 , $zero , l17 
j l16
l15:
lw $t2, id2
li $t3, 1
add $t4 , $t2 , $t3
sw $t4 , id2
j l14
l16:
lw $t5, id2
sll $t6 , $t5 , 2
la $t7 , id0
add $t8 , $t7 , $t6
lw $t9 , 0($t8)
li $v0 , 1
move $a0 , $t9
syscall
li $v0 , 4
la $a0 , id5
syscall
j l15
l17:
jr $ra
