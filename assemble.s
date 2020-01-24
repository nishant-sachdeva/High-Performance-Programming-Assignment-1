	.file	"merge_sort_template.c"
	.text
.Ltext0:
	.globl	merge
	.type	merge, @function
merge:
.LFB5:
	.file 1 "q2.c"
	.loc 1 5 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r15
	pushq	%r14
	pushq	%r13
	pushq	%r12
	subq	$96, %rsp
	.cfi_offset 15, -24
	.cfi_offset 14, -32
	.cfi_offset 13, -40
	.cfi_offset 12, -48
	movq	%rdi, -104(%rbp)
	movl	%esi, -108(%rbp)
	movl	%edx, -112(%rbp)
	movl	%ecx, -116(%rbp)
	.loc 1 5 0
	movq	%fs:40, %rax
	movq	%rax, -40(%rbp)
	xorl	%eax, %eax
	movq	%rsp, %rax
	movq	%rax, %rsi
	.loc 1 7 0
	movl	-112(%rbp), %eax
	subl	-108(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -80(%rbp)
	.loc 1 8 0
	movl	-116(%rbp), %eax
	subl	-112(%rbp), %eax
	movl	%eax, -76(%rbp)
	.loc 1 11 0
	movl	-80(%rbp), %eax
	movslq	%eax, %rdx
	subq	$1, %rdx
	movq	%rdx, -72(%rbp)
	movslq	%eax, %rdx
	movq	%rdx, %r14
	movl	$0, %r15d
	movslq	%eax, %rdx
	movq	%rdx, %r12
	movl	$0, %r13d
	cltq
	salq	$2, %rax
	leaq	3(%rax), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %edi
	movl	$0, %edx
	divq	%rdi
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -64(%rbp)
	movl	-76(%rbp), %eax
	movslq	%eax, %rdx
	subq	$1, %rdx
	movq	%rdx, -56(%rbp)
	movslq	%eax, %rdx
	movq	%rdx, %r10
	movl	$0, %r11d
	movslq	%eax, %rdx
	movq	%rdx, %r8
	movl	$0, %r9d
	cltq
	salq	$2, %rax
	leaq	3(%rax), %rdx
	movl	$16, %eax
	subq	$1, %rax
	addq	%rdx, %rax
	movl	$16, %edi
	movl	$0, %edx
	divq	%rdi
	imulq	$16, %rax, %rax
	subq	%rax, %rsp
	movq	%rsp, %rax
	addq	$3, %rax
	shrq	$2, %rax
	salq	$2, %rax
	movq	%rax, -48(%rbp)
	.loc 1 14 0
	movl	$0, -84(%rbp)
	jmp	.L2
.L3:
	.loc 1 15 0 discriminator 3
	movl	-108(%rbp), %edx
	movl	-84(%rbp), %eax
	addl	%edx, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-104(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %ecx
	movq	-64(%rbp), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	movl	%ecx, (%rax,%rdx,4)
	.loc 1 14 0 discriminator 3
	addl	$1, -84(%rbp)
.L2:
	.loc 1 14 0 is_stmt 0 discriminator 1
	movl	-84(%rbp), %eax
	cmpl	-80(%rbp), %eax
	jl	.L3
	.loc 1 16 0 is_stmt 1
	movl	$0, -88(%rbp)
	jmp	.L4
.L5:
	.loc 1 17 0 discriminator 3
	movl	-112(%rbp), %eax
	leal	1(%rax), %edx
	movl	-88(%rbp), %eax
	addl	%edx, %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-104(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %ecx
	movq	-48(%rbp), %rax
	movl	-88(%rbp), %edx
	movslq	%edx, %rdx
	movl	%ecx, (%rax,%rdx,4)
	.loc 1 16 0 discriminator 3
	addl	$1, -88(%rbp)
.L4:
	.loc 1 16 0 is_stmt 0 discriminator 1
	movl	-88(%rbp), %eax
	cmpl	-76(%rbp), %eax
	jl	.L5
	.loc 1 20 0 is_stmt 1
	movl	$0, -84(%rbp)
	.loc 1 21 0
	movl	$0, -88(%rbp)
	.loc 1 22 0
	movl	-108(%rbp), %eax
	movl	%eax, -92(%rbp)
	.loc 1 23 0
	jmp	.L6
.L10:
	.loc 1 25 0
	movq	-64(%rbp), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %ecx
	movq	-48(%rbp), %rax
	movl	-88(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	cmpl	%eax, %ecx
	jg	.L7
	.loc 1 27 0
	movl	-92(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-104(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movq	-64(%rbp), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	movl	%eax, (%rcx)
	.loc 1 28 0
	addl	$1, -84(%rbp)
	jmp	.L8
.L7:
	.loc 1 32 0
	movl	-92(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-104(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movq	-48(%rbp), %rax
	movl	-88(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	movl	%eax, (%rcx)
	.loc 1 33 0
	addl	$1, -88(%rbp)
.L8:
	.loc 1 35 0
	addl	$1, -92(%rbp)
.L6:
	.loc 1 23 0
	movl	-84(%rbp), %eax
	cmpl	-80(%rbp), %eax
	jge	.L11
	.loc 1 23 0 is_stmt 0 discriminator 1
	movl	-88(%rbp), %eax
	cmpl	-76(%rbp), %eax
	jl	.L10
	.loc 1 40 0 is_stmt 1
	jmp	.L11
.L12:
	.loc 1 42 0
	movl	-92(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-104(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movq	-64(%rbp), %rax
	movl	-84(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	movl	%eax, (%rcx)
	.loc 1 43 0
	addl	$1, -84(%rbp)
	.loc 1 44 0
	addl	$1, -92(%rbp)
.L11:
	.loc 1 40 0
	movl	-84(%rbp), %eax
	cmpl	-80(%rbp), %eax
	jl	.L12
	.loc 1 49 0
	jmp	.L13
.L14:
	.loc 1 51 0
	movl	-92(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-104(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	movq	-48(%rbp), %rax
	movl	-88(%rbp), %edx
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax
	movl	%eax, (%rcx)
	.loc 1 52 0
	addl	$1, -88(%rbp)
	.loc 1 53 0
	addl	$1, -92(%rbp)
.L13:
	.loc 1 49 0
	movl	-88(%rbp), %eax
	cmpl	-76(%rbp), %eax
	jl	.L14
	movq	%rsi, %rsp
	.loc 1 55 0
	nop
	movq	-40(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L15
	call	__stack_chk_fail@PLT
.L15:
	leaq	-32(%rbp), %rsp
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE5:
	.size	merge, .-merge
	.globl	merge_sort
	.type	merge_sort, @function
merge_sort:
.LFB6:
	.loc 1 59 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	%edx, -32(%rbp)
	.loc 1 61 0
	movl	-28(%rbp), %eax
	cmpl	-32(%rbp), %eax
	jge	.L19
.LBB2:
	.loc 1 65 0
	movl	-32(%rbp), %eax
	subl	-28(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, %edx
	movl	-28(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, -4(%rbp)
	.loc 1 68 0
	movl	-4(%rbp), %edx
	movl	-28(%rbp), %ecx
	movq	-24(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	merge_sort
	.loc 1 69 0
	movl	-4(%rbp), %eax
	leal	1(%rax), %ecx
	movl	-32(%rbp), %edx
	movq	-24(%rbp), %rax
	movl	%ecx, %esi
	movq	%rax, %rdi
	call	merge_sort
	.loc 1 71 0
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-4(%rbp), %eax
	cltq
	addq	$1, %rax
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jle	.L19
	.loc 1 72 0
	movl	-32(%rbp), %ecx
	movl	-4(%rbp), %edx
	movl	-28(%rbp), %esi
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	merge
.LBE2:
	.loc 1 74 0
	nop
.L19:
	nop
	.loc 1 75 0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	merge_sort, .-merge_sort
	.section	.rodata
.LC1:
	.string	"Took %f seconds to execute \n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB7:
	.file 2 "merge_sort_template.c"
	.loc 2 13 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$4000064, %rsp
	.loc 2 13 0
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
.LBB3:
	.loc 2 18 0
	movl	$0, -4000044(%rbp)
	jmp	.L21
.L22:
	.loc 2 19 0 discriminator 3
	movl	$1000000, %eax
	subl	-4000044(%rbp), %eax
	movl	%eax, %edx
	movl	-4000044(%rbp), %eax
	cltq
	movl	%edx, -4000016(%rbp,%rax,4)
	.loc 2 18 0 discriminator 3
	addl	$1, -4000044(%rbp)
.L21:
	.loc 2 18 0 is_stmt 0 discriminator 1
	cmpl	$999999, -4000044(%rbp)
	jle	.L22
.LBE3:
	.loc 2 23 0 is_stmt 1
	call	clock@PLT
	movq	%rax, -4000040(%rbp)
	.loc 2 27 0
	leaq	-4000016(%rbp), %rax
	movl	$999999, %edx
	movl	$0, %esi
	movq	%rax, %rdi
	call	merge_sort
	.loc 2 29 0
	call	clock@PLT
	subq	-4000040(%rbp), %rax
	movq	%rax, -4000032(%rbp)
	.loc 2 31 0
	cvtsi2sdq	-4000032(%rbp), %xmm0
	movsd	.LC0(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, -4000024(%rbp)
	.loc 2 33 0
	movq	-4000024(%rbp), %rax
	movq	%rax, -4000056(%rbp)
	movsd	-4000056(%rbp), %xmm0
	leaq	.LC1(%rip), %rdi
	movl	$1, %eax
	call	printf@PLT
	movl	$0, %eax
	.loc 2 35 0
	movq	-8(%rbp), %rcx
	xorq	%fs:40, %rcx
	je	.L24
	call	__stack_chk_fail@PLT
.L24:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	main, .-main
	.section	.rodata
	.align 8
.LC0:
	.long	0
	.long	1093567616
	.text
.Letext0:
	.file 3 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h"
	.file 4 "/usr/include/x86_64-linux-gnu/bits/types.h"
	.file 5 "/usr/include/x86_64-linux-gnu/bits/libio.h"
	.file 6 "/usr/include/stdio.h"
	.file 7 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h"
	.file 8 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h"
	.file 9 "/usr/include/time.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.long	0x555
	.value	0x4
	.long	.Ldebug_abbrev0
	.byte	0x8
	.uleb128 0x1
	.long	.LASF72
	.byte	0xc
	.long	.LASF73
	.long	.LASF74
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.long	.Ldebug_line0
	.uleb128 0x2
	.long	.LASF7
	.byte	0x3
	.byte	0xd8
	.long	0x38
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.long	.LASF0
	.uleb128 0x3
	.byte	0x1
	.byte	0x8
	.long	.LASF1
	.uleb128 0x3
	.byte	0x2
	.byte	0x7
	.long	.LASF2
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.long	.LASF3
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.long	.LASF4
	.uleb128 0x3
	.byte	0x2
	.byte	0x5
	.long	.LASF5
	.uleb128 0x4
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.long	.LASF6
	.uleb128 0x2
	.long	.LASF8
	.byte	0x4
	.byte	0x8c
	.long	0x69
	.uleb128 0x2
	.long	.LASF9
	.byte	0x4
	.byte	0x8d
	.long	0x69
	.uleb128 0x2
	.long	.LASF10
	.byte	0x4
	.byte	0x90
	.long	0x69
	.uleb128 0x5
	.byte	0x8
	.uleb128 0x6
	.byte	0x8
	.long	0x99
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.long	.LASF11
	.uleb128 0x7
	.long	0x99
	.uleb128 0x8
	.long	.LASF41
	.byte	0xd8
	.byte	0x5
	.byte	0xf5
	.long	0x225
	.uleb128 0x9
	.long	.LASF12
	.byte	0x5
	.byte	0xf6
	.long	0x62
	.byte	0
	.uleb128 0x9
	.long	.LASF13
	.byte	0x5
	.byte	0xfb
	.long	0x93
	.byte	0x8
	.uleb128 0x9
	.long	.LASF14
	.byte	0x5
	.byte	0xfc
	.long	0x93
	.byte	0x10
	.uleb128 0x9
	.long	.LASF15
	.byte	0x5
	.byte	0xfd
	.long	0x93
	.byte	0x18
	.uleb128 0x9
	.long	.LASF16
	.byte	0x5
	.byte	0xfe
	.long	0x93
	.byte	0x20
	.uleb128 0x9
	.long	.LASF17
	.byte	0x5
	.byte	0xff
	.long	0x93
	.byte	0x28
	.uleb128 0xa
	.long	.LASF18
	.byte	0x5
	.value	0x100
	.long	0x93
	.byte	0x30
	.uleb128 0xa
	.long	.LASF19
	.byte	0x5
	.value	0x101
	.long	0x93
	.byte	0x38
	.uleb128 0xa
	.long	.LASF20
	.byte	0x5
	.value	0x102
	.long	0x93
	.byte	0x40
	.uleb128 0xa
	.long	.LASF21
	.byte	0x5
	.value	0x104
	.long	0x93
	.byte	0x48
	.uleb128 0xa
	.long	.LASF22
	.byte	0x5
	.value	0x105
	.long	0x93
	.byte	0x50
	.uleb128 0xa
	.long	.LASF23
	.byte	0x5
	.value	0x106
	.long	0x93
	.byte	0x58
	.uleb128 0xa
	.long	.LASF24
	.byte	0x5
	.value	0x108
	.long	0x25d
	.byte	0x60
	.uleb128 0xa
	.long	.LASF25
	.byte	0x5
	.value	0x10a
	.long	0x263
	.byte	0x68
	.uleb128 0xa
	.long	.LASF26
	.byte	0x5
	.value	0x10c
	.long	0x62
	.byte	0x70
	.uleb128 0xa
	.long	.LASF27
	.byte	0x5
	.value	0x110
	.long	0x62
	.byte	0x74
	.uleb128 0xa
	.long	.LASF28
	.byte	0x5
	.value	0x112
	.long	0x70
	.byte	0x78
	.uleb128 0xa
	.long	.LASF29
	.byte	0x5
	.value	0x116
	.long	0x46
	.byte	0x80
	.uleb128 0xa
	.long	.LASF30
	.byte	0x5
	.value	0x117
	.long	0x54
	.byte	0x82
	.uleb128 0xa
	.long	.LASF31
	.byte	0x5
	.value	0x118
	.long	0x269
	.byte	0x83
	.uleb128 0xa
	.long	.LASF32
	.byte	0x5
	.value	0x11c
	.long	0x279
	.byte	0x88
	.uleb128 0xa
	.long	.LASF33
	.byte	0x5
	.value	0x125
	.long	0x7b
	.byte	0x90
	.uleb128 0xa
	.long	.LASF34
	.byte	0x5
	.value	0x12d
	.long	0x91
	.byte	0x98
	.uleb128 0xa
	.long	.LASF35
	.byte	0x5
	.value	0x12e
	.long	0x91
	.byte	0xa0
	.uleb128 0xa
	.long	.LASF36
	.byte	0x5
	.value	0x12f
	.long	0x91
	.byte	0xa8
	.uleb128 0xa
	.long	.LASF37
	.byte	0x5
	.value	0x130
	.long	0x91
	.byte	0xb0
	.uleb128 0xa
	.long	.LASF38
	.byte	0x5
	.value	0x132
	.long	0x2d
	.byte	0xb8
	.uleb128 0xa
	.long	.LASF39
	.byte	0x5
	.value	0x133
	.long	0x62
	.byte	0xc0
	.uleb128 0xa
	.long	.LASF40
	.byte	0x5
	.value	0x135
	.long	0x27f
	.byte	0xc4
	.byte	0
	.uleb128 0xb
	.long	.LASF75
	.byte	0x5
	.byte	0x9a
	.uleb128 0x8
	.long	.LASF42
	.byte	0x18
	.byte	0x5
	.byte	0xa0
	.long	0x25d
	.uleb128 0x9
	.long	.LASF43
	.byte	0x5
	.byte	0xa1
	.long	0x25d
	.byte	0
	.uleb128 0x9
	.long	.LASF44
	.byte	0x5
	.byte	0xa2
	.long	0x263
	.byte	0x8
	.uleb128 0x9
	.long	.LASF45
	.byte	0x5
	.byte	0xa6
	.long	0x62
	.byte	0x10
	.byte	0
	.uleb128 0x6
	.byte	0x8
	.long	0x22c
	.uleb128 0x6
	.byte	0x8
	.long	0xa5
	.uleb128 0xc
	.long	0x99
	.long	0x279
	.uleb128 0xd
	.long	0x38
	.byte	0
	.byte	0
	.uleb128 0x6
	.byte	0x8
	.long	0x225
	.uleb128 0xc
	.long	0x99
	.long	0x28f
	.uleb128 0xd
	.long	0x38
	.byte	0x13
	.byte	0
	.uleb128 0xe
	.long	.LASF76
	.uleb128 0xf
	.long	.LASF46
	.byte	0x5
	.value	0x13f
	.long	0x28f
	.uleb128 0xf
	.long	.LASF47
	.byte	0x5
	.value	0x140
	.long	0x28f
	.uleb128 0xf
	.long	.LASF48
	.byte	0x5
	.value	0x141
	.long	0x28f
	.uleb128 0x6
	.byte	0x8
	.long	0xa0
	.uleb128 0x7
	.long	0x2b8
	.uleb128 0x10
	.long	.LASF49
	.byte	0x6
	.byte	0x87
	.long	0x263
	.uleb128 0x10
	.long	.LASF50
	.byte	0x6
	.byte	0x88
	.long	0x263
	.uleb128 0x10
	.long	.LASF51
	.byte	0x6
	.byte	0x89
	.long	0x263
	.uleb128 0x10
	.long	.LASF52
	.byte	0x7
	.byte	0x1a
	.long	0x62
	.uleb128 0xc
	.long	0x2be
	.long	0x2fa
	.uleb128 0x11
	.byte	0
	.uleb128 0x7
	.long	0x2ef
	.uleb128 0x10
	.long	.LASF53
	.byte	0x7
	.byte	0x1b
	.long	0x2fa
	.uleb128 0x2
	.long	.LASF54
	.byte	0x8
	.byte	0x7
	.long	0x86
	.uleb128 0xc
	.long	0x93
	.long	0x325
	.uleb128 0xd
	.long	0x38
	.byte	0x1
	.byte	0
	.uleb128 0x10
	.long	.LASF55
	.byte	0x9
	.byte	0x9f
	.long	0x315
	.uleb128 0x10
	.long	.LASF56
	.byte	0x9
	.byte	0xa0
	.long	0x62
	.uleb128 0x10
	.long	.LASF57
	.byte	0x9
	.byte	0xa1
	.long	0x69
	.uleb128 0x10
	.long	.LASF58
	.byte	0x9
	.byte	0xa6
	.long	0x315
	.uleb128 0x10
	.long	.LASF59
	.byte	0x9
	.byte	0xae
	.long	0x62
	.uleb128 0x10
	.long	.LASF60
	.byte	0x9
	.byte	0xaf
	.long	0x69
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.long	.LASF61
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.long	.LASF62
	.uleb128 0x12
	.long	.LASF67
	.byte	0x2
	.byte	0xc
	.long	0x62
	.quad	.LFB7
	.quad	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.long	0x3fc
	.uleb128 0x13
	.string	"arr"
	.byte	0x2
	.byte	0xe
	.long	0x3fc
	.uleb128 0x5
	.byte	0x91
	.sleb128 -4000032
	.uleb128 0x14
	.long	.LASF63
	.byte	0x2
	.byte	0x15
	.long	0x30a
	.uleb128 0x5
	.byte	0x91
	.sleb128 -4000056
	.uleb128 0x14
	.long	.LASF64
	.byte	0x2
	.byte	0x15
	.long	0x30a
	.uleb128 0x5
	.byte	0x91
	.sleb128 -4000048
	.uleb128 0x14
	.long	.LASF65
	.byte	0x2
	.byte	0x1f
	.long	0x40f
	.uleb128 0x5
	.byte	0x91
	.sleb128 -4000040
	.uleb128 0x15
	.quad	.LBB3
	.quad	.LBE3-.LBB3
	.uleb128 0x13
	.string	"i"
	.byte	0x2
	.byte	0x12
	.long	0x62
	.uleb128 0x5
	.byte	0x91
	.sleb128 -4000060
	.byte	0
	.byte	0
	.uleb128 0xc
	.long	0x62
	.long	0x40f
	.uleb128 0x16
	.long	0x38
	.long	0xf423f
	.byte	0
	.uleb128 0x3
	.byte	0x8
	.byte	0x4
	.long	.LASF66
	.uleb128 0x17
	.long	.LASF68
	.byte	0x1
	.byte	0x3a
	.quad	.LFB6
	.quad	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.long	0x47c
	.uleb128 0x18
	.string	"arr"
	.byte	0x1
	.byte	0x3a
	.long	0x47c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0x19
	.long	.LASF69
	.byte	0x1
	.byte	0x3a
	.long	0x62
	.uleb128 0x2
	.byte	0x91
	.sleb128 -44
	.uleb128 0x19
	.long	.LASF70
	.byte	0x1
	.byte	0x3a
	.long	0x62
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0x15
	.quad	.LBB2
	.quad	.LBE2-.LBB2
	.uleb128 0x13
	.string	"m"
	.byte	0x1
	.byte	0x41
	.long	0x62
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.uleb128 0x6
	.byte	0x8
	.long	0x62
	.uleb128 0x17
	.long	.LASF71
	.byte	0x1
	.byte	0x4
	.quad	.LFB5
	.quad	.LFE5-.LFB5
	.uleb128 0x1
	.byte	0x9c
	.long	0x534
	.uleb128 0x18
	.string	"arr"
	.byte	0x1
	.byte	0x4
	.long	0x47c
	.uleb128 0x3
	.byte	0x91
	.sleb128 -120
	.uleb128 0x18
	.string	"l"
	.byte	0x1
	.byte	0x4
	.long	0x62
	.uleb128 0x3
	.byte	0x91
	.sleb128 -124
	.uleb128 0x18
	.string	"m"
	.byte	0x1
	.byte	0x4
	.long	0x62
	.uleb128 0x3
	.byte	0x91
	.sleb128 -128
	.uleb128 0x18
	.string	"r"
	.byte	0x1
	.byte	0x4
	.long	0x62
	.uleb128 0x3
	.byte	0x91
	.sleb128 -132
	.uleb128 0x13
	.string	"i"
	.byte	0x1
	.byte	0x6
	.long	0x62
	.uleb128 0x3
	.byte	0x91
	.sleb128 -100
	.uleb128 0x13
	.string	"j"
	.byte	0x1
	.byte	0x6
	.long	0x62
	.uleb128 0x3
	.byte	0x91
	.sleb128 -104
	.uleb128 0x13
	.string	"k"
	.byte	0x1
	.byte	0x6
	.long	0x62
	.uleb128 0x3
	.byte	0x91
	.sleb128 -108
	.uleb128 0x13
	.string	"n1"
	.byte	0x1
	.byte	0x7
	.long	0x62
	.uleb128 0x3
	.byte	0x91
	.sleb128 -96
	.uleb128 0x13
	.string	"n2"
	.byte	0x1
	.byte	0x8
	.long	0x62
	.uleb128 0x3
	.byte	0x91
	.sleb128 -92
	.uleb128 0x13
	.string	"L"
	.byte	0x1
	.byte	0xb
	.long	0x534
	.uleb128 0x4
	.byte	0x91
	.sleb128 -80
	.byte	0x6
	.uleb128 0x13
	.string	"R"
	.byte	0x1
	.byte	0xb
	.long	0x548
	.uleb128 0x3
	.byte	0x91
	.sleb128 -64
	.byte	0x6
	.byte	0
	.uleb128 0xc
	.long	0x62
	.long	0x548
	.uleb128 0x1a
	.long	0x38
	.uleb128 0x4
	.byte	0x91
	.sleb128 -88
	.byte	0x6
	.byte	0
	.uleb128 0x1b
	.long	0x62
	.uleb128 0x1a
	.long	0x38
	.uleb128 0x4
	.byte	0x91
	.sleb128 -72
	.byte	0x6
	.byte	0
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0x13
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x10
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x11
	.uleb128 0x21
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0x12
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x13
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x14
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x15
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.byte	0
	.byte	0
	.uleb128 0x16
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x6
	.byte	0
	.byte	0
	.uleb128 0x17
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x18
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x19
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x1a
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x1b
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.long	0x2c
	.value	0x2
	.long	.Ldebug_info0
	.byte	0x8
	.byte	0
	.value	0
	.value	0
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.quad	0
	.quad	0
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF8:
	.string	"__off_t"
.LASF13:
	.string	"_IO_read_ptr"
.LASF25:
	.string	"_chain"
.LASF7:
	.string	"size_t"
.LASF68:
	.string	"merge_sort"
.LASF31:
	.string	"_shortbuf"
.LASF48:
	.string	"_IO_2_1_stderr_"
.LASF19:
	.string	"_IO_buf_base"
.LASF62:
	.string	"long long unsigned int"
.LASF57:
	.string	"__timezone"
.LASF61:
	.string	"long long int"
.LASF4:
	.string	"signed char"
.LASF26:
	.string	"_fileno"
.LASF14:
	.string	"_IO_read_end"
.LASF6:
	.string	"long int"
.LASF12:
	.string	"_flags"
.LASF20:
	.string	"_IO_buf_end"
.LASF29:
	.string	"_cur_column"
.LASF66:
	.string	"double"
.LASF28:
	.string	"_old_offset"
.LASF33:
	.string	"_offset"
.LASF54:
	.string	"clock_t"
.LASF60:
	.string	"timezone"
.LASF42:
	.string	"_IO_marker"
.LASF49:
	.string	"stdin"
.LASF3:
	.string	"unsigned int"
.LASF0:
	.string	"long unsigned int"
.LASF76:
	.string	"_IO_FILE_plus"
.LASF17:
	.string	"_IO_write_ptr"
.LASF52:
	.string	"sys_nerr"
.LASF44:
	.string	"_sbuf"
.LASF65:
	.string	"time_taken"
.LASF2:
	.string	"short unsigned int"
.LASF21:
	.string	"_IO_save_base"
.LASF10:
	.string	"__clock_t"
.LASF32:
	.string	"_lock"
.LASF27:
	.string	"_flags2"
.LASF39:
	.string	"_mode"
.LASF50:
	.string	"stdout"
.LASF63:
	.string	"start_time"
.LASF46:
	.string	"_IO_2_1_stdin_"
.LASF18:
	.string	"_IO_write_end"
.LASF75:
	.string	"_IO_lock_t"
.LASF41:
	.string	"_IO_FILE"
.LASF56:
	.string	"__daylight"
.LASF45:
	.string	"_pos"
.LASF53:
	.string	"sys_errlist"
.LASF24:
	.string	"_markers"
.LASF1:
	.string	"unsigned char"
.LASF5:
	.string	"short int"
.LASF30:
	.string	"_vtable_offset"
.LASF58:
	.string	"tzname"
.LASF47:
	.string	"_IO_2_1_stdout_"
.LASF72:
	.string	"GNU C11 7.4.0 -mtune=generic -march=x86-64 -g -fstack-protector-strong"
.LASF59:
	.string	"daylight"
.LASF70:
	.string	"right"
.LASF11:
	.string	"char"
.LASF43:
	.string	"_next"
.LASF73:
	.string	"merge_sort_template.c"
.LASF9:
	.string	"__off64_t"
.LASF15:
	.string	"_IO_read_base"
.LASF23:
	.string	"_IO_save_end"
.LASF34:
	.string	"__pad1"
.LASF35:
	.string	"__pad2"
.LASF36:
	.string	"__pad3"
.LASF37:
	.string	"__pad4"
.LASF38:
	.string	"__pad5"
.LASF40:
	.string	"_unused2"
.LASF51:
	.string	"stderr"
.LASF74:
	.string	"/home/nishu/nishant/sem4/spforperformance/ass1"
.LASF22:
	.string	"_IO_backup_base"
.LASF64:
	.string	"end_time"
.LASF55:
	.string	"__tzname"
.LASF67:
	.string	"main"
.LASF16:
	.string	"_IO_write_base"
.LASF69:
	.string	"left"
.LASF71:
	.string	"merge"
	.ident	"GCC: (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0"
	.section	.note.GNU-stack,"",@progbits
