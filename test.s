	.file	"test.cpp"
	.section	.ctors,"aw",@progbits
	.align 4
	.long	_GLOBAL__I_main
	.text
	.align 2
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1416:
	pushl	%ebp
.LCFI0:
	movl	%esp, %ebp
.LCFI1:
	subl	$24, %esp
.LCFI2:
	movl	%eax, -4(%ebp)
	movl	%edx, -8(%ebp)
	cmpl	$1, -4(%ebp)
	jne	.L5
	cmpl	$65535, -8(%ebp)
	jne	.L5
	movl	$_ZSt8__ioinit, (%esp)
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, 8(%esp)
	movl	$0, 4(%esp)
	movl	$__tcf_0, (%esp)
	call	__cxa_atexit
.L5:
	leave
	ret
.LFE1416:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
.globl __gxx_personality_v0
	.align 2
	.type	_GLOBAL__I_main, @function
_GLOBAL__I_main:
.LFB1418:
	pushl	%ebp
.LCFI3:
	movl	%esp, %ebp
.LCFI4:
	subl	$8, %esp
.LCFI5:
	movl	$65535, %edx
	movl	$1, %eax
	call	_Z41__static_initialization_and_destruction_0ii
	leave
	ret
.LFE1418:
	.size	_GLOBAL__I_main, .-_GLOBAL__I_main
	.align 2
	.type	__tcf_0, @function
__tcf_0:
.LFB1417:
	pushl	%ebp
.LCFI6:
	movl	%esp, %ebp
.LCFI7:
	subl	$8, %esp
.LCFI8:
	movl	$_ZSt8__ioinit, (%esp)
	call	_ZNSt8ios_base4InitD1Ev
	leave
	ret
.LFE1417:
	.size	__tcf_0, .-__tcf_0
	.section	.rodata
.LC0:
	.string	"The stack is empty"
	.section	.text._ZN5stackIPcE3popEv,"axG",@progbits,_ZN5stackIPcE3popEv,comdat
	.align 2
	.weak	_ZN5stackIPcE3popEv
	.type	_ZN5stackIPcE3popEv, @function
_ZN5stackIPcE3popEv:
.LFB1413:
	pushl	%ebp
.LCFI9:
	movl	%esp, %ebp
.LCFI10:
	subl	$8, %esp
.LCFI11:
	movl	8(%ebp), %eax
	movl	20(%eax), %eax
	cmpl	$-1, %eax
	jne	.L11
	movl	$.LC0, 4(%esp)
	movl	$_ZSt4cout, (%esp)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	jmp	.L14
.L11:
	movl	8(%ebp), %eax
	movl	20(%eax), %edx
	movl	8(%ebp), %eax
	movl	$0, (%eax,%edx,4)
	movl	8(%ebp), %eax
	movl	20(%eax), %eax
	leal	-1(%eax), %edx
	movl	8(%ebp), %eax
	movl	%edx, 20(%eax)
.L14:
	leave
	ret
.LFE1413:
	.size	_ZN5stackIPcE3popEv, .-_ZN5stackIPcE3popEv
	.section	.text._ZN5stackIPcEC1Ev,"axG",@progbits,_ZN5stackIPcEC1Ev,comdat
	.align 2
	.weak	_ZN5stackIPcEC1Ev
	.type	_ZN5stackIPcEC1Ev, @function
_ZN5stackIPcEC1Ev:
.LFB1409:
	pushl	%ebp
.LCFI12:
	movl	%esp, %ebp
.LCFI13:
	movl	8(%ebp), %eax
	movl	$0, (%eax)
	movl	$0, 4(%eax)
	movl	$0, 8(%eax)
	movl	$0, 12(%eax)
	movl	$0, 16(%eax)
	movl	8(%ebp), %eax
	movl	$-1, 20(%eax)
	popl	%ebp
	ret
.LFE1409:
	.size	_ZN5stackIPcEC1Ev, .-_ZN5stackIPcEC1Ev
	.section	.rodata
.LC1:
	.string	"Stack is full"
	.align 4
.LC2:
	.string	"Enter value to push into the stack "
	.section	.text._ZN5stackIPcE4pushEv,"axG",@progbits,_ZN5stackIPcE4pushEv,comdat
	.align 2
	.weak	_ZN5stackIPcE4pushEv
	.type	_ZN5stackIPcE4pushEv, @function
_ZN5stackIPcE4pushEv:
.LFB1411:
	pushl	%ebp
.LCFI14:
	movl	%esp, %ebp
.LCFI15:
	subl	$24, %esp
.LCFI16:
	movl	8(%ebp), %eax
	movl	20(%eax), %eax
	cmpl	$4, %eax
	jne	.L18
	movl	$.LC1, 4(%esp)
	movl	$_ZSt4cout, (%esp)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	jmp	.L21
.L18:
	movl	$10, (%esp)
	call	_Znaj
	movl	%eax, -4(%ebp)
	movl	$.LC2, 4(%esp)
	movl	$_ZSt4cout, (%esp)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-4(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$_ZSt3cin, (%esp)
	call	_ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_PS3_
	movl	8(%ebp), %eax
	movl	20(%eax), %eax
	leal	1(%eax), %edx
	movl	8(%ebp), %eax
	movl	%edx, 20(%eax)
	movl	8(%ebp), %eax
	movl	20(%eax), %ecx
	movl	8(%ebp), %edx
	movl	-4(%ebp), %eax
	movl	%eax, (%edx,%ecx,4)
.L21:
	leave
	ret
.LFE1411:
	.size	_ZN5stackIPcE4pushEv, .-_ZN5stackIPcE4pushEv
	.section	.text._ZN5stackIPcE7displayEv,"axG",@progbits,_ZN5stackIPcE7displayEv,comdat
	.align 2
	.weak	_ZN5stackIPcE7displayEv
	.type	_ZN5stackIPcE7displayEv, @function
_ZN5stackIPcE7displayEv:
.LFB1412:
	pushl	%ebp
.LCFI17:
	movl	%esp, %ebp
.LCFI18:
	subl	$24, %esp
.LCFI19:
	movl	8(%ebp), %eax
	movl	20(%eax), %eax
	movl	%eax, -4(%ebp)
	jmp	.L23
.L24:
	movl	-4(%ebp), %edx
	movl	8(%ebp), %eax
	movl	(%eax,%edx,4), %eax
	movl	%eax, 4(%esp)
	movl	$_ZSt4cout, (%esp)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$32, 4(%esp)
	movl	%eax, (%esp)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	subl	$1, -4(%ebp)
.L23:
	cmpl	$0, -4(%ebp)
	jns	.L24
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
	movl	$_ZSt4cout, (%esp)
	call	_ZNSolsEPFRSoS_E
	leave
	ret
.LFE1412:
	.size	_ZN5stackIPcE7displayEv, .-_ZN5stackIPcE7displayEv
	.section	.rodata
.LC3:
	.string	"1-push 2-pop 3-exit"
.LC4:
	.string	"Entered option is invalid"
	.text
	.align 2
.globl main
	.type	main, @function
main:
.LFB1402:
	leal	4(%esp), %ecx
.LCFI20:
	andl	$-16, %esp
	pushl	-4(%ecx)
.LCFI21:
	pushl	%ebp
.LCFI22:
	movl	%esp, %ebp
.LCFI23:
	pushl	%ecx
.LCFI24:
	subl	$52, %esp
.LCFI25:
	leal	-28(%ebp), %eax
	movl	%eax, (%esp)
	call	_ZN5stackIPcEC1Ev
	jmp	.L35
.L28:
.L35:
	movl	$.LC3, 4(%esp)
	movl	$_ZSt4cout, (%esp)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
	movl	%eax, (%esp)
	call	_ZNSolsEPFRSoS_E
	leal	-32(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$_ZSt3cin, (%esp)
	call	_ZNSirsERi
	movl	-32(%ebp), %eax
	movl	%eax, -40(%ebp)
	cmpl	$2, -40(%ebp)
	je	.L31
	cmpl	$3, -40(%ebp)
	je	.L32
	cmpl	$1, -40(%ebp)
	je	.L30
	jmp	.L29
.L30:
	leal	-28(%ebp), %eax
	movl	%eax, (%esp)
	call	_ZN5stackIPcE4pushEv
	leal	-28(%ebp), %eax
	movl	%eax, (%esp)
	call	_ZN5stackIPcE7displayEv
	jmp	.L28
.L31:
	leal	-28(%ebp), %eax
	movl	%eax, (%esp)
	call	_ZN5stackIPcE3popEv
	leal	-28(%ebp), %eax
	movl	%eax, (%esp)
	call	_ZN5stackIPcE7displayEv
	jmp	.L28
.L32:
	movl	$0, (%esp)
	call	exit
.L29:
	movl	$.LC4, 4(%esp)
	movl	$_ZSt4cout, (%esp)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
	movl	%eax, (%esp)
	call	_ZNSolsEPFRSoS_E
	jmp	.L28
.LFE1402:
	.size	main, .-main
	.local	_ZSt8__ioinit
	.comm	_ZSt8__ioinit,1,1
	.weakref	_Z20__gthrw_pthread_oncePiPFvvE,pthread_once
	.weakref	_Z27__gthrw_pthread_getspecificj,pthread_getspecific
	.weakref	_Z27__gthrw_pthread_setspecificjPKv,pthread_setspecific
	.weakref	_Z22__gthrw_pthread_createPmPK14pthread_attr_tPFPvS3_ES3_,pthread_create
	.weakref	_Z22__gthrw_pthread_cancelm,pthread_cancel
	.weakref	_Z26__gthrw_pthread_mutex_lockP15pthread_mutex_t,pthread_mutex_lock
	.weakref	_Z29__gthrw_pthread_mutex_trylockP15pthread_mutex_t,pthread_mutex_trylock
	.weakref	_Z28__gthrw_pthread_mutex_unlockP15pthread_mutex_t,pthread_mutex_unlock
	.weakref	_Z26__gthrw_pthread_mutex_initP15pthread_mutex_tPK19pthread_mutexattr_t,pthread_mutex_init
	.weakref	_Z26__gthrw_pthread_key_createPjPFvPvE,pthread_key_create
	.weakref	_Z26__gthrw_pthread_key_deletej,pthread_key_delete
	.weakref	_Z30__gthrw_pthread_mutexattr_initP19pthread_mutexattr_t,pthread_mutexattr_init
	.weakref	_Z33__gthrw_pthread_mutexattr_settypeP19pthread_mutexattr_ti,pthread_mutexattr_settype
	.weakref	_Z33__gthrw_pthread_mutexattr_destroyP19pthread_mutexattr_t,pthread_mutexattr_destroy
	.section	.eh_frame,"a",@progbits
.Lframe1:
	.long	.LECIE1-.LSCIE1
.LSCIE1:
	.long	0x0
	.byte	0x1
	.string	"zP"
	.uleb128 0x1
	.sleb128 -4
	.byte	0x8
	.uleb128 0x5
	.byte	0x0
	.long	__gxx_personality_v0
	.byte	0xc
	.uleb128 0x4
	.uleb128 0x4
	.byte	0x88
	.uleb128 0x1
	.align 4
.LECIE1:
.LSFDE1:
	.long	.LEFDE1-.LASFDE1
.LASFDE1:
	.long	.LASFDE1-.Lframe1
	.long	.LFB1416
	.long	.LFE1416-.LFB1416
	.uleb128 0x0
	.byte	0x4
	.long	.LCFI0-.LFB1416
	.byte	0xe
	.uleb128 0x8
	.byte	0x85
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI1-.LCFI0
	.byte	0xd
	.uleb128 0x5
	.align 4
.LEFDE1:
.LSFDE3:
	.long	.LEFDE3-.LASFDE3
.LASFDE3:
	.long	.LASFDE3-.Lframe1
	.long	.LFB1418
	.long	.LFE1418-.LFB1418
	.uleb128 0x0
	.byte	0x4
	.long	.LCFI3-.LFB1418
	.byte	0xe
	.uleb128 0x8
	.byte	0x85
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI4-.LCFI3
	.byte	0xd
	.uleb128 0x5
	.align 4
.LEFDE3:
.LSFDE5:
	.long	.LEFDE5-.LASFDE5
.LASFDE5:
	.long	.LASFDE5-.Lframe1
	.long	.LFB1417
	.long	.LFE1417-.LFB1417
	.uleb128 0x0
	.byte	0x4
	.long	.LCFI6-.LFB1417
	.byte	0xe
	.uleb128 0x8
	.byte	0x85
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI7-.LCFI6
	.byte	0xd
	.uleb128 0x5
	.align 4
.LEFDE5:
.LSFDE7:
	.long	.LEFDE7-.LASFDE7
.LASFDE7:
	.long	.LASFDE7-.Lframe1
	.long	.LFB1413
	.long	.LFE1413-.LFB1413
	.uleb128 0x0
	.byte	0x4
	.long	.LCFI9-.LFB1413
	.byte	0xe
	.uleb128 0x8
	.byte	0x85
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI10-.LCFI9
	.byte	0xd
	.uleb128 0x5
	.align 4
.LEFDE7:
.LSFDE11:
	.long	.LEFDE11-.LASFDE11
.LASFDE11:
	.long	.LASFDE11-.Lframe1
	.long	.LFB1411
	.long	.LFE1411-.LFB1411
	.uleb128 0x0
	.byte	0x4
	.long	.LCFI14-.LFB1411
	.byte	0xe
	.uleb128 0x8
	.byte	0x85
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI15-.LCFI14
	.byte	0xd
	.uleb128 0x5
	.align 4
.LEFDE11:
.LSFDE13:
	.long	.LEFDE13-.LASFDE13
.LASFDE13:
	.long	.LASFDE13-.Lframe1
	.long	.LFB1412
	.long	.LFE1412-.LFB1412
	.uleb128 0x0
	.byte	0x4
	.long	.LCFI17-.LFB1412
	.byte	0xe
	.uleb128 0x8
	.byte	0x85
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI18-.LCFI17
	.byte	0xd
	.uleb128 0x5
	.align 4
.LEFDE13:
.LSFDE15:
	.long	.LEFDE15-.LASFDE15
.LASFDE15:
	.long	.LASFDE15-.Lframe1
	.long	.LFB1402
	.long	.LFE1402-.LFB1402
	.uleb128 0x0
	.byte	0x4
	.long	.LCFI20-.LFB1402
	.byte	0xc
	.uleb128 0x1
	.uleb128 0x0
	.byte	0x9
	.uleb128 0x4
	.uleb128 0x1
	.byte	0x4
	.long	.LCFI21-.LCFI20
	.byte	0xc
	.uleb128 0x4
	.uleb128 0x4
	.byte	0x4
	.long	.LCFI22-.LCFI21
	.byte	0xe
	.uleb128 0x8
	.byte	0x85
	.uleb128 0x2
	.byte	0x4
	.long	.LCFI23-.LCFI22
	.byte	0xd
	.uleb128 0x5
	.byte	0x4
	.long	.LCFI24-.LCFI23
	.byte	0x84
	.uleb128 0x3
	.align 4
.LEFDE15:
	.ident	"GCC: (GNU) 4.1.2 20070925 (Red Hat 4.1.2-33)"
	.section	.note.GNU-stack,"",@progbits
