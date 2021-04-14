
.data
id0:
	.space 28;
id1:
	.word 0;
id2:
	.word 0;
id3:
	.word 0;
id4:
	.word 0;
.text
.globl main
main:
li $t0, 7
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
li $t2, 6
lw $t3, id2
sub $t4 , $t2 , $t3
sw $t4 , 0($t1)
j l1
l3:
li $t5, 0
sw $t5 , id2
l4:
lw $t6, id2
lw $t7, id1
li $t8, 1
sub $t9 , $t7 , $t8
slt $t0 , $t6 , $t9
beq $t0 , $zero , l7 
j l6
l5:
lw $t1, id2
li $t2, 1
add $t3 , $t1 , $t2
sw $t3 , id2
j l4
l6:
li $t4, 0
sw $t4 , id3
l8:
lw $t5, id3
lw $t6, id1
lw $t7, id2
sub $t8 , $t6 , $t7
li $t9, 1
sub $t0 , $t8 , $t9
slt $t1 , $t5 , $t0
beq $t1 , $zero , l11 
j l10
l9:
lw $t2, id3
li $t3, 1
add $t4 , $t2 , $t3
sw $t4 , id3
j l8
l10:
lw $t5, id3
sll $t6 , $t5 , 2
la $t7 , id0
add $t8 , $t7 , $t6
lw $t9 , 0($t8)
lw $t0, id3
li $t1, 1
add $t2 , $t0 , $t1
sll $t3 , $t2 , 2
la $t4 , id0
add $t5 , $t4 , $t3
lw $t6 , 0($t5)
sgt $t7 , $t9 , $t6
beq $t7 , $zero , l12 
lw $t8, id3
sll $t9 , $t8 , 2
la $t0 , id0
add $t1 , $t0 , $t9
lw $t2 , 0($t1)
sw $t2 , id4
lw $t3, id3
sll $t4 , $t3 , 2
la $t5 , id0
add $t6 , $t5 , $t4
lw $t7, id3
li $t8, 1
add $t9 , $t7 , $t8
sll $t0 , $t9 , 2
la $t1 , id0
add $t2 , $t1 , $t0
lw $t3 , 0($t2)
sw $t3 , 0($t6)
lw $t4, id3
li $t5, 1
add $t6 , $t4 , $t5
sll $t7 , $t6 , 2
la $t8 , id0
add $t9 , $t8 , $t7
lw $t0, id4
sw $t0 , 0($t9)
l12:
j l9
l11:
j l5
l7:
jr $ra
