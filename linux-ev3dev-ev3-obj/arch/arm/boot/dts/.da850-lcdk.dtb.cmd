cmd_arch/arm/boot/dts/da850-lcdk.dtb := mkdir -p arch/arm/boot/dts/ ; /usr/lib/x86_64-linux-gnu/gcc-linaro-arm-linux-gnueabihf-6.4/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.da850-lcdk.dtb.d.pre.tmp -nostdinc -I/home/jirka/programming/python/kernel4python3/ev3-kernel/scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.da850-lcdk.dtb.dts.tmp /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/boot/dts/da850-lcdk.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/da850-lcdk.dtb -b 0 -i/home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/boot/dts/ -i/home/jirka/programming/python/kernel4python3/ev3-kernel/scripts/dtc/include-prefixes -Wno-unit_address_vs_reg -Wno-simple_bus_reg -Wno-unit_address_format -Wno-pci_bridge -Wno-pci_device_bus_num -Wno-pci_device_reg  -d arch/arm/boot/dts/.da850-lcdk.dtb.d.dtc.tmp arch/arm/boot/dts/.da850-lcdk.dtb.dts.tmp ; cat arch/arm/boot/dts/.da850-lcdk.dtb.d.pre.tmp arch/arm/boot/dts/.da850-lcdk.dtb.d.dtc.tmp > arch/arm/boot/dts/.da850-lcdk.dtb.d

source_arch/arm/boot/dts/da850-lcdk.dtb := /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/boot/dts/da850-lcdk.dts

deps_arch/arm/boot/dts/da850-lcdk.dtb := \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/boot/dts/da850.dtsi \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/arch/arm/boot/dts/skeleton.dtsi \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  /home/jirka/programming/python/kernel4python3/ev3-kernel/scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \

arch/arm/boot/dts/da850-lcdk.dtb: $(deps_arch/arm/boot/dts/da850-lcdk.dtb)

$(deps_arch/arm/boot/dts/da850-lcdk.dtb):