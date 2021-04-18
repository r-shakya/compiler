idnum before0size of charr type 7 
integer type parameter added to the function,number=0, 
 var type n = integer
idnum after1t0 = 1
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
id3 = t6 
number new_n added as parameter
id3 = send of factorial  
t7 = id0
t8 = id2
t9 = t7 * t8
id2 = t9 
return from function factn
factorial function executed with send-type integer 

output "Enter Val :"

input      n

number n added as parameter
id4 = send of factorial  
output "Val of Fact("

t10 = id4
output   n

output ") : "

t11 = id6
output   factn

output "\n"





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
	.word 0;
id5:
	.asciiz "Enter Val :"
id6:
	.word 0;
id7:
	.asciiz "Val of Fact("
id8:
	.asciiz ") : "
id9:
	.asciiz "\n"
.text
.globl main
main:
li $v0 , 4
la $a0 , id5
syscall
li $v0 , 5
syscall
sw $v0 , id4
lw $s3 , id4
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
sw $s0 , id6
li $v0 , 4
la $a0 , id7
syscall
lw $t0, id4
li $v0 , 1
move $a0 , $t0
syscall
li $v0 , 4
la $a0 , id8
syscall
lw $t1, id6
li $v0 , 1
move $a0 , $t1
syscall
li $v0 , 4
la $a0 , id9
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
sw $t6 , id3
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
addi $sp , $sp , -16
lw $s2 , id0
sw $s2 , 0($sp)
lw $s2 , id1
sw $s2 , 4($sp)
lw $s2 , id2
sw $s2 , 8($sp)
lw $s2 , id3
sw $s2 , 12($sp)
jal factorial 
lw $s2 , 0($sp)
sw $s2 , id0
lw $s2 , 4($sp)
sw $s2 , id1
lw $s2 , 8($sp)
sw $s2 , id2
lw $s2 , 12($sp)
sw $s2 , id3
addi $sp , $sp , 16
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
lw $t8, id2
mul $t9 , $t7 , $t8
sw $t9 , id2
lw $s0 , id2
jr $ra
jr $ra

