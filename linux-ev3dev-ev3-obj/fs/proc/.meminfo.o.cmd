cmd_fs/proc/meminfo.o := /usr/lib/x86_64-linux-gnu/gcc-linaro-arm-linux-gnueabihf-6.4/bin/arm-linux-gnueabihf-gcc -Wp,-MD,fs/proc/.meminfo.o.d  -nostdinc -isystem /usr/lib/x86_64-linux-gnu/gcc-linaro-6.4.1-2017.11-x86_64_arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/6.4.1/include -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include -I./arch/arm/include/generated  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/include -I./include -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I/home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi -I./include/generated/uapi -include /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kconfig.h  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/fs/proc -Ifs/proc -D__KERNEL__ -mlittle-endian  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/mach-davinci/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -marm -D__LINUX_ARM_ARCH__=5 -march=armv5te -mtune=arm9tdmi -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-frame-address -Os -Wno-maybe-uninitialized --param=allow-store-data-races=0 -DCC_HAVE_ASM_GOTO -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init    -DKBUILD_BASENAME='"meminfo"'  -DKBUILD_MODNAME='"proc"' -c -o fs/proc/.tmp_meminfo.o /home/jirka/programming/python/kernel4python3/ev3-kernel/fs/proc/meminfo.c

source_fs/proc/meminfo.o := /home/jirka/programming/python/kernel4python3/ev3-kernel/fs/proc/meminfo.c

deps_fs/proc/meminfo.o := \
    $(wildcard include/config/cma.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/quicklist.h) \
    $(wildcard include/config/memory/failure.h) \
    $(wildcard include/config/transparent/hugepage.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/compiler_types.h \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/gcov/kernel.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/fs.h \
    $(wildcard include/config/sysfs.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/fs/posix/acl.h) \
    $(wildcard include/config/security.h) \
    $(wildcard include/config/cgroup/writeback.h) \
    $(wildcard include/config/ima.h) \
    $(wildcard include/config/fsnotify.h) \
    $(wildcard include/config/fs/encryption.h) \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/epoll.h) \
    $(wildcard include/config/file/locking.h) \
    $(wildcard include/config/quota.h) \
    $(wildcard include/config/fs/dax.h) \
    $(wildcard include/config/mandatory/file/locking.h) \
    $(wildcard include/config/block.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
    $(wildcard include/config/migration.h) \
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
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/wait_bit.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/wait.h \
    $(wildcard include/config/lockdep.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
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
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
    $(wildcard include/config/page/poisoning/zero.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/const.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
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
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/spinlock.h \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/generic/lockbreak.h) \
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
  arch/arm/include/generated/asm/current.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/current.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/wait.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kdev_t.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/kdev_t.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/dcache.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rculist.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rcupdate.h \
    $(wildcard include/config/preempt/rcu.h) \
    $(wildcard include/config/rcu/stall/common.h) \
    $(wildcard include/config/no/hz/full.h) \
    $(wildcard include/config/rcu/nocb/cpu.h) \
    $(wildcard include/config/tasks/rcu.h) \
    $(wildcard include/config/tree/rcu.h) \
    $(wildcard include/config/tiny/rcu.h) \
    $(wildcard include/config/debug/objects/rcu/head.h) \
    $(wildcard include/config/hotplug/cpu.h) \
    $(wildcard include/config/prove/rcu.h) \
    $(wildcard include/config/rcu/boost.h) \
    $(wildcard include/config/arch/weak/release/acquire.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/cpumask.h \
    $(wildcard include/config/cpumask/offstack.h) \
    $(wildcard include/config/debug/per/cpu/maps.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
    $(wildcard include/config/base/small.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/bitmap.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
    $(wildcard include/config/fortify/source.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/string.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/string.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rcutree.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rculist_bl.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/list_bl.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/bit_spinlock.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/seqlock.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/lockref.h \
    $(wildcard include/config/arch/use/cmpxchg/lockref.h) \
  include/generated/bounds.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/stringhash.h \
    $(wildcard include/config/dcache/word/access.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/hash.h \
    $(wildcard include/config/have/arch/hash.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/path.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/stat.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/stat.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/stat.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/time.h \
    $(wildcard include/config/arch/uses/gettimeoffset.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/math64.h \
    $(wildcard include/config/arch/supports/int128.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/div64.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/compiler.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/div64.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/time64.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/time.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/uidgid.h \
    $(wildcard include/config/multiuser.h) \
    $(wildcard include/config/user/ns.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/highuid.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/list_lru.h \
    $(wildcard include/config/memcg.h) \
    $(wildcard include/config/slob.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/nodemask.h \
    $(wildcard include/config/numa.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/numa.h \
    $(wildcard include/config/nodes/shift.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/shrinker.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/llist.h \
    $(wildcard include/config/arch/have/nmi/safe/cmpxchg.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/radix-tree.h \
    $(wildcard include/config/radix/tree/multiorder.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rbtree.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/pid.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/mutex.h \
    $(wildcard include/config/mutex/spin/on/owner.h) \
    $(wildcard include/config/debug/mutexes.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/osq_lock.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/debug_locks.h \
    $(wildcard include/config/debug/locking/api/selftests.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rwsem.h \
    $(wildcard include/config/rwsem/spin/on/owner.h) \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/err.h \
  arch/arm/include/generated/uapi/asm/errno.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/errno.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/errno-base.h \
  arch/arm/include/generated/asm/rwsem.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/rwsem.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/mm_types.h \
    $(wildcard include/config/have/cmpxchg/double.h) \
    $(wildcard include/config/have/aligned/struct/page.h) \
    $(wildcard include/config/userfaultfd.h) \
    $(wildcard include/config/have/arch/compat/mmap/bases.h) \
    $(wildcard include/config/pgtable/levels.h) \
    $(wildcard include/config/membarrier.h) \
    $(wildcard include/config/aio.h) \
    $(wildcard include/config/mmu/notifier.h) \
    $(wildcard include/config/numa/balancing.h) \
    $(wildcard include/config/arch/want/batched/unmap/tlb/flush.h) \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/hmm.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/mm_types_task.h \
    $(wildcard include/config/split/ptlock/cpus.h) \
    $(wildcard include/config/arch/enable/split/pmd/ptlock.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/auxvec.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/auxvec.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/auxvec.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/auxvec.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/completion.h \
    $(wildcard include/config/lockdep/completions.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/uprobes.h \
    $(wildcard include/config/uprobes.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/errno.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/errno.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/page-flags-layout.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/workqueue.h \
    $(wildcard include/config/debug/objects/work.h) \
    $(wildcard include/config/freezer.h) \
    $(wildcard include/config/wq/watchdog.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/timer.h \
    $(wildcard include/config/debug/objects/timers.h) \
    $(wildcard include/config/no/hz/common.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/ktime.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/jiffies.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/timex.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/timex.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/param.h \
  arch/arm/include/generated/uapi/asm/param.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/param.h \
    $(wildcard include/config/hz.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/param.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/timex.h \
  include/generated/timeconst.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/timekeeping.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/debugobjects.h \
    $(wildcard include/config/debug/objects.h) \
    $(wildcard include/config/debug/objects/free.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/mmu.h \
    $(wildcard include/config/cpu/has/asid.h) \
    $(wildcard include/config/vdso.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/capability.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/capability.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/semaphore.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/fcntl.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/fcntl.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/fcntl.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/fcntl.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/fiemap.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/migrate_mode.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/percpu-rwsem.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/percpu.h \
    $(wildcard include/config/need/per/cpu/embed/first/chunk.h) \
    $(wildcard include/config/need/per/cpu/page/first/chunk.h) \
    $(wildcard include/config/have/setup/per/cpu/area.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/mmdebug.h \
    $(wildcard include/config/debug/vm.h) \
    $(wildcard include/config/debug/vm/pgflags.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/smp.h \
    $(wildcard include/config/up/late/init.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/percpu.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/percpu.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/percpu-defs.h \
    $(wildcard include/config/debug/force/weak/per/cpu.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rcuwait.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rcu_sync.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/delayed_call.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/uuid.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/uuid.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/errseq.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/fs.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/limits.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/ioctl.h \
  arch/arm/include/generated/uapi/asm/ioctl.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/ioctl.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/ioctl.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/quota.h \
    $(wildcard include/config/quota/netlink/interface.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/percpu_counter.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/gfp.h \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/zone/dma32.h) \
    $(wildcard include/config/zone/device.h) \
    $(wildcard include/config/pm/sleep.h) \
    $(wildcard include/config/memory/isolation.h) \
    $(wildcard include/config/compaction.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/zsmalloc.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/flat/node/mem/map.h) \
    $(wildcard include/config/page/extension.h) \
    $(wildcard include/config/no/bootmem.h) \
    $(wildcard include/config/deferred/struct/page/init.h) \
    $(wildcard include/config/have/memory/present.h) \
    $(wildcard include/config/have/memoryless/nodes.h) \
    $(wildcard include/config/need/node/memmap/size.h) \
    $(wildcard include/config/have/memblock/node/map.h) \
    $(wildcard include/config/need/multiple/nodes.h) \
    $(wildcard include/config/have/arch/early/pfn/to/nid.h) \
    $(wildcard include/config/sparsemem/extreme.h) \
    $(wildcard include/config/memory/hotremove.h) \
    $(wildcard include/config/holes/in/zone.h) \
    $(wildcard include/config/arch/has/holes/memorymodel.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/pageblock-flags.h \
    $(wildcard include/config/hugetlb/page/size/variable.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/memory_hotplug.h \
    $(wildcard include/config/arch/has/add/pages.h) \
    $(wildcard include/config/have/arch/nodedata/extension.h) \
    $(wildcard include/config/have/bootmem/info/node.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/notifier.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/srcu.h \
    $(wildcard include/config/tiny/srcu.h) \
    $(wildcard include/config/tree/srcu.h) \
    $(wildcard include/config/srcu.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rcu_segcblist.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/srcutree.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rcu_node_tree.h \
    $(wildcard include/config/rcu/fanout.h) \
    $(wildcard include/config/rcu/fanout/leaf.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/topology.h \
    $(wildcard include/config/use/percpu/numa/node/id.h) \
    $(wildcard include/config/sched/smt.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/topology.h \
    $(wildcard include/config/arm/cpu/topology.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/topology.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/dqblk_xfs.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/dqblk_v1.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/dqblk_v2.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/dqblk_qtree.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/projid.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/quota.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/nfs_fs_i.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/mm.h \
    $(wildcard include/config/sysctl.h) \
    $(wildcard include/config/have/arch/mmap/rnd/bits.h) \
    $(wildcard include/config/have/arch/mmap/rnd/compat/bits.h) \
    $(wildcard include/config/mem/soft/dirty.h) \
    $(wildcard include/config/arch/uses/high/vma/flags.h) \
    $(wildcard include/config/x86.h) \
    $(wildcard include/config/x86/intel/memory/protection/keys.h) \
    $(wildcard include/config/ppc.h) \
    $(wildcard include/config/parisc.h) \
    $(wildcard include/config/metag.h) \
    $(wildcard include/config/ia64.h) \
    $(wildcard include/config/x86/intel/mpx.h) \
    $(wildcard include/config/stack/growsup.h) \
    $(wildcard include/config/device/private.h) \
    $(wildcard include/config/device/public.h) \
    $(wildcard include/config/shmem.h) \
    $(wildcard include/config/debug/vm/rb.h) \
    $(wildcard include/config/page/poisoning.h) \
    $(wildcard include/config/debug/pagealloc.h) \
    $(wildcard include/config/hibernation.h) \
    $(wildcard include/config/hugetlbfs.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/range.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/percpu-refcount.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/resource.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/resource.h \
  arch/arm/include/generated/uapi/asm/resource.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/resource.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/resource.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/page_ext.h \
    $(wildcard include/config/idle/page/tracking.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/stacktrace.h \
    $(wildcard include/config/stacktrace.h) \
    $(wildcard include/config/user/stacktrace/support.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/stackdepot.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/page_ref.h \
    $(wildcard include/config/debug/page/ref.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/page-flags.h \
    $(wildcard include/config/arch/uses/pg/uncached.h) \
    $(wildcard include/config/swap.h) \
    $(wildcard include/config/thp/swap.h) \
    $(wildcard include/config/ksm.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/tracepoint-defs.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/static_key.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/jump_label.h \
    $(wildcard include/config/jump/label.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/memremap.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/ioport.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/pgtable.h \
    $(wildcard include/config/highpte.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/proc-fns.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/glue-proc.h \
    $(wildcard include/config/cpu/arm7tdmi.h) \
    $(wildcard include/config/cpu/arm720t.h) \
    $(wildcard include/config/cpu/arm740t.h) \
    $(wildcard include/config/cpu/arm9tdmi.h) \
    $(wildcard include/config/cpu/arm920t.h) \
    $(wildcard include/config/cpu/arm922t.h) \
    $(wildcard include/config/cpu/arm925t.h) \
    $(wildcard include/config/cpu/arm926t.h) \
    $(wildcard include/config/cpu/arm940t.h) \
    $(wildcard include/config/cpu/arm946e.h) \
    $(wildcard include/config/cpu/arm1020.h) \
    $(wildcard include/config/cpu/arm1020e.h) \
    $(wildcard include/config/cpu/arm1022.h) \
    $(wildcard include/config/cpu/arm1026.h) \
    $(wildcard include/config/cpu/mohawk.h) \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/cpu/v6k.h) \
    $(wildcard include/config/cpu/pj4b.h) \
    $(wildcard include/config/cpu/v7.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/pgtable-nopud.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/pgtable-nop4d-hack.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/5level-fixup.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/pgtable-hwdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/pgtable-2level-hwdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/tlbflush.h \
    $(wildcard include/config/smp/on/up.h) \
    $(wildcard include/config/cpu/tlb/v4wt.h) \
    $(wildcard include/config/cpu/tlb/fa.h) \
    $(wildcard include/config/cpu/tlb/v4wbi.h) \
    $(wildcard include/config/cpu/tlb/feroceon.h) \
    $(wildcard include/config/cpu/tlb/v4wb.h) \
    $(wildcard include/config/cpu/tlb/v6.h) \
    $(wildcard include/config/cpu/tlb/v7.h) \
    $(wildcard include/config/arm/errata/720789.h) \
    $(wildcard include/config/arm/errata/798181.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/sched.h \
    $(wildcard include/config/virt/cpu/accounting/native.h) \
    $(wildcard include/config/sched/info.h) \
    $(wildcard include/config/schedstats.h) \
    $(wildcard include/config/fair/group/sched.h) \
    $(wildcard include/config/rt/group/sched.h) \
    $(wildcard include/config/cgroup/sched.h) \
    $(wildcard include/config/blk/dev/io/trace.h) \
    $(wildcard include/config/compat/brk.h) \
    $(wildcard include/config/cgroups.h) \
    $(wildcard include/config/cc/stackprotector.h) \
    $(wildcard include/config/arch/has/scaled/cputime.h) \
    $(wildcard include/config/virt/cpu/accounting/gen.h) \
    $(wildcard include/config/posix/timers.h) \
    $(wildcard include/config/sysvipc.h) \
    $(wildcard include/config/detect/hung/task.h) \
    $(wildcard include/config/auditsyscall.h) \
    $(wildcard include/config/rt/mutexes.h) \
    $(wildcard include/config/ubsan.h) \
    $(wildcard include/config/task/xacct.h) \
    $(wildcard include/config/cpusets.h) \
    $(wildcard include/config/intel/rdt.h) \
    $(wildcard include/config/futex.h) \
    $(wildcard include/config/perf/events.h) \
    $(wildcard include/config/task/delay/acct.h) \
    $(wildcard include/config/fault/injection.h) \
    $(wildcard include/config/latencytop.h) \
    $(wildcard include/config/function/graph/tracer.h) \
    $(wildcard include/config/kcov.h) \
    $(wildcard include/config/bcache.h) \
    $(wildcard include/config/vmap/stack.h) \
    $(wildcard include/config/livepatch.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/sched.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/sem.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/sem.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/ipc.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rhashtable.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/jhash.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/unaligned/packed_struct.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/list_nulls.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/ipc.h \
  arch/arm/include/generated/uapi/asm/ipcbuf.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/ipcbuf.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/refcount.h \
    $(wildcard include/config/refcount/full.h) \
  arch/arm/include/generated/uapi/asm/sembuf.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/sembuf.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/shm.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/shm.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/hugetlb_encode.h \
  arch/arm/include/generated/uapi/asm/shmbuf.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/shmbuf.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/shmparam.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kcov.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/kcov.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/plist.h \
    $(wildcard include/config/debug/pi/list.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/hrtimer.h \
    $(wildcard include/config/high/res/timers.h) \
    $(wildcard include/config/time/low/res.h) \
    $(wildcard include/config/timerfd.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/timerqueue.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/seccomp.h \
    $(wildcard include/config/seccomp.h) \
    $(wildcard include/config/have/arch/seccomp/filter.h) \
    $(wildcard include/config/seccomp/filter.h) \
    $(wildcard include/config/checkpoint/restore.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/seccomp.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/latencytop.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/sched/prio.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/signal_types.h \
    $(wildcard include/config/old/sigaction.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/signal.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/signal.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/signal.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/signal-defs.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/sigcontext.h \
  arch/arm/include/generated/uapi/asm/siginfo.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/siginfo.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/task_io_accounting.h \
    $(wildcard include/config/task/io/accounting.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/pgtable-2level.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/pgtable.h \
    $(wildcard include/config/have/arch/transparent/hugepage/pud.h) \
    $(wildcard include/config/have/arch/soft/dirty.h) \
    $(wildcard include/config/arch/enable/thp/migration.h) \
    $(wildcard include/config/have/arch/huge/vmap.h) \
    $(wildcard include/config/x86/espfix64.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/huge_mm.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/sched/coredump.h \
    $(wildcard include/config/core/dump/default/elf/headers.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/vmstat.h \
    $(wildcard include/config/vm/event/counters.h) \
    $(wildcard include/config/debug/tlbflush.h) \
    $(wildcard include/config/debug/vm/vmacache.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/vm_event_item.h \
    $(wildcard include/config/memory/balloon.h) \
    $(wildcard include/config/balloon/compaction.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/hugetlb.h \
    $(wildcard include/config/cgroup/hugetlb.h) \
    $(wildcard include/config/arch/enable/hugepage/migration.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/hugetlb_inline.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/cgroup.h \
    $(wildcard include/config/sock/cgroup/data.h) \
    $(wildcard include/config/cgroup/net/prio.h) \
    $(wildcard include/config/cgroup/net/classid.h) \
    $(wildcard include/config/cgroup/data.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/cgroupstats.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/taskstats.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/seq_file.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/cred.h \
    $(wildcard include/config/debug/credentials.h) \
    $(wildcard include/config/keys.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/key.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/sysctl.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/sysctl.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/assoc_array.h \
    $(wildcard include/config/associative/array.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/selinux.h \
    $(wildcard include/config/security/selinux.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/sched/user.h \
    $(wildcard include/config/fanotify.h) \
    $(wildcard include/config/posix/mqueue.h) \
    $(wildcard include/config/bpf/syscall.h) \
    $(wildcard include/config/net.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kernfs.h \
    $(wildcard include/config/kernfs.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/idr.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/ns_common.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/nsproxy.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/user_namespace.h \
    $(wildcard include/config/inotify/user.h) \
    $(wildcard include/config/persistent/keyrings.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kref.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/cgroup-defs.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/bpf-cgroup.h \
    $(wildcard include/config/cgroup/bpf.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/bpf.h \
    $(wildcard include/config/efficient/unaligned/access.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/bpf_common.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/cgroup_subsys.h \
    $(wildcard include/config/cgroup/cpuacct.h) \
    $(wildcard include/config/blk/cgroup.h) \
    $(wildcard include/config/cgroup/device.h) \
    $(wildcard include/config/cgroup/freezer.h) \
    $(wildcard include/config/cgroup/perf.h) \
    $(wildcard include/config/cgroup/pids.h) \
    $(wildcard include/config/cgroup/rdma.h) \
    $(wildcard include/config/cgroup/debug.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/mman.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/mman.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/mman.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/mman.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/mman-common.h \
    $(wildcard include/config/mmap/allow/uninitialized.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/proc_fs.h \
    $(wildcard include/config/proc/fs.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/quicklist.h \
    $(wildcard include/config/nr/quick.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/swap.h \
    $(wildcard include/config/frontswap.h) \
    $(wildcard include/config/memcg/swap.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/memcontrol.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/hardirq.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/ftrace_irq.h \
    $(wildcard include/config/ftrace/nmi/enter.h) \
    $(wildcard include/config/hwlat/tracer.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/vtime.h \
    $(wildcard include/config/virt/cpu/accounting.h) \
    $(wildcard include/config/irq/time/accounting.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/context_tracking_state.h \
    $(wildcard include/config/context/tracking.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/hardirq.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/irq.h \
    $(wildcard include/config/sparse/irq.h) \
    $(wildcard include/config/multi/irq/handler.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/mach-davinci/include/mach/irqs.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/irq_cpustat.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/page_counter.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/vmpressure.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/eventfd.h \
    $(wildcard include/config/eventfd.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/writeback.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/flex_proportions.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/backing-dev-defs.h \
    $(wildcard include/config/debug/fs.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/blk_types.h \
    $(wildcard include/config/alpha.h) \
    $(wildcard include/config/blk/dev/throttling/low.h) \
    $(wildcard include/config/blk/dev/integrity.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/bvec.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/node.h \
    $(wildcard include/config/memory/hotplug/sparse.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/device.h \
    $(wildcard include/config/debug/devres.h) \
    $(wildcard include/config/generic/msi/irq/domain.h) \
    $(wildcard include/config/pinctrl.h) \
    $(wildcard include/config/generic/msi/irq.h) \
    $(wildcard include/config/dma/cma.h) \
    $(wildcard include/config/of.h) \
    $(wildcard include/config/devtmpfs.h) \
    $(wildcard include/config/sysfs/deprecated.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kobject.h \
    $(wildcard include/config/uevent/helper.h) \
    $(wildcard include/config/debug/kobject/release.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/sysfs.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kobject_ns.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/klist.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/pinctrl/devinfo.h \
    $(wildcard include/config/pm.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/pinctrl/consumer.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/pinctrl/pinctrl-state.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/pm.h \
    $(wildcard include/config/vt/console/sleep.h) \
    $(wildcard include/config/pm/clk.h) \
    $(wildcard include/config/pm/generic/domains.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/ratelimit.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/device.h \
    $(wildcard include/config/dmabounce.h) \
    $(wildcard include/config/iommu/api.h) \
    $(wildcard include/config/arm/dma/use/iommu.h) \
    $(wildcard include/config/xen.h) \
    $(wildcard include/config/arch/omap.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/pm_wakeup.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/vmalloc.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/fs/proc/internal.h \
    $(wildcard include/config/proc/sysctl.h) \
    $(wildcard include/config/tty.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/proc_ns.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/binfmts.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/unistd.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/unistd.h \
    $(wildcard include/config/oabi/compat.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/unistd.h \
  arch/arm/include/generated/uapi/asm/unistd-eabi.h \
  arch/arm/include/generated/uapi/asm/unistd-common.h \
  arch/arm/include/generated/asm/unistd-nr.h \
  arch/arm/include/generated/asm/exec.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/exec.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/binfmts.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/sched/task.h \
    $(wildcard include/config/have/copy/thread/tls.h) \
    $(wildcard include/config/have/exit/thread.h) \
    $(wildcard include/config/arch/wants/dynamic/task/struct.h) \

fs/proc/meminfo.o: $(deps_fs/proc/meminfo.o)

$(deps_fs/proc/meminfo.o):
