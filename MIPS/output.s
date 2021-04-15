t0 = 7
id1 = t0 
t1 = 0
id2 = t1 
l0:
t2 = id2
t3 = id1
t4 = t2 < t3
if not t4 goto l3
goto l2
l1:
t5 = id2
t6 = 1
t7 = t5 + t6
id2 = t7 
goto l0
l2:
t8 = id2
t9 = 4 * t8
t10 = &id0
t11 = t10 + t9
t12 = 6
t13 = id2
t14 = t12 - t13
*t11 = t14
goto l1
l3:
output---->"hello world"

input---->n

t16 = 0
id2 = t16 
l4:
t17 = id2
t18 = id1
t19 = 1
t20 = t18 - t19
t21 = t17 < t20
if not t21 goto l7
goto l6
l5:
t22 = id2
t23 = 1
t24 = t22 + t23
id2 = t24 
goto l4
l6:
t25 = 0
id3 = t25 
l8:
t26 = id3
t27 = id1
t28 = id2
t29 = t27 - t28
t30 = 1
t31 = t29 - t30
t32 = t26 < t31
if not t32 goto l11
goto l10
l9:
t33 = id3
t34 = 1
t35 = t33 + t34
id3 = t35 
goto l8
l10:
t36 = id3
t37 = 4 * t36
t38 = &id0
t39 = t38 + t37
t40 = *t39
t41 = id3
t42 = 1
t43 = t41 + t42
t44 = 4 * t43
t45 = &id0
t46 = t45 + t44
t47 = *t46
t48 = t40 > t47
if not t48 goto l12
t49 = id3
t50 = 4 * t49
t51 = &id0
t52 = t51 + t50
t53 = *t52
id4 = t53 
t54 = id3
t55 = 4 * t54
t56 = &id0
t57 = t56 + t55
t58 = id3
t59 = 1
t60 = t58 + t59
t61 = 4 * t60
t62 = &id0
t63 = t62 + t61
t64 = *t63
*t57 = t64
t66 = id3
t67 = 1
t68 = t66 + t67
t69 = 4 * t68
t70 = &id0
t71 = t70 + t69
t72 = id4
*t71 = t72
l12:
goto l9
l11:
goto l5
l7:




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