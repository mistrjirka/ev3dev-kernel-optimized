cmd_drivers/lego/linux/omapl_pru/pru/hal/uart/src/suart_utils.o := /usr/lib/x86_64-linux-gnu/gcc-linaro-arm-linux-gnueabihf-6.4/bin/arm-linux-gnueabihf-gcc -Wp,-MD,drivers/lego/linux/omapl_pru/pru/hal/uart/src/.suart_utils.o.d  -nostdinc -isystem /usr/lib/x86_64-linux-gnu/gcc-linaro-6.4.1-2017.11-x86_64_arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/6.4.1/include -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include -I./arch/arm/include/generated  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/include -I./include -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I/home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi -I./include/generated/uapi -include /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kconfig.h  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/lego/linux/omapl_pru -Idrivers/lego/linux/omapl_pru -D__KERNEL__ -mlittle-endian  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/mach-davinci/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -marm -D__LINUX_ARM_ARCH__=5 -march=armv5te -mtune=arm9tdmi -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-frame-address -Os -Wno-maybe-uninitialized --param=allow-store-data-races=0 -DCC_HAVE_ASM_GOTO -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/lego/include  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/lego/linux/omapl_pru/pru/hal/uart/include  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/lego/linux/omapl_pru/pru/hal/common/include    -DKBUILD_BASENAME='"suart_utils"'  -DKBUILD_MODNAME='"suart_emu"' -c -o drivers/lego/linux/omapl_pru/pru/hal/uart/src/.tmp_suart_utils.o /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/lego/linux/omapl_pru/pru/hal/uart/src/suart_utils.c

source_drivers/lego/linux/omapl_pru/pru/hal/uart/src/suart_utils.o := /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/lego/linux/omapl_pru/pru/hal/uart/src/suart_utils.c

deps_drivers/lego/linux/omapl_pru/pru/hal/uart/src/suart_utils.o := \
    $(wildcard include/config/tx/ser.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/compiler_types.h \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/gcov/kernel.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/lego/linux/omapl_pru/pru/hal/uart/include/suart_pru_regs.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/lego/linux/omapl_pru/pru/hal/uart/include/omapl_suart_board.h \
    $(wildcard include/config/duplex.h) \
    $(wildcard include/config/rx/ser.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/lego/linux/omapl_pru/pru/hal/uart/include/suart_api.h \
    $(wildcard include/config/omapl/suart/mcasp.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/bitops.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/types.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/int-ll64.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/uapi/asm/bitsperlong.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/bitsperlong.h \
    $(wildcard include/config/64bit.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/bitsperlong.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/bitops.h \
    $(wildcard include/config/smp.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/stack/validation.h) \
    $(wildcard include/config/kasan.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/types.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/posix_types.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/stddef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/stddef.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/posix_types.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/posix_types.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/barrier.h \
    $(wildcard include/config/cpu/32v6k.h) \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/arm/heavy/mb.h) \
    $(wildcard include/config/arm/dma/mem/bufferable.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/barrier.h \
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
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/types.h \
    $(wildcard include/config/have/uid16.h) \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
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
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/lego/linux/omapl_pru/pru/hal/common/include/pru.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/lego/linux/omapl_pru/pru/hal/common/include/csl/cslr_prucore.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/lego/linux/omapl_pru/pru/hal/common/include/csl/cslr.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/lego/linux/omapl_pru/pru/hal/uart/include/suart_utils.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/lego/linux/omapl_pru/pru/hal/uart/include/suart_err.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/lego/linux/omapl_pru/pru/hal/common/include/csl/soc_OMAPL138.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/drivers/lego/linux/omapl_pru/pru/hal/common/include/csl/cslr_mcasp.h \

drivers/lego/linux/omapl_pru/pru/hal/uart/src/suart_utils.o: $(deps_drivers/lego/linux/omapl_pru/pru/hal/uart/src/suart_utils.o)

$(deps_drivers/lego/linux/omapl_pru/pru/hal/uart/src/suart_utils.o):
