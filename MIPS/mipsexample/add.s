.data

x:
        .word 0;
y:
        .word 0;
z:
        .word 0;
.text
.globl main
main:

li $t0 , 6
sw $t0 , x

li $t1 , 8
sw $t1 , y

lw $t2 , x
lw $t3 , y

slt $t4 , $t2 , $t3
beq $t4 , $zero , l0

lw $t5 , x
lw $t6 , y

sub $t7 , $t5 , $t6
sw $t7 , z

l0 :
	lw $t8 , x
	lw $t9 , y

	add $t0 , $t8 , $t9
	sw $t0 , z
	
jr $ra
