cmd_arch/arm/include/generated/asm/mach-types.h := mkdir -p arch/arm/include/generated/asm/ && awk -f /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/tools/gen-mach-types /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/tools/mach-types > arch/arm/include/generated/asm/mach-types.h || { rm -f arch/arm/include/generated/asm/mach-types.h; /bin/false; }