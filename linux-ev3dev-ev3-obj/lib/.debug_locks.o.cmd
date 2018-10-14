cmd_lib/debug_locks.o := /usr/lib/x86_64-linux-gnu/gcc-linaro-arm-linux-gnueabihf-6.4/bin/arm-linux-gnueabihf-gcc -Wp,-MD,lib/.debug_locks.o.d  -nostdinc -isystem /usr/lib/x86_64-linux-gnu/gcc-linaro-6.4.1-2017.11-x86_64_arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/6.4.1/include -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include -I./arch/arm/include/generated  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/include -I./include -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I/home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi -I./include/generated/uapi -include /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kconfig.h  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/lib -Ilib -D__KERNEL__ -mlittle-endian  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/mach-davinci/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -marm -D__LINUX_ARM_ARCH__=5 -march=armv5te -mtune=arm9tdmi -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-frame-address -Os -Wno-maybe-uninitialized --param=allow-store-data-races=0 -DCC_HAVE_ASM_GOTO -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init    -DKBUILD_BASENAME='"debug_locks"'  -DKBUILD_MODNAME='"debug_locks"' -c -o lib/.tmp_debug_locks.o /home/jirka/programming/python/kernel4python3/ev3-kernel/lib/debug_locks.c

source_lib/debug_locks.o := /home/jirka/programming/python/kernel4python3/ev3-kernel/lib/debug_locks.c

deps_lib/debug_locks.o := \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/compiler_types.h \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/gcov/kernel.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rwsem.h \
    $(wildcard include/config/rwsem/spin/on/owner.h) \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/linkage.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/stringify.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/module/rel/crcs.h) \
    $(wildcard include/config/trim/unused/ksyms.h) \
    $(wildcard include/config/unused/symbols.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/linkage.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/types.h \
    $(wildcard include/config/have/uid16.h) \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/types.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/types.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/int-ll64.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/uapi/asm/bitsperlong.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/bitsperlong.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/bitsperlong.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/posix_types.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/stddef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/stddef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/posix_types.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/posix_types.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/arch/has/refcount.h) \
    $(wildcard include/config/panic/timeout.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /usr/lib/x86_64-linux-gnu/gcc-linaro-6.4.1-2017.11-x86_64_arm-linux-gnueabihf/lib/gcc/arm-linux-gnueabihf/6.4.1/include/stdarg.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/stack/validation.h) \
    $(wildcard include/config/kasan.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/barrier.h \
    $(wildcard include/config/cpu/32v6k.h) \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/arm/heavy/mb.h) \
    $(wildcard include/config/arm/dma/mem/bufferable.h) \
    $(wildcard include/config/smp.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/barrier.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/bitops.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/bitops.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/typecheck.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/irqflags.h \
    $(wildcard include/config/cpu/v7m.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/hwcap.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/hwcap.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/irqflags.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/bitops/non-atomic.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/bitops/fls64.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/bitops/sched.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/bitops/hweight.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/bitops/arch_hweight.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/bitops/const_hweight.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/bitops/lock.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/bitops/le.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/byteorder.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/byteorder/little_endian.h \
    $(wildcard include/config/cpu/big/endian.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/byteorder/little_endian.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/swab.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/swab.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/swab.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/swab.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/byteorder/generic.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/bitops/ext2-atomic-setbit.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/printk.h \
    $(wildcard include/config/message/loglevel/default.h) \
    $(wildcard include/config/console/loglevel/default.h) \
    $(wildcard include/config/early/printk.h) \
    $(wildcard include/config/printk/nmi.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/init.h \
    $(wildcard include/config/strict/kernel/rwx.h) \
    $(wildcard include/config/strict/module/rwx.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kern_levels.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/cache.h \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/kernel.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/sysinfo.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/cache.h \
    $(wildcard include/config/arm/l1/cache/shift.h) \
    $(wildcard include/config/aeabi.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/build_bug.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
    $(wildcard include/config/page/poisoning/zero.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/const.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/spinlock.h \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/generic/lockbreak.h) \
    $(wildcard include/config/preempt.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/preempt.h \
    $(wildcard include/config/preempt/count.h) \
    $(wildcard include/config/debug/preempt.h) \
    $(wildcard include/config/preempt/notifiers.h) \
  arch/arm/include/generated/asm/preempt.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/preempt.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/thread_info.h \
    $(wildcard include/config/thread/info/in/task.h) \
    $(wildcard include/config/have/arch/within/stack/frames.h) \
    $(wildcard include/config/hardened/usercopy.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/bug.h \
    $(wildcard include/config/generic/bug.h) \
    $(wildcard include/config/bug/on/data/corruption.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/bug.h \
    $(wildcard include/config/debug/bugverbose.h) \
    $(wildcard include/config/arm/lpae.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be32.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/restart_block.h \
    $(wildcard include/config/compat.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/crunch.h) \
    $(wildcard include/config/arm/thumbee.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/vfpv3.h) \
    $(wildcard include/config/iwmmxt.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/page.h \
    $(wildcard include/config/cpu/copy/v4wt.h) \
    $(wildcard include/config/cpu/copy/v4wb.h) \
    $(wildcard include/config/cpu/copy/feroceon.h) \
    $(wildcard include/config/cpu/copy/fa.h) \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/xscale.h) \
    $(wildcard include/config/cpu/copy/v6.h) \
    $(wildcard include/config/kuser/helpers.h) \
    $(wildcard include/config/have/arch/pfn/valid.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/glue.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/pgtable-2level-types.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/memory.h \
    $(wildcard include/config/need/mach/memory/h.h) \
    $(wildcard include/config/page/offset.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/dram/base.h) \
    $(wildcard include/config/dram/size.h) \
    $(wildcard include/config/xip/kernel.h) \
    $(wildcard include/config/have/tcm.h) \
    $(wildcard include/config/arm/patch/phys/virt.h) \
    $(wildcard include/config/phys/offset.h) \
    $(wildcard include/config/xip/phys/addr.h) \
    $(wildcard include/config/debug/virtual.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/sizes.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/memory_model.h \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/sparsemem/vmemmap.h) \
    $(wildcard include/config/sparsemem.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/pfn.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/getorder.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/bottom_half.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/spinlock_types.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/spinlock_types_up.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/lockdep.h \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/lock/stat.h) \
    $(wildcard include/config/lockdep/crossrelease.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rwlock_types.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/spinlock_up.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/processor.h \
    $(wildcard include/config/have/hw/breakpoint.h) \
    $(wildcard include/config/arm/errata/754327.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/hw_breakpoint.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rwlock.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/spinlock_api_up.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/atomic.h \
    $(wildcard include/config/generic/atomic64.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/atomic.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/prefetch.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/cmpxchg.h \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/v6.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/cmpxchg-local.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/cmpxchg.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/atomic64.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/atomic-long.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/err.h \
  arch/arm/include/generated/uapi/asm/errno.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/errno.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/errno-base.h \
  arch/arm/include/generated/asm/rwsem.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/rwsem.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/mutex.h \
    $(wildcard include/config/mutex/spin/on/owner.h) \
    $(wildcard include/config/debug/mutexes.h) \
  arch/arm/include/generated/asm/current.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/current.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/osq_lock.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/debug_locks.h \
    $(wildcard include/config/debug/locking/api/selftests.h) \

lib/debug_locks.o: $(deps_lib/debug_locks.o)

$(deps_lib/debug_locks.o):
