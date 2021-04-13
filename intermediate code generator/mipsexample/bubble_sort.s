.data
.word 30
.word 6
.word 18
.word 3
.word 7
.word 81
.word 67
.word 13
.word 5
.word 14


.text
.globl main
main:
addi $s6,$s6,0x10010000
add $t0,$zero,$zero
addi $t2,$zero,9
loop1:
beq $t0,$t2,exit1
sub $t4,$t2,$t0
loop2:
beq $t1,$t4,exit2
sll $t5,$t1,2
add $t5,$t5,$s6
lw $t6,0($t5)
lw $t7,4($t5)
slt $t8,$t6,$t7
bne $t8,$zero,exit3
sw $t7,0($t5)
sw $t6,4($t5)
exit3:
addi $t1,$t1,1
j loop2
exit2:
add $t1,$zero,$zero
addi $t0,$t0,1
j loop1
exit1:
jr $ra
