cmd_arch/arm/boot/compressed/decompress.o := /usr/lib/x86_64-linux-gnu/gcc-linaro-arm-linux-gnueabihf-6.4/bin/arm-linux-gnueabihf-gcc -Wp,-MD,arch/arm/boot/compressed/.decompress.o.d  -nostdinc -isystem /usr/lib/x86_64-linux-gnu/gcc-linaro-6.4.1-2017.11-x86_64_arm-linux-gnueabihf/bin/../lib/gcc/arm-linux-gnueabihf/6.4.1/include -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include -I./arch/arm/include/generated  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/include -I./include -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I/home/jirka/programming/python/kernel4python3/ev3-kernel/include/uapi -I./include/generated/uapi -include /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kconfig.h  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/boot/compressed -Iarch/arm/boot/compressed -D__KERNEL__ -mlittle-endian  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/mach-davinci/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -marm -D__LINUX_ARM_ARCH__=5 -march=armv5te -mtune=arm9tdmi -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-frame-address -Os -Wno-maybe-uninitialized --param=allow-store-data-races=0 -DCC_HAVE_ASM_GOTO -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -DDISABLE_BRANCH_PROFILING -fpic -mno-single-pic-base -fno-builtin  -I/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/boot/compressed    -DKBUILD_BASENAME='"decompress"'  -DKBUILD_MODNAME='"decompress"' -c -o arch/arm/boot/compressed/.tmp_decompress.o /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/boot/compressed/decompress.c

source_arch/arm/boot/compressed/decompress.o := /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/boot/compressed/decompress.c

deps_arch/arm/boot/compressed/decompress.o := \
    $(wildcard include/config/kernel/gzip.h) \
    $(wildcard include/config/kernel/lzo.h) \
    $(wildcard include/config/kernel/lzma.h) \
    $(wildcard include/config/kernel/xz.h) \
    $(wildcard include/config/kernel/lz4.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/compiler_types.h \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/gcov/kernel.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
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
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/include/asm/string.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/boot/compressed/../../../../lib/decompress_inflate.c \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/boot/compressed/../../../../lib/zlib_inflate/inftrees.c \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/zutil.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/zlib.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/zconf.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
    $(wildcard include/config/fortify/source.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/arch/has/refcount.h) \
    $(wildcard include/config/panic/timeout.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/boot/compressed/../../../../lib/zlib_inflate/inftrees.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/boot/compressed/../../../../lib/zlib_inflate/inffast.c \
    $(wildcard include/config/have/efficient/unaligned/access.h) \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/boot/compressed/../../../../lib/zlib_inflate/inflate.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/boot/compressed/../../../../lib/zlib_inflate/inffast.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/boot/compressed/../../../../lib/zlib_inflate/inflate.c \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/boot/compressed/../../../../lib/zlib_inflate/infutil.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/boot/compressed/../../../../lib/zlib_inflate/inffixed.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/include/linux/decompress/mm.h \

arch/arm/boot/compressed/decompress.o: $(deps_arch/arm/boot/compressed/decompress.o)

$(deps_arch/arm/boot/compressed/decompress.o):
