	.file	"test.c"
	.text
	.globl	matrix_multiply
	.type	matrix_multiply, @function
matrix_multiply:
.LFB5:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -40(%rbp)
	movq	%rsi, -48(%rbp)
	movl	%edx, -52(%rbp)
	movl	%ecx, -56(%rbp)
	movl	%r8d, -60(%rbp)
	movl	$4000000, %edi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	movl	$0, -20(%rbp)
	jmp	.L2
.L7:
	movl	$0, -16(%rbp)
	jmp	.L3
.L6:
	movl	$0, -12(%rbp)
	jmp	.L4
.L5:
	movq	-8(%rbp), %rax
	movl	-16(%rbp), %edx
	movslq	%edx, %rdx
	movl	-20(%rbp), %ecx
	movslq	%ecx, %rcx
	imulq	$1000, %rcx, %rcx
	addq	%rcx, %rdx
	movl	(%rax,%rdx,4), %edx
	movq	-40(%rbp), %rax
	movl	-12(%rbp), %ecx
	movslq	%ecx, %rcx
	movl	-20(%rbp), %esi
	movslq	%esi, %rsi
	imulq	$1000, %rsi, %rsi
	addq	%rsi, %rcx
	movl	(%rax,%rcx,4), %ecx
	movq	-48(%rbp), %rax
	movl	-16(%rbp), %esi
	movslq	%esi, %rsi
	movl	-12(%rbp), %edi
	movslq	%edi, %rdi
	imulq	$1000, %rdi, %rdi
	addq	%rdi, %rsi
	movl	(%rax,%rsi,4), %eax
	imull	%ecx, %eax
	leal	(%rdx,%rax), %ecx
	movq	-8(%rbp), %rax
	movl	-16(%rbp), %edx
	movslq	%edx, %rdx
	movl	-20(%rbp), %esi
	movslq	%esi, %rsi
	imulq	$1000, %rsi, %rsi
	addq	%rsi, %rdx
	movl	%ecx, (%rax,%rdx,4)
	addl	$1, -12(%rbp)
.L4:
	movl	-12(%rbp), %eax
	cmpl	-56(%rbp), %eax
	jl	.L5
	addl	$1, -16(%rbp)
.L3:
	movl	-16(%rbp), %eax
	cmpl	-60(%rbp), %eax
	jl	.L6
	addl	$1, -20(%rbp)
.L2:
	movl	-20(%rbp), %eax
	cmpl	-52(%rbp), %eax
	jl	.L7
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	matrix_multiply, .-matrix_multiply
	.section	.rodata
.LC0:
	.string	"%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$8000048, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -8000036(%rbp)
	jmp	.L10
.L13:
	movl	$0, -8000032(%rbp)
	jmp	.L11
.L12:
	movl	-8000032(%rbp), %eax
	cltq
	movl	-8000036(%rbp), %edx
	movslq	%edx, %rdx
	imulq	$1000, %rdx, %rdx
	addq	%rdx, %rax
	movl	$2, -8000016(%rbp,%rax,4)
	movl	-8000032(%rbp), %eax
	cltq
	movl	-8000036(%rbp), %edx
	movslq	%edx, %rdx
	imulq	$1000, %rdx, %rdx
	addq	%rdx, %rax
	movl	$2, -4000016(%rbp,%rax,4)
	addl	$1, -8000032(%rbp)
.L11:
	cmpl	$999, -8000032(%rbp)
	jle	.L12
	addl	$1, -8000036(%rbp)
.L10:
	cmpl	$999, -8000036(%rbp)
	jle	.L13
	leaq	-4000016(%rbp), %rsi
	leaq	-8000016(%rbp), %rax
	movl	$1000, %r8d
	movl	$1000, %ecx
	movl	$1000, %edx
	movq	%rax, %rdi
	call	matrix_multiply
	movq	%rax, -8000024(%rbp)
	movl	$0, -8000028(%rbp)
	jmp	.L14
.L15:
	movq	-8000024(%rbp), %rdx
	movl	-8000028(%rbp), %eax
	cltq
	imulq	$4000, %rax, %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -8000028(%rbp)
.L14:
	cmpl	$0, -8000028(%rbp)
	jle	.L15
	movl	$0, %eax
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L17
	call	__stack_chk_fail@PLT
.L17:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
