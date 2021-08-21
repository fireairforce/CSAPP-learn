	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 11, 0	sdk_version 11, 3
	.globl	_shift_left4_rightn             ## -- Begin function shift_left4_rightn
	.p2align	4, 0x90
_shift_left4_rightn:                    ## @shift_left4_rightn
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	movq	%rsi, %rcx
	movq	%rdi, %rax
	shlq	$4, %rax
                                        ## kill: def $cl killed $cl killed $rcx
	sarq	%cl, %rax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
.subsections_via_symbols
