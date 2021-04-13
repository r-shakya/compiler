	.file	"tess.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$432, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$12, -424(%rbp)
	movl	$0, -428(%rbp)
	jmp	.L2
.L5:
	movl	-432(%rbp), %eax
	cmpl	-420(%rbp), %eax
	jge	.L3
	movl	$2, -428(%rbp)
	movl	-420(%rbp), %eax
	cmpl	-428(%rbp), %eax
	jge	.L4
	movl	$67, -428(%rbp)
	jmp	.L4
.L3:
	movl	-428(%rbp), %eax
	subl	-420(%rbp), %eax
	movl	%eax, -432(%rbp)
.L4:
	addl	$1, -428(%rbp)
.L2:
	movl	-424(%rbp), %eax
	subl	$1, %eax
	cmpl	%eax, -428(%rbp)
	jl	.L5
	movl	$1, -424(%rbp)
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L7
	call	__stack_chk_fail@PLT
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
