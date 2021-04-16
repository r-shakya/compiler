t0 = 14
id3 = t0 
t1 = id3
t2 = 0
t3 = t2 - t1
t4 = 20
t5 = t3 + t4
t6 = 2
t7 = t5 + t6
id1 = t7 
t8 = 0
id2 = t8 
l0:
t9 = id2
t10 = id1
t11 = t9 < t10
if not t11 goto l3
goto l2
l1:
t12 = id2
t13 = 1
t14 = t12 + t13
id2 = t14 
goto l0
l2:
t15 = id2
t16 = 4 * t15
t17 = &id0
t18 = t17 + t16
input      array

goto l1
l3:
output "hello world\n"

t19 = 4
id6 = t19 
t20 = 0
id2 = t20 
l4:
t21 = id2
t22 = id1
t23 = 1
t24 = t22 - t23
t25 = t21 < t24
if not t25 goto l7
goto l6
l5:
t26 = id2
t27 = 1
t28 = t26 + t27
id2 = t28 
goto l4
l6:
t29 = 0
id3 = t29 
l8:
t30 = id3
t31 = id1
t32 = id2
t33 = t31 - t32
t34 = 1
t35 = t33 - t34
t36 = t30 < t35
if not t36 goto l11
goto l10
l9:
t37 = id3
t38 = 1
t39 = t37 + t38
id3 = t39 
goto l8
l10:
t40 = id3
t41 = 4 * t40
t42 = &id0
t43 = t42 + t41
t44 = *t43
t45 = id3
t46 = 1
t47 = t45 + t46
t48 = 4 * t47
t49 = &id0
t50 = t49 + t48
t51 = *t50
t52 = t44 > t51
if not t52 goto l12
t53 = id3
t54 = 4 * t53
t55 = &id0
t56 = t55 + t54
t57 = *t56
id4 = t57 
t58 = id3
t59 = 4 * t58
t60 = &id0
t61 = t60 + t59
t62 = id3
t63 = 1
t64 = t62 + t63
t65 = 4 * t64
t66 = &id0
t67 = t66 + t65
t68 = *t67
*t61 = t68
t70 = id3
t71 = 1
t72 = t70 + t71
t73 = 4 * t72
t74 = &id0
t75 = t74 + t73
t76 = id4
*t75 = t76
l12:
goto l9
l11:
goto l5
l7:
t78 = 1
t79 = 4 * t78
t80 = &id0
t81 = t80 + t79
t82 = *t81
if not t82 goto l14
t83 = id6
output   count

l14:




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
li $t6, 1
sll $t7 , $t6 , 2
la $t8 , id0
add $t9 , $t8 , $t7
lw $t0 , 0($t9)
beq $t0 , $zero , l14 
lw $t1, id6
li $v0 , 1
move $a0 , $t1
syscall
l14:
jr $ra