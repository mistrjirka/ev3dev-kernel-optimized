cmd_drivers/staging/rtl8712/xmit_linux.o := /usr/lib/x86_64-linux-gnu/gcc-linaro-arm-linux-gnueabihf-6.4/bin/arm-linux-gnueabihf-gcc -Wp,-MD,drivers/staging/rtl8712/.xmit_linux.o.d  -nostdinc -isystem /usr/lib/x86_64-linux-gnu/gcc-linaro-6.4.1-2017.11-x86_64_arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/6.4.1/include -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include -I./arch/arm/include/generated  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/include -I./include -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I/home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi -I./include/generated/uapi -include /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kconfig.h  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712 -Idrivers/staging/rtl8712 -D__KERNEL__ -mlittle-endian  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/mach-davinci/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -marm -D__LINUX_ARM_ARCH__=5 -march=armv5te -mtune=arm9tdmi -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-frame-address -Os -Wno-maybe-uninitialized --param=allow-store-data-races=0 -DCC_HAVE_ASM_GOTO -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init    -DKBUILD_BASENAME='"xmit_linux"'  -DKBUILD_MODNAME='"r8712u"' -c -o drivers/staging/rtl8712/.tmp_xmit_linux.o /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/xmit_linux.c

source_drivers/staging/rtl8712/xmit_linux.o := /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/xmit_linux.c

deps_drivers/staging/rtl8712/xmit_linux.o := \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/compiler_types.h \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/gcov/kernel.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/usb.h \
    $(wildcard include/config/usb/mon.h) \
    $(wildcard include/config/pm.h) \
    $(wildcard include/config/acpi.h) \
    $(wildcard include/config/usb/led/trig.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/mod_devicetable.h \
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
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/uuid.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/uuid.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
    $(wildcard include/config/fortify/source.h) \
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
  /usr/lib/x86_64-linux-gnu/gcc-linaro-6.4.1-2017.11-x86_64_arm-linux-gnueabihf/lib/gcc/arm-linux-gnueabihf/6.4.1/include/stdarg.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/string.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/string.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/usb/ch9.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/device.h \
    $(wildcard include/config/debug/devres.h) \
    $(wildcard include/config/srcu.h) \
    $(wildcard include/config/generic/msi/irq/domain.h) \
    $(wildcard include/config/pinctrl.h) \
    $(wildcard include/config/generic/msi/irq.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/dma/cma.h) \
    $(wildcard include/config/pm/sleep.h) \
    $(wildcard include/config/of.h) \
    $(wildcard include/config/devtmpfs.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
    $(wildcard include/config/sysfs/deprecated.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/ioport.h \
    $(wildcard include/config/memory/hotremove.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kobject.h \
    $(wildcard include/config/uevent/helper.h) \
    $(wildcard include/config/debug/kobject/release.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
    $(wildcard include/config/page/poisoning/zero.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/const.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/arch/has/refcount.h) \
    $(wildcard include/config/panic/timeout.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
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
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/sysfs.h \
    $(wildcard include/config/debug/lock/alloc.h) \
    $(wildcard include/config/sysfs.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kernfs.h \
    $(wildcard include/config/kernfs.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/err.h \
  arch/arm/include/generated/uapi/asm/errno.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/errno.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/errno-base.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/mutex.h \
    $(wildcard include/config/mutex/spin/on/owner.h) \
    $(wildcard include/config/debug/mutexes.h) \
  arch/arm/include/generated/asm/current.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/current.h \
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
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/spinlock_types.h \
    $(wildcard include/config/generic/lockbreak.h) \
    $(wildcard include/config/debug/spinlock.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/spinlock_types_up.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/lockdep.h \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/lock/stat.h) \
    $(wildcard include/config/lockdep/crossrelease.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rwlock_types.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/atomic.h \
    $(wildcard include/config/generic/atomic64.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/atomic.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/prefetch.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/processor.h \
    $(wildcard include/config/have/hw/breakpoint.h) \
    $(wildcard include/config/arm/errata/754327.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/hw_breakpoint.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/cmpxchg.h \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/v6.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/cmpxchg-local.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/cmpxchg.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/atomic64.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/atomic-long.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/osq_lock.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/debug_locks.h \
    $(wildcard include/config/debug/locking/api/selftests.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/idr.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/radix-tree.h \
    $(wildcard include/config/base/small.h) \
    $(wildcard include/config/radix/tree/multiorder.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/preempt.h \
    $(wildcard include/config/preempt/count.h) \
    $(wildcard include/config/debug/preempt.h) \
    $(wildcard include/config/preempt.h) \
    $(wildcard include/config/preempt/notifiers.h) \
  arch/arm/include/generated/asm/preempt.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/preempt.h \
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
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/bottom_half.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/cpumask.h \
    $(wildcard include/config/cpumask/offstack.h) \
    $(wildcard include/config/debug/per/cpu/maps.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/threads.h \
    $(wildcard include/config/nr/cpus.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/bitmap.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rcutree.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/spinlock.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/spinlock_up.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rwlock.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/spinlock_api_up.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/gfp.h \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/zone/dma32.h) \
    $(wildcard include/config/zone/device.h) \
    $(wildcard include/config/memory/isolation.h) \
    $(wildcard include/config/compaction.h) \
    $(wildcard include/config/cma.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/mmdebug.h \
    $(wildcard include/config/debug/vm.h) \
    $(wildcard include/config/debug/vm/pgflags.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/zsmalloc.h) \
    $(wildcard include/config/memcg.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/flat/node/mem/map.h) \
    $(wildcard include/config/page/extension.h) \
    $(wildcard include/config/no/bootmem.h) \
    $(wildcard include/config/numa/balancing.h) \
    $(wildcard include/config/deferred/struct/page/init.h) \
    $(wildcard include/config/transparent/hugepage.h) \
    $(wildcard include/config/have/memory/present.h) \
    $(wildcard include/config/have/memoryless/nodes.h) \
    $(wildcard include/config/need/node/memmap/size.h) \
    $(wildcard include/config/have/memblock/node/map.h) \
    $(wildcard include/config/need/multiple/nodes.h) \
    $(wildcard include/config/have/arch/early/pfn/to/nid.h) \
    $(wildcard include/config/sparsemem/extreme.h) \
    $(wildcard include/config/holes/in/zone.h) \
    $(wildcard include/config/arch/has/holes/memorymodel.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/wait.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/wait.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/numa.h \
    $(wildcard include/config/nodes/shift.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/seqlock.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/nodemask.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/pageblock-flags.h \
    $(wildcard include/config/hugetlb/page.h) \
    $(wildcard include/config/hugetlb/page/size/variable.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/page-flags-layout.h \
  include/generated/bounds.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/memory_hotplug.h \
    $(wildcard include/config/arch/has/add/pages.h) \
    $(wildcard include/config/have/arch/nodedata/extension.h) \
    $(wildcard include/config/have/bootmem/info/node.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/notifier.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/errno.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/errno.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rwsem.h \
    $(wildcard include/config/rwsem/spin/on/owner.h) \
    $(wildcard include/config/rwsem/generic/spinlock.h) \
  arch/arm/include/generated/asm/rwsem.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/rwsem.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/srcu.h \
    $(wildcard include/config/tiny/srcu.h) \
    $(wildcard include/config/tree/srcu.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/workqueue.h \
    $(wildcard include/config/debug/objects/work.h) \
    $(wildcard include/config/freezer.h) \
    $(wildcard include/config/wq/watchdog.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/timer.h \
    $(wildcard include/config/debug/objects/timers.h) \
    $(wildcard include/config/no/hz/common.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/ktime.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/time.h \
    $(wildcard include/config/arch/uses/gettimeoffset.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/math64.h \
    $(wildcard include/config/arch/supports/int128.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/div64.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/compiler.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/div64.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/time64.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/time.h \
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
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rcu_segcblist.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/srcutree.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rcu_node_tree.h \
    $(wildcard include/config/rcu/fanout.h) \
    $(wildcard include/config/rcu/fanout/leaf.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/completion.h \
    $(wildcard include/config/lockdep/completions.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/topology.h \
    $(wildcard include/config/use/percpu/numa/node/id.h) \
    $(wildcard include/config/sched/smt.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/smp.h \
    $(wildcard include/config/up/late/init.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/llist.h \
    $(wildcard include/config/arch/have/nmi/safe/cmpxchg.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/percpu.h \
    $(wildcard include/config/need/per/cpu/embed/first/chunk.h) \
    $(wildcard include/config/need/per/cpu/page/first/chunk.h) \
    $(wildcard include/config/have/setup/per/cpu/area.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/percpu.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/percpu.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/percpu-defs.h \
    $(wildcard include/config/debug/force/weak/per/cpu.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/topology.h \
    $(wildcard include/config/arm/cpu/topology.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/topology.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rbtree.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kobject_ns.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/stat.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/stat.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/stat.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/uidgid.h \
    $(wildcard include/config/multiuser.h) \
    $(wildcard include/config/user/ns.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/highuid.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kref.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/refcount.h \
    $(wildcard include/config/refcount/full.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/klist.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/pinctrl/devinfo.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/pinctrl/consumer.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/seq_file.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/fs.h \
    $(wildcard include/config/fs/posix/acl.h) \
    $(wildcard include/config/security.h) \
    $(wildcard include/config/cgroup/writeback.h) \
    $(wildcard include/config/ima.h) \
    $(wildcard include/config/fsnotify.h) \
    $(wildcard include/config/fs/encryption.h) \
    $(wildcard include/config/epoll.h) \
    $(wildcard include/config/file/locking.h) \
    $(wildcard include/config/quota.h) \
    $(wildcard include/config/fs/dax.h) \
    $(wildcard include/config/mandatory/file/locking.h) \
    $(wildcard include/config/block.h) \
    $(wildcard include/config/migration.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/wait_bit.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kdev_t.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/kdev_t.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/dcache.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rculist.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rculist_bl.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/list_bl.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/bit_spinlock.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/lockref.h \
    $(wildcard include/config/arch/use/cmpxchg/lockref.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/stringhash.h \
    $(wildcard include/config/dcache/word/access.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/hash.h \
    $(wildcard include/config/have/arch/hash.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/path.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/list_lru.h \
    $(wildcard include/config/slob.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/shrinker.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/pid.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/mm_types.h \
    $(wildcard include/config/have/cmpxchg/double.h) \
    $(wildcard include/config/have/aligned/struct/page.h) \
    $(wildcard include/config/userfaultfd.h) \
    $(wildcard include/config/have/arch/compat/mmap/bases.h) \
    $(wildcard include/config/pgtable/levels.h) \
    $(wildcard include/config/membarrier.h) \
    $(wildcard include/config/aio.h) \
    $(wildcard include/config/mmu/notifier.h) \
    $(wildcard include/config/arch/want/batched/unmap/tlb/flush.h) \
    $(wildcard include/config/hmm.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/mm_types_task.h \
    $(wildcard include/config/split/ptlock/cpus.h) \
    $(wildcard include/config/arch/enable/split/pmd/ptlock.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/auxvec.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/auxvec.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/auxvec.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/auxvec.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/uprobes.h \
    $(wildcard include/config/uprobes.h) \
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
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rcuwait.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/rcu_sync.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/delayed_call.h \
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
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/dqblk_xfs.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/dqblk_v1.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/dqblk_v2.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/dqblk_qtree.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/projid.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/quota.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/nfs_fs_i.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/cred.h \
    $(wildcard include/config/debug/credentials.h) \
    $(wildcard include/config/keys.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/key.h \
    $(wildcard include/config/sysctl.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/sysctl.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/sysctl.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/assoc_array.h \
    $(wildcard include/config/associative/array.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/selinux.h \
    $(wildcard include/config/security/selinux.h) \
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
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/resource.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/resource.h \
  arch/arm/include/generated/uapi/asm/resource.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/resource.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/resource.h \
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
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/sched/user.h \
    $(wildcard include/config/fanotify.h) \
    $(wildcard include/config/posix/mqueue.h) \
    $(wildcard include/config/bpf/syscall.h) \
    $(wildcard include/config/net.h) \
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
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/usb/ch9.h \
    $(wildcard include/config/size.h) \
    $(wildcard include/config/att/one.h) \
    $(wildcard include/config/att/selfpower.h) \
    $(wildcard include/config/att/wakeup.h) \
    $(wildcard include/config/att/battery.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/delay.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/delay.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/interrupt.h \
    $(wildcard include/config/irq/forced/threading.h) \
    $(wildcard include/config/generic/irq/probe.h) \
    $(wildcard include/config/proc/fs.h) \
    $(wildcard include/config/irq/timings.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/irqreturn.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/irqnr.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/irqnr.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/hardirq.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/ftrace_irq.h \
    $(wildcard include/config/ftrace/nmi/enter.h) \
    $(wildcard include/config/hwlat/tracer.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/vtime.h \
    $(wildcard include/config/virt/cpu/accounting.h) \
    $(wildcard include/config/irq/time/accounting.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/context_tracking_state.h \
    $(wildcard include/config/context/tracking.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/static_key.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/jump_label.h \
    $(wildcard include/config/jump/label.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/hardirq.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/irq.h \
    $(wildcard include/config/sparse/irq.h) \
    $(wildcard include/config/multi/irq/handler.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/mach-davinci/include/mach/irqs.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/irq_cpustat.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/sections.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/sections.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/pm_runtime.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/ip.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/skbuff.h \
    $(wildcard include/config/nf/conntrack.h) \
    $(wildcard include/config/bridge/netfilter.h) \
    $(wildcard include/config/xfrm.h) \
    $(wildcard include/config/ipv6/ndisc/nodetype.h) \
    $(wildcard include/config/net/switchdev.h) \
    $(wildcard include/config/net/cls/act.h) \
    $(wildcard include/config/net/sched.h) \
    $(wildcard include/config/net/rx/busy/poll.h) \
    $(wildcard include/config/xps.h) \
    $(wildcard include/config/network/secmark.h) \
    $(wildcard include/config/network/phy/timestamping.h) \
    $(wildcard include/config/netfilter/xt/target/trace.h) \
    $(wildcard include/config/nf/tables.h) \
    $(wildcard include/config/ip/vs.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/socket.h \
  arch/arm/include/generated/uapi/asm/socket.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/socket.h \
  arch/arm/include/generated/uapi/asm/sockios.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/sockios.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/sockios.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/uio.h \
    $(wildcard include/config/arch/has/uaccess/flushcache.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/uio.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/socket.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/net.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/random.h \
    $(wildcard include/config/gcc/plugin/latent/entropy.h) \
    $(wildcard include/config/arch/random.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/once.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/random.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/net.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/textsearch.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/slab.h \
    $(wildcard include/config/debug/slab.h) \
    $(wildcard include/config/failslab.h) \
    $(wildcard include/config/have/hardened/usercopy/allocator.h) \
    $(wildcard include/config/slab.h) \
    $(wildcard include/config/slub.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kmemleak.h \
    $(wildcard include/config/debug/kmemleak.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/vmalloc.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kasan.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/checksum.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/uaccess.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kasan-checks.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/uaccess.h \
    $(wildcard include/config/cpu/sw/domain/pan.h) \
    $(wildcard include/config/cpu/use/domains.h) \
    $(wildcard include/config/uaccess/with/memcpy.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
    $(wildcard include/config/cpu/cp15/mmu.h) \
  arch/arm/include/generated/asm/extable.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/extable.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/checksum.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/in6.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/in6.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/libc-compat.h \
    $(wildcard include/config/data.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/dma-mapping.h \
    $(wildcard include/config/have/generic/dma/coherent.h) \
    $(wildcard include/config/has/dma.h) \
    $(wildcard include/config/arch/has/dma/set/coherent/mask.h) \
    $(wildcard include/config/need/dma/map/state.h) \
    $(wildcard include/config/dma/api/debug.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/dma-debug.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/dma-direction.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/scatterlist.h \
    $(wildcard include/config/debug/sg.h) \
    $(wildcard include/config/need/sg/dma/length.h) \
    $(wildcard include/config/arch/has/sg/chain.h) \
    $(wildcard include/config/sg/pool.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/mm.h \
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
    $(wildcard include/config/memory/failure.h) \
    $(wildcard include/config/swap.h) \
    $(wildcard include/config/thp/swap.h) \
    $(wildcard include/config/ksm.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/tracepoint-defs.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/memremap.h \
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
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/io.h \
    $(wildcard include/config/pci.h) \
    $(wildcard include/config/need/mach/io/h.h) \
    $(wildcard include/config/pcmcia/soc/common.h) \
    $(wildcard include/config/isa.h) \
    $(wildcard include/config/pccard.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/pci_iomap.h \
    $(wildcard include/config/no/generic/pci/ioport/map.h) \
    $(wildcard include/config/generic/pci/iomap.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/xen/xen.h \
    $(wildcard include/config/xen/pvh.h) \
    $(wildcard include/config/xen/dom0.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/io.h \
    $(wildcard include/config/generic/iomap.h) \
    $(wildcard include/config/has/ioport/map.h) \
    $(wildcard include/config/virt/to/bus.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/mem_encrypt.h \
    $(wildcard include/config/arch/has/mem/encrypt.h) \
    $(wildcard include/config/amd/mem/encrypt.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/dma-mapping.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/xen/hypervisor.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/xen/arm/hypervisor.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/netdev_features.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/sched/clock.h \
    $(wildcard include/config/have/unstable/sched/clock.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/flow_dissector.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/if_ether.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/splice.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/pipe_fs_i.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/if_packet.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/flow.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/ip.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/if_ether.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/osdep_service.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/sched/signal.h \
    $(wildcard include/config/sched/autogroup.h) \
    $(wildcard include/config/bsd/process/acct.h) \
    $(wildcard include/config/taskstats.h) \
    $(wildcard include/config/audit.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/signal.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/sched/jobctl.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/sched/task.h \
    $(wildcard include/config/have/copy/thread/tls.h) \
    $(wildcard include/config/have/exit/thread.h) \
    $(wildcard include/config/arch/wants/dynamic/task/struct.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/netdevice.h \
    $(wildcard include/config/dcb.h) \
    $(wildcard include/config/hyperv/net.h) \
    $(wildcard include/config/wlan.h) \
    $(wildcard include/config/ax25.h) \
    $(wildcard include/config/mac80211/mesh.h) \
    $(wildcard include/config/net/ipip.h) \
    $(wildcard include/config/net/ipgre.h) \
    $(wildcard include/config/ipv6/sit.h) \
    $(wildcard include/config/ipv6/tunnel.h) \
    $(wildcard include/config/rps.h) \
    $(wildcard include/config/netpoll.h) \
    $(wildcard include/config/bql.h) \
    $(wildcard include/config/rfs/accel.h) \
    $(wildcard include/config/fcoe.h) \
    $(wildcard include/config/xfrm/offload.h) \
    $(wildcard include/config/net/poll/controller.h) \
    $(wildcard include/config/libfcoe.h) \
    $(wildcard include/config/wireless/ext.h) \
    $(wildcard include/config/net/l3/master/dev.h) \
    $(wildcard include/config/ipv6.h) \
    $(wildcard include/config/vlan/8021q.h) \
    $(wildcard include/config/net/dsa.h) \
    $(wildcard include/config/tipc.h) \
    $(wildcard include/config/mpls/routing.h) \
    $(wildcard include/config/netfilter/ingress.h) \
    $(wildcard include/config/garp.h) \
    $(wildcard include/config/mrp.h) \
    $(wildcard include/config/cgroup/net/prio.h) \
    $(wildcard include/config/net/flow/limit.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/dynamic_queue_limits.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/ethtool.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/compat.h \
    $(wildcard include/config/compat/old/sigaction.h) \
    $(wildcard include/config/odd/rt/sigaction.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/ethtool.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/net_namespace.h \
    $(wildcard include/config/ieee802154/6lowpan.h) \
    $(wildcard include/config/ip/sctp.h) \
    $(wildcard include/config/ip/dccp.h) \
    $(wildcard include/config/netfilter.h) \
    $(wildcard include/config/nf/defrag/ipv6.h) \
    $(wildcard include/config/netfilter/netlink/acct.h) \
    $(wildcard include/config/nf/ct/netlink/timeout.h) \
    $(wildcard include/config/wext/core.h) \
    $(wildcard include/config/mpls.h) \
    $(wildcard include/config/can.h) \
    $(wildcard include/config/net/ns.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/netns/core.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/netns/mib.h \
    $(wildcard include/config/xfrm/statistics.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/snmp.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/snmp.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/u64_stats_sync.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/netns/unix.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/netns/packet.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/netns/ipv4.h \
    $(wildcard include/config/ip/multiple/tables.h) \
    $(wildcard include/config/ip/route/classid.h) \
    $(wildcard include/config/ip/mroute.h) \
    $(wildcard include/config/ip/mroute/multiple/tables.h) \
    $(wildcard include/config/ip/route/multipath.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/inet_frag.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/netns/ipv6.h \
    $(wildcard include/config/ipv6/multiple/tables.h) \
    $(wildcard include/config/ipv6/mroute.h) \
    $(wildcard include/config/ipv6/mroute/multiple/tables.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/dst_ops.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/netns/ieee802154_6lowpan.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/netns/sctp.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/netns/dccp.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/netns/netfilter.h \
    $(wildcard include/config/nf/defrag/ipv4.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/netfilter_defs.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/netfilter.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/in.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/in.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/netns/x_tables.h \
    $(wildcard include/config/bridge/nf/ebtables.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/netns/conntrack.h \
    $(wildcard include/config/nf/ct/proto/dccp.h) \
    $(wildcard include/config/nf/ct/proto/sctp.h) \
    $(wildcard include/config/nf/conntrack/events.h) \
    $(wildcard include/config/nf/conntrack/labels.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/netfilter/nf_conntrack_tcp.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/netfilter/nf_conntrack_tcp.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/netfilter/nf_conntrack_dccp.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/netfilter/nf_conntrack_tuple_common.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/netfilter/nf_conntrack_common.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/netfilter/nf_conntrack_common.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/netfilter/nf_conntrack_sctp.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/netfilter/nf_conntrack_sctp.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/netns/nftables.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/netns/xfrm.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/xfrm.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/netns/mpls.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/netns/can.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/ns_common.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/seq_file_net.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/netprio_cgroup.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/cgroup.h \
    $(wildcard include/config/sock/cgroup/data.h) \
    $(wildcard include/config/cgroup/net/classid.h) \
    $(wildcard include/config/cgroup/data.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/cgroupstats.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/taskstats.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/nsproxy.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/user_namespace.h \
    $(wildcard include/config/inotify/user.h) \
    $(wildcard include/config/persistent/keyrings.h) \
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
    $(wildcard include/config/cgroup/hugetlb.h) \
    $(wildcard include/config/cgroup/pids.h) \
    $(wildcard include/config/cgroup/rdma.h) \
    $(wildcard include/config/cgroup/debug.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/neighbour.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/netlink.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/scm.h \
    $(wildcard include/config/security/network.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/security.h \
    $(wildcard include/config/security/infiniband.h) \
    $(wildcard include/config/security/network/xfrm.h) \
    $(wildcard include/config/security/path.h) \
    $(wildcard include/config/securityfs.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/netlink.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/netdevice.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/if.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/hdlc/ioctl.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/if_link.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/if_link.h \
    $(wildcard include/config/pending.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/if_bonding.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/pkt_cls.h \
    $(wildcard include/config/net/cls/ind.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/pkt_sched.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/hashtable.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/etherdevice.h \
    $(wildcard include/config/have/efficient/unaligned/access.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/unaligned.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/unaligned/le_struct.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/unaligned/be_byteshift.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/unaligned/generic.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/net/iw_handler.h \
    $(wildcard include/config/wext/priv.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/wireless.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/wireless.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/proc_fs.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/basic_types.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/drv_types.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/wlan_bssdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_spec.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_regdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_syscfg_regdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_cmdctrl_regdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_macsetting_regdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_timectrl_regdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_fifoctrl_regdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_ratectrl_regdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_edcasetting_regdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_wmac_regdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_powersave_regdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_gp_regdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_debugctrl_regdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_bitdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_cmdctrl_bitdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_syscfg_bitdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_macsetting_bitdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_timectrl_bitdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_fifoctrl_bitdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_ratectrl_bitdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_edcasetting_bitdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_wmac_bitdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_security_bitdef.h \
    $(wildcard include/config/msk.h) \
    $(wildcard include/config/sht.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_powersave_bitdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_gp_bitdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_interrupt_bitdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_debugctrl_bitdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_hal.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl871x_ht.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/wifi.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl871x_cmd.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl871x_rf.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl871x_mp_phy_regdef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/ieee80211.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_cmd.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl871x_xmit.h \
    $(wildcard include/config/r8712/tx/aggr.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/xmit_osdep.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_xmit.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl871x_recv.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_recv.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl871x_security.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl871x_pwrctrl.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl871x_io.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/osdep_intf.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl871x_eeprom.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/sta_info.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl871x_mlme.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl871x_mp.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl871x_debug.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl871x_event.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl8712_event.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/rtl871x_led.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/staging/rtl8712/mlme_osdep.h \

drivers/staging/rtl8712/xmit_linux.o: $(deps_drivers/staging/rtl8712/xmit_linux.o)

$(deps_drivers/staging/rtl8712/xmit_linux.o):
