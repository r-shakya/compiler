t0 = 8
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
input      array

goto l1
l3:
t12 = 0
id2 = t12 
l4:
t13 = id2
t14 = id1
t15 = 1
t16 = t14 - t15
t17 = t13 < t16
if not t17 goto l7
goto l6
l5:
t18 = id2
t19 = 1
t20 = t18 + t19
id2 = t20 
goto l4
l6:
t21 = 0
id3 = t21 
l8:
t22 = id3
t23 = id1
t24 = id2
t25 = t23 - t24
t26 = 1
t27 = t25 - t26
t28 = t22 < t27
if not t28 goto l11
goto l10
l9:
t29 = id3
t30 = 1
t31 = t29 + t30
id3 = t31 
goto l8
l10:
t32 = id3
t33 = 4 * t32
t34 = &id0
t35 = t34 + t33
t36 = *t35
t37 = id3
t38 = 1
t39 = t37 + t38
t40 = 4 * t39
t41 = &id0
t42 = t41 + t40
t43 = *t42
t44 = t36 > t43
if not t44 goto l12
t45 = id3
t46 = 4 * t45
t47 = &id0
t48 = t47 + t46
t49 = *t48
id4 = t49 
t50 = id3
t51 = 4 * t50
t52 = &id0
t53 = t52 + t51
t54 = id3
t55 = 1
t56 = t54 + t55
t57 = 4 * t56
t58 = &id0
t59 = t58 + t57
t60 = *t59
*t53 = t60
t62 = id3
t63 = 1
t64 = t62 + t63
t65 = 4 * t64
t66 = &id0
t67 = t66 + t65
t68 = id4
*t67 = t68
l12:
goto l9
l11:
goto l5
l7:
t70 = 0
id2 = t70 
l14:
t71 = id2
t72 = id1
t73 = t71 < t72
if not t73 goto l17
goto l16
l15:
t74 = id2
t75 = 1
t76 = t74 + t75
id2 = t76 
goto l14
l16:
t77 = id2
t78 = 4 * t77
t79 = &id0
t80 = t79 + t78
t81 = *t80
output   array

output "   "

goto l15
l17:




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

