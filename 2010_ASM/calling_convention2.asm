; Listing generated by Microsoft (R) Optimizing Compiler Version 19.16.27023.1 

	TITLE	Y:\VMWARE_SHARED\CINTERMEDIATE\2010_ASM\calling_convention2.c
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB LIBCMT
INCLUDELIB OLDNAMES

PUBLIC	___local_stdio_printf_options
PUBLIC	__vfprintf_l
PUBLIC	_printf
PUBLIC	_f1
PUBLIC	_f2@8
PUBLIC	@f3@8
PUBLIC	@f4@16
PUBLIC	_main
EXTRN	___acrt_iob_func:PROC
EXTRN	___stdio_common_vfprintf:PROC
_DATA	SEGMENT
COMM	?_OptionsStorage@?1??__local_stdio_printf_options@@9@9:QWORD							; `__local_stdio_printf_options'::`2'::_OptionsStorage
_DATA	ENDS
_DATA	SEGMENT
$SG7444	DB	'%d, %d', 0aH, 00H
$SG7451	DB	'%d, %d', 0aH, 00H
$SG7458	DB	'%d, %d', 0aH, 00H
$SG7469	DB	'%d, %d, %d, %d', 0aH, 00H
_DATA	ENDS
; Function compile flags: /Odtp
; File y:\vmware_shared\cintermediate\2010_asm\calling_convention2.c
_TEXT	SEGMENT
_main	PROC

; 20   : {

	push	ebp
	mov	ebp, esp

; 21   :     f1(1,2);

	push	2
	push	1
	call	_f1
	add	esp, 8

; 22   :     f2(1,2);

	push	2
	push	1
	call	_f2@8

; 23   :     f3(1,2);

	mov	edx, 2
	mov	ecx, 1
	call	@f3@8

; 24   :     f4(1,2,3,4);

	push	4
	push	3
	mov	edx, 2
	mov	ecx, 1
	call	@f4@16

; 25   : }

	xor	eax, eax
	pop	ebp
	ret	0
_main	ENDP
_TEXT	ENDS
; Function compile flags: /Odtp
; File y:\vmware_shared\cintermediate\2010_asm\calling_convention2.c
_TEXT	SEGMENT
_a$ = -8						; size = 4
_b$ = -4						; size = 4
_c$ = 8							; size = 4
_d$ = 12						; size = 4
@f4@16	PROC
; _a$ = ecx
; _b$ = edx

; 16   : {

	push	ebp
	mov	ebp, esp
	sub	esp, 8
	mov	DWORD PTR _b$[ebp], edx
	mov	DWORD PTR _a$[ebp], ecx

; 17   :      printf("%d, %d, %d, %d\n", a, b, c, d);

	mov	eax, DWORD PTR _d$[ebp]
	push	eax
	mov	ecx, DWORD PTR _c$[ebp]
	push	ecx
	mov	edx, DWORD PTR _b$[ebp]
	push	edx
	mov	eax, DWORD PTR _a$[ebp]
	push	eax
	push	OFFSET $SG7469
	call	_printf
	add	esp, 20					; 00000014H

; 18   : }

	mov	esp, ebp
	pop	ebp
	ret	8
@f4@16	ENDP
_TEXT	ENDS
; Function compile flags: /Odtp
; File y:\vmware_shared\cintermediate\2010_asm\calling_convention2.c
_TEXT	SEGMENT
_a$ = -8						; size = 4
_b$ = -4						; size = 4
@f3@8	PROC
; _a$ = ecx
; _b$ = edx

; 12   : {

	push	ebp
	mov	ebp, esp
	sub	esp, 8
	mov	DWORD PTR _b$[ebp], edx
	mov	DWORD PTR _a$[ebp], ecx

; 13   :      printf("%d, %d\n", a, b);

	mov	eax, DWORD PTR _b$[ebp]
	push	eax
	mov	ecx, DWORD PTR _a$[ebp]
	push	ecx
	push	OFFSET $SG7458
	call	_printf
	add	esp, 12					; 0000000cH

; 14   : }

	mov	esp, ebp
	pop	ebp
	ret	0
@f3@8	ENDP
_TEXT	ENDS
; Function compile flags: /Odtp
; File y:\vmware_shared\cintermediate\2010_asm\calling_convention2.c
_TEXT	SEGMENT
_a$ = 8							; size = 4
_b$ = 12						; size = 4
_f2@8	PROC

; 8    : {

	push	ebp
	mov	ebp, esp

; 9    :      printf("%d, %d\n", a, b);

	mov	eax, DWORD PTR _b$[ebp]
	push	eax
	mov	ecx, DWORD PTR _a$[ebp]
	push	ecx
	push	OFFSET $SG7451
	call	_printf
	add	esp, 12					; 0000000cH

; 10   : }

	pop	ebp
	ret	8
_f2@8	ENDP
_TEXT	ENDS
; Function compile flags: /Odtp
; File y:\vmware_shared\cintermediate\2010_asm\calling_convention2.c
_TEXT	SEGMENT
_a$ = 8							; size = 4
_b$ = 12						; size = 4
_f1	PROC

; 4    : {

	push	ebp
	mov	ebp, esp

; 5    :      printf("%d, %d\n", a, b);

	mov	eax, DWORD PTR _b$[ebp]
	push	eax
	mov	ecx, DWORD PTR _a$[ebp]
	push	ecx
	push	OFFSET $SG7444
	call	_printf
	add	esp, 12					; 0000000cH

; 6    : }

	pop	ebp
	ret	0
_f1	ENDP
_TEXT	ENDS
; Function compile flags: /Odtp
; File c:\program files (x86)\windows kits\10\include\10.0.17763.0\ucrt\stdio.h
;	COMDAT _printf
_TEXT	SEGMENT
__Result$ = -8						; size = 4
__ArgList$ = -4						; size = 4
__Format$ = 8						; size = 4
_printf	PROC						; COMDAT

; 954  :     {

	push	ebp
	mov	ebp, esp
	sub	esp, 8

; 955  :         int _Result;
; 956  :         va_list _ArgList;
; 957  :         __crt_va_start(_ArgList, _Format);

	lea	eax, DWORD PTR __Format$[ebp+4]
	mov	DWORD PTR __ArgList$[ebp], eax

; 958  :         _Result = _vfprintf_l(stdout, _Format, NULL, _ArgList);

	mov	ecx, DWORD PTR __ArgList$[ebp]
	push	ecx
	push	0
	mov	edx, DWORD PTR __Format$[ebp]
	push	edx
	push	1
	call	___acrt_iob_func
	add	esp, 4
	push	eax
	call	__vfprintf_l
	add	esp, 16					; 00000010H
	mov	DWORD PTR __Result$[ebp], eax

; 959  :         __crt_va_end(_ArgList);

	mov	DWORD PTR __ArgList$[ebp], 0

; 960  :         return _Result;

	mov	eax, DWORD PTR __Result$[ebp]

; 961  :     }

	mov	esp, ebp
	pop	ebp
	ret	0
_printf	ENDP
_TEXT	ENDS
; Function compile flags: /Odtp
; File c:\program files (x86)\windows kits\10\include\10.0.17763.0\ucrt\stdio.h
;	COMDAT __vfprintf_l
_TEXT	SEGMENT
__Stream$ = 8						; size = 4
__Format$ = 12						; size = 4
__Locale$ = 16						; size = 4
__ArgList$ = 20						; size = 4
__vfprintf_l PROC					; COMDAT

; 642  :     {

	push	ebp
	mov	ebp, esp

; 643  :         return __stdio_common_vfprintf(_CRT_INTERNAL_LOCAL_PRINTF_OPTIONS, _Stream, _Format, _Locale, _ArgList);

	mov	eax, DWORD PTR __ArgList$[ebp]
	push	eax
	mov	ecx, DWORD PTR __Locale$[ebp]
	push	ecx
	mov	edx, DWORD PTR __Format$[ebp]
	push	edx
	mov	eax, DWORD PTR __Stream$[ebp]
	push	eax
	call	___local_stdio_printf_options
	mov	ecx, DWORD PTR [eax+4]
	push	ecx
	mov	edx, DWORD PTR [eax]
	push	edx
	call	___stdio_common_vfprintf
	add	esp, 24					; 00000018H

; 644  :     }

	pop	ebp
	ret	0
__vfprintf_l ENDP
_TEXT	ENDS
; Function compile flags: /Odtp
; File c:\program files (x86)\windows kits\10\include\10.0.17763.0\ucrt\corecrt_stdio_config.h
;	COMDAT ___local_stdio_printf_options
_TEXT	SEGMENT
___local_stdio_printf_options PROC			; COMDAT

; 86   :     {

	push	ebp
	mov	ebp, esp

; 87   :         static unsigned __int64 _OptionsStorage;
; 88   :         return &_OptionsStorage;

	mov	eax, OFFSET ?_OptionsStorage@?1??__local_stdio_printf_options@@9@9 ; `__local_stdio_printf_options'::`2'::_OptionsStorage

; 89   :     }

	pop	ebp
	ret	0
___local_stdio_printf_options ENDP
_TEXT	ENDS
END
