cmd_lib/fdt_empty_tree.o := /usr/lib/x86_64-linux-gnu/gcc-linaro-arm-linux-gnueabihf-6.4/bin/arm-linux-gnueabihf-gcc -Wp,-MD,lib/.fdt_empty_tree.o.d  -nostdinc -isystem /usr/lib/x86_64-linux-gnu/gcc-linaro-6.4.1-2017.11-x86_64_arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/6.4.1/include -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include -I./arch/arm/include/generated  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/include -I./include -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I/home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi -I./include/generated/uapi -include /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kconfig.h  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/lib -Ilib -D__KERNEL__ -mlittle-endian  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/mach-davinci/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -marm -D__LINUX_ARM_ARCH__=5 -march=armv5te -mtune=arm9tdmi -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-frame-address -Os -Wno-maybe-uninitialized --param=allow-store-data-races=0 -DCC_HAVE_ASM_GOTO -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/lib/../scripts/dtc/libfdt    -DKBUILD_BASENAME='"fdt_empty_tree"'  -DKBUILD_MODNAME='"fdt_empty_tree"' -c -o lib/.tmp_fdt_empty_tree.o /home/jirka/programming/python/kernel4python3/ev3-kernel/lib/fdt_empty_tree.c

source_lib/fdt_empty_tree.o := /home/jirka/programming/python/kernel4python3/ev3-kernel/lib/fdt_empty_tree.c

deps_lib/fdt_empty_tree.o := \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/compiler_types.h \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/gcov/kernel.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/libfdt_env.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
    $(wildcard include/config/fortify/source.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/stack/validation.h) \
    $(wildcard include/config/kasan.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/types.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/types.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/int-ll64.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/uapi/asm/bitsperlong.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/bitsperlong.h \
    $(wildcard include/config/64bit.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/asm-generic/bitsperlong.h \
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
    $(wildcard include/config/smp.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/asm-generic/barrier.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/types.h \
    $(wildcard include/config/have/uid16.h) \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
  /usr/lib/x86_64-linux-gnu/gcc-linaro-6.4.1-2017.11-x86_64_arm-linux-gnueabihf/lib/gcc/arm-linux-gnueabihf/6.4.1/include/stdarg.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/string.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/string.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/byteorder.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/byteorder/little_endian.h \
    $(wildcard include/config/cpu/big/endian.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/byteorder/little_endian.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/swab.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi/linux/swab.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/swab.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi/asm/swab.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/byteorder/generic.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/lib/../scripts/dtc/libfdt/fdt_empty_tree.c \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/lib/../scripts/dtc/libfdt/libfdt_env.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/lib/../scripts/dtc/libfdt/fdt.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/lib/../scripts/dtc/libfdt/libfdt.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/lib/../scripts/dtc/libfdt/fdt.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/lib/../scripts/dtc/libfdt/libfdt_internal.h \

lib/fdt_empty_tree.o: $(deps_lib/fdt_empty_tree.o)

$(deps_lib/fdt_empty_tree.o):
