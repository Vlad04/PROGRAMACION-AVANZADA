	.file	"two-sum.c"
	.text
	.globl	get_Indexes
	.type	get_Indexes, @function
get_Indexes:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -40(%rbp)
	movl	%esi, -44(%rbp)
	movl	%edx, -48(%rbp)
	movl	$4, %esi
	movl	$2, %edi
	call	calloc
	movq	%rax, -8(%rbp)
	movl	$0, -24(%rbp)
	jmp	.L2
.L10:
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	-48(%rbp), %eax
	jl	.L3
	jmp	.L4
.L3:
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %eax
	movl	-48(%rbp), %edx
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -12(%rbp)
	movl	-24(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -20(%rbp)
	jmp	.L5
.L8:
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	-12(%rbp), %eax
	jne	.L6
	jmp	.L7
.L6:
	addl	$1, -20(%rbp)
.L5:
	movl	-20(%rbp), %eax
	cmpl	-44(%rbp), %eax
	jl	.L8
.L7:
	movl	-24(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-40(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-20(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-40(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	addl	%edx, %eax
	cmpl	-48(%rbp), %eax
	jne	.L4
	movq	-8(%rbp), %rax
	movl	-24(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rax
	leaq	4(%rax), %rdx
	movl	-20(%rbp), %eax
	movl	%eax, (%rdx)
	movq	-8(%rbp), %rax
	jmp	.L9
.L4:
	addl	$1, -24(%rbp)
.L2:
	movl	-44(%rbp), %eax
	subl	$1, %eax
	cmpl	-24(%rbp), %eax
	jg	.L10
	movl	$0, %eax
.L9:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	get_Indexes, .-get_Indexes
	.section	.rodata
.LC0:
	.string	"Now please write the target"
.LC1:
	.string	"%d"
.LC2:
	.string	"it works"
.LC3:
	.string	"SAD"
	.text
	.globl	main
	.type	main, @function
main:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	$.LC0, %edi
	call	puts
	leaq	-36(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	$2, -16(%rbp)
	movl	$7, -12(%rbp)
	movl	$11, -8(%rbp)
	movl	$15, -4(%rbp)
	movl	$9, -32(%rbp)
	movl	$4, -28(%rbp)
	movl	-36(%rbp), %edx
	movl	-28(%rbp), %ecx
	leaq	-16(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	get_Indexes
	movq	%rax, -24(%rbp)
	cmpq	$0, -24(%rbp)
	je	.L12
	movq	-24(%rbp), %rax
	movl	(%rax), %eax
	cltq
	movl	-16(%rbp,%rax,4), %edx
	movq	-24(%rbp), %rax
	addq	$4, %rax
	movl	(%rax), %eax
	cltq
	movl	-16(%rbp,%rax,4), %eax
	addl	%eax, %edx
	movl	-36(%rbp), %eax
	cmpl	%eax, %edx
	jne	.L12
	movl	$.LC2, %edi
	call	puts
	jmp	.L13
.L12:
	movl	$.LC3, %edi
	call	puts
.L13:
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
