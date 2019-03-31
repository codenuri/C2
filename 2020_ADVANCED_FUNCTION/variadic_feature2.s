	.file	"variadic_feature2.c"
	.intel_syntax noprefix
	.text
	.globl	_f1
	.def	_f1;	.scl	2;	.type	32;	.endef
_f1:
LFB10:
	.cfi_startproc
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	nop
	pop	ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.globl	_f2
	.def	_f2;	.scl	2;	.type	32;	.endef
_f2:
LFB11:
	.cfi_startproc
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	nop
	pop	ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
	.globl	_f3
	.def	_f3;	.scl	2;	.type	32;	.endef
_f3:
LFB12:
	.cfi_startproc
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	nop
	pop	ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE12:
	.def	___main;	.scl	2;	.type	32;	.endef
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB13:
	.cfi_startproc
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	and	esp, -16
	sub	esp, 16
	call	___main
	mov	DWORD PTR [esp+12], 3
	mov	DWORD PTR [esp+8], 2
	mov	DWORD PTR [esp+4], 1
	mov	DWORD PTR [esp], 3
	call	_f1
	mov	DWORD PTR [esp+12], 3
	mov	DWORD PTR [esp+8], 2
	mov	DWORD PTR [esp+4], 1
	mov	DWORD PTR [esp], 3
	call	_f2
	mov	DWORD PTR [esp+12], 3
	mov	DWORD PTR [esp+8], 2
	mov	DWORD PTR [esp+4], 1
	mov	DWORD PTR [esp], 3
	call	_f3
	mov	eax, 0
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
