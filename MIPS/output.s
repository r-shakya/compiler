size of charr type 7 
integer type parameter added to the function,number=0, 
 t0 = 1
id1 = t0 
t1 = id0
t2 = 0
t3 = t1 <= t2
if not t3 goto l0
return from function one
l0:
t4 = id0
t5 = 1
t6 = t4 - t5
id0 = t6 
t7 = id0
t8 = 1
t9 = t7 + t8
t10 = id2
t11 = t9 * t10
id2 = t11 
return from function factn
factorial function executed with send-type integer 

output "Enter Val :"

input      n

output "Val of Fact("

t12 = id3
output   n

output ") : "



Error: syntax error 


Syntax Error: in line no 23 >>>>> "factorial" 




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
	.asciiz "Val of Fact("
id6:
	.asciiz ") : "
id7:
	.word 0;
.text
.globl main
main:
li $v0 , 4
la $a0 , id4
syscall
li $v0 , 5
syscall
sw $v0 , id3
li $v0 , 4
la $a0 , id5
syscall
lw $t0, id3
li $v0 , 1
move $a0 , $t0
syscall
li $v0 , 4
la $a0 , id6
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
lw $t7, id0
li $t8, 1
add $t9 , $t7 , $t8
lw $t0, id2
mul $t1 , $t9 , $t0
sw $t1 , id2
lw $s0 , id2
jr $ra
jr $ra

