	.arch armv5te
	.eabi_attribute 20, 1	@ Tag_ABI_FP_denormal
	.eabi_attribute 21, 1	@ Tag_ABI_FP_exceptions
	.eabi_attribute 23, 3	@ Tag_ABI_FP_number_model
	.eabi_attribute 24, 1	@ Tag_ABI_align8_needed
	.eabi_attribute 25, 1	@ Tag_ABI_align8_preserved
	.eabi_attribute 26, 2	@ Tag_ABI_enum_size
	.eabi_attribute 30, 4	@ Tag_ABI_optimization_goals
	.eabi_attribute 34, 0	@ Tag_CPU_unaligned_access
	.eabi_attribute 18, 2	@ Tag_ABI_PCS_wchar_t
	.file	"asm-offsets.c"
@ GNU C89 (Linaro GCC 6.4-2017.11) version 6.4.1 20171012 (arm-linux-gnueabihf)
@	compiled by GNU C version 4.8.4, GMP version 6.1.0, MPFR version 3.1.4, MPC version 1.0.3, isl version none
@ GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
@ options passed:  -nostdinc
@ -I /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include
@ -I ./arch/arm/include/generated
@ -I /home/jirka/programming/python/kernel4python3/ev3-kernel/include
@ -I ./include
@ -I /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi
@ -I ./arch/arm/include/generated/uapi
@ -I /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi
@ -I ./include/generated/uapi
@ -I /home/jirka/programming/python/kernel4python3/ev3-kernel/. -I .
@ -I /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/mach-davinci/include
@ -imultilib . -imultiarch arm-linux-gnueabihf
@ -iprefix /usr/lib/x86_64-linux-gnu/gcc-linaro-6.4.1-2017.11-x86_64_arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/6.4.1/
@ -isysroot /usr/lib/x86_64-linux-gnu/gcc-linaro-6.4.1-2017.11-x86_64_arm-linux-gnueabihf/bin/../arm-linux-gnueabihf/libc
@ -D __KERNEL__ -D __LINUX_ARM_ARCH__=5 -U arm -D CC_HAVE_ASM_GOTO
@ -D KBUILD_BASENAME="asm_offsets" -D KBUILD_MODNAME="asm_offsets"
@ -isystem /usr/lib/x86_64-linux-gnu/gcc-linaro-6.4.1-2017.11-x86_64_arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/6.4.1/include
@ -include /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kconfig.h
@ -MD arch/arm/kernel/.asm-offsets.s.d
@ /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c
@ -mlittle-endian -mapcs -mno-sched-prolog -mabi=aapcs-linux
@ -mno-thumb-interwork -mfpu=vfp -marm -march=armv5te -mtune=arm9tdmi
@ -mfloat-abi=soft -mtls-dialect=gnu
@ -auxbase-strip arch/arm/kernel/asm-offsets.s -Os -Wall -Wundef
@ -Wstrict-prototypes -Wno-trigraphs -Werror=implicit-function-declaration
@ -Wno-format-security -Wno-frame-address -Wno-maybe-uninitialized
@ -Wframe-larger-than=1024 -Wno-unused-but-set-variable
@ -Wunused-const-variable=0 -Wdeclaration-after-statement -Wno-pointer-sign
@ -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time
@ -Werror=incompatible-pointer-types -Werror=designated-init -std=gnu90
@ -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE
@ -fno-dwarf2-cfi-asm -fno-ipa-sra -fno-delete-null-pointer-checks
@ -fno-stack-protector -fno-omit-frame-pointer -fno-optimize-sibling-calls
@ -fno-var-tracking-assignments -fno-strict-overflow
@ -fno-merge-all-constants -fmerge-constants -fstack-check=no
@ -fconserve-stack -fverbose-asm --param allow-store-data-races=0
@ options enabled:  -faggressive-loop-optimizations -falign-jumps
@ -falign-labels -falign-loops -fauto-inc-dec -fbranch-count-reg
@ -fcaller-saves -fchkp-check-incomplete-type -fchkp-check-read
@ -fchkp-check-write -fchkp-instrument-calls -fchkp-narrow-bounds
@ -fchkp-optimize -fchkp-store-bounds -fchkp-use-static-bounds
@ -fchkp-use-static-const-bounds -fchkp-use-wrappers
@ -fcombine-stack-adjustments -fcompare-elim -fcprop-registers
@ -fcrossjumping -fcse-follow-jumps -fdefer-pop -fdevirtualize
@ -fdevirtualize-speculatively -fearly-inlining
@ -feliminate-unused-debug-types -fexpensive-optimizations
@ -fforward-propagate -ffunction-cse -fgcse -fgcse-lm -fgnu-runtime
@ -fgnu-unique -fguess-branch-probability -fhoist-adjacent-loads -fident
@ -fif-conversion -fif-conversion2 -findirect-inlining -finline
@ -finline-atomics -finline-functions -finline-functions-called-once
@ -finline-small-functions -fipa-cp -fipa-cp-alignment -fipa-icf
@ -fipa-icf-functions -fipa-icf-variables -fipa-profile -fipa-pure-const
@ -fipa-ra -fipa-reference -fira-hoist-pressure -fira-share-save-slots
@ -fira-share-spill-slots -fisolate-erroneous-paths-dereference -fivopts
@ -fkeep-static-consts -fleading-underscore -flifetime-dse -flra-remat
@ -flto-odr-type-merging -fmath-errno -fmerge-constants
@ -fmerge-debug-strings -fmove-loop-invariants -fpartial-inlining
@ -fpeephole -fpeephole2 -fplt -fprefetch-loop-arrays -freg-struct-return
@ -freorder-blocks -freorder-functions -frerun-cse-after-loop
@ -fsched-critical-path-heuristic -fsched-dep-count-heuristic
@ -fsched-group-heuristic -fsched-interblock -fsched-last-insn-heuristic
@ -fsched-pressure -fsched-rank-heuristic -fsched-spec
@ -fsched-spec-insn-heuristic -fsched-stalled-insns-dep -fschedule-insns2
@ -fsection-anchors -fsemantic-interposition -fshow-column -fsigned-zeros
@ -fsplit-ivs-in-unroller -fsplit-wide-types -fssa-backprop -fssa-phiopt
@ -fstdarg-opt -fstrict-volatile-bitfields -fsync-libcalls -fthread-jumps
@ -ftoplevel-reorder -ftrapping-math -ftree-bit-ccp -ftree-builtin-call-dce
@ -ftree-ccp -ftree-ch -ftree-coalesce-vars -ftree-copy-prop -ftree-cselim
@ -ftree-dce -ftree-dominator-opts -ftree-dse -ftree-forwprop -ftree-fre
@ -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
@ -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop -ftree-pre
@ -ftree-pta -ftree-reassoc -ftree-scev-cprop -ftree-sink -ftree-slsr
@ -ftree-sra -ftree-switch-conversion -ftree-tail-merge -ftree-ter
@ -ftree-vrp -funit-at-a-time -fverbose-asm -fzero-initialized-in-bss
@ -mapcs-frame -marm -mglibc -mlittle-endian -mpic-data-is-text-relative
@ -mvectorize-with-neon-quad

	.syntax divided
	.macro	it, cond
	.endm
	.macro	itt, cond
	.endm
	.macro	ite, cond
	.endm
	.macro	ittt, cond
	.endm
	.macro	itte, cond
	.endm
	.macro	itet, cond
	.endm
	.macro	itee, cond
	.endm
	.macro	itttt, cond
	.endm
	.macro	ittte, cond
	.endm
	.macro	ittet, cond
	.endm
	.macro	ittee, cond
	.endm
	.macro	itett, cond
	.endm
	.macro	itete, cond
	.endm
	.macro	iteet, cond
	.endm
	.macro	iteee, cond
	.endm

	.arm
	.syntax unified
	.section	.text.startup,"ax",%progbits
	.align	2
	.global	main
	.syntax unified
	.arm
	.fpu softvfp
	.type	main, %function
main:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	mov	ip, sp	@,
	push	{fp, ip, lr, pc}	@
	sub	fp, ip, #4	@,,
	.syntax divided
@ 61 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TSK_ACTIVE_MM #408 offsetof(struct task_struct, active_mm)"	@
@ 0 "" 2
@ 65 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ 66 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_FLAGS #0 offsetof(struct thread_info, flags)"	@
@ 0 "" 2
@ 67 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_PREEMPT #4 offsetof(struct thread_info, preempt_count)"	@
@ 0 "" 2
@ 68 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_ADDR_LIMIT #8 offsetof(struct thread_info, addr_limit)"	@
@ 0 "" 2
@ 69 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_TASK #12 offsetof(struct thread_info, task)"	@
@ 0 "" 2
@ 70 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_CPU #16 offsetof(struct thread_info, cpu)"	@
@ 0 "" 2
@ 71 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_CPU_DOMAIN #20 offsetof(struct thread_info, cpu_domain)"	@
@ 0 "" 2
@ 72 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_CPU_SAVE #24 offsetof(struct thread_info, cpu_context)"	@
@ 0 "" 2
@ 73 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_USED_CP #76 offsetof(struct thread_info, used_cp)"	@
@ 0 "" 2
@ 74 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_TP_VALUE #92 offsetof(struct thread_info, tp_value)"	@
@ 0 "" 2
@ 75 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->TI_FPSTATE #104 offsetof(struct thread_info, fpstate)"	@
@ 0 "" 2
@ 91 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ 92 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R0 #0 offsetof(struct pt_regs, ARM_r0)"	@
@ 0 "" 2
@ 93 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R1 #4 offsetof(struct pt_regs, ARM_r1)"	@
@ 0 "" 2
@ 94 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R2 #8 offsetof(struct pt_regs, ARM_r2)"	@
@ 0 "" 2
@ 95 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R3 #12 offsetof(struct pt_regs, ARM_r3)"	@
@ 0 "" 2
@ 96 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R4 #16 offsetof(struct pt_regs, ARM_r4)"	@
@ 0 "" 2
@ 97 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R5 #20 offsetof(struct pt_regs, ARM_r5)"	@
@ 0 "" 2
@ 98 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R6 #24 offsetof(struct pt_regs, ARM_r6)"	@
@ 0 "" 2
@ 99 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R7 #28 offsetof(struct pt_regs, ARM_r7)"	@
@ 0 "" 2
@ 100 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R8 #32 offsetof(struct pt_regs, ARM_r8)"	@
@ 0 "" 2
@ 101 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R9 #36 offsetof(struct pt_regs, ARM_r9)"	@
@ 0 "" 2
@ 102 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_R10 #40 offsetof(struct pt_regs, ARM_r10)"	@
@ 0 "" 2
@ 103 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_FP #44 offsetof(struct pt_regs, ARM_fp)"	@
@ 0 "" 2
@ 104 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_IP #48 offsetof(struct pt_regs, ARM_ip)"	@
@ 0 "" 2
@ 105 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_SP #52 offsetof(struct pt_regs, ARM_sp)"	@
@ 0 "" 2
@ 106 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_LR #56 offsetof(struct pt_regs, ARM_lr)"	@
@ 0 "" 2
@ 107 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_PC #60 offsetof(struct pt_regs, ARM_pc)"	@
@ 0 "" 2
@ 108 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_PSR #64 offsetof(struct pt_regs, ARM_cpsr)"	@
@ 0 "" 2
@ 109 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->S_OLD_R0 #68 offsetof(struct pt_regs, ARM_ORIG_r0)"	@
@ 0 "" 2
@ 110 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PT_REGS_SIZE #72 sizeof(struct pt_regs)"	@
@ 0 "" 2
@ 111 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SVC_DACR #72 offsetof(struct svc_pt_regs, dacr)"	@
@ 0 "" 2
@ 112 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SVC_ADDR_LIMIT #76 offsetof(struct svc_pt_regs, addr_limit)"	@
@ 0 "" 2
@ 113 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SVC_REGS_SIZE #80 sizeof(struct svc_pt_regs)"	@
@ 0 "" 2
@ 114 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ 130 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->VMA_VM_MM #32 offsetof(struct vm_area_struct, vm_mm)"	@
@ 0 "" 2
@ 131 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->VMA_VM_FLAGS #40 offsetof(struct vm_area_struct, vm_flags)"	@
@ 0 "" 2
@ 132 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ 133 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->VM_EXEC #4 VM_EXEC"	@
@ 0 "" 2
@ 134 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ 135 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PAGE_SZ #4096 PAGE_SIZE"	@
@ 0 "" 2
@ 136 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ 137 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SYS_ERROR0 #10420224 0x9f0000"	@
@ 0 "" 2
@ 138 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ 139 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->SIZEOF_MACHINE_DESC #104 sizeof(struct machine_desc)"	@
@ 0 "" 2
@ 140 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->MACHINFO_TYPE #0 offsetof(struct machine_desc, nr)"	@
@ 0 "" 2
@ 141 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->MACHINFO_NAME #4 offsetof(struct machine_desc, name)"	@
@ 0 "" 2
@ 142 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ 143 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PROC_INFO_SZ #52 sizeof(struct proc_info_list)"	@
@ 0 "" 2
@ 144 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PROCINFO_INITFUNC #16 offsetof(struct proc_info_list, __cpu_flush)"	@
@ 0 "" 2
@ 145 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PROCINFO_MM_MMUFLAGS #8 offsetof(struct proc_info_list, __cpu_mm_mmu_flags)"	@
@ 0 "" 2
@ 146 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->PROCINFO_IO_MMUFLAGS #12 offsetof(struct proc_info_list, __cpu_io_mmu_flags)"	@
@ 0 "" 2
@ 147 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ 167 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ 168 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->DMA_BIDIRECTIONAL #0 DMA_BIDIRECTIONAL"	@
@ 0 "" 2
@ 169 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->DMA_TO_DEVICE #1 DMA_TO_DEVICE"	@
@ 0 "" 2
@ 170 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->DMA_FROM_DEVICE #2 DMA_FROM_DEVICE"	@
@ 0 "" 2
@ 171 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ 172 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->CACHE_WRITEBACK_ORDER #6 __CACHE_WRITEBACK_ORDER"	@
@ 0 "" 2
@ 173 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->CACHE_WRITEBACK_GRANULE #64 __CACHE_WRITEBACK_GRANULE"	@
@ 0 "" 2
@ 174 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
@ 182 "/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/kernel/asm-offsets.c" 1
	
.ascii "->"
@ 0 "" 2
	.arm
	.syntax unified
	mov	r0, #0	@,
	ldmfd	sp, {fp, sp, pc}	@
	.size	main, .-main
	.ident	"GCC: (Linaro GCC 6.4-2017.11) 6.4.1 20171012"
	.section	.note.GNU-stack,"",%progbits
