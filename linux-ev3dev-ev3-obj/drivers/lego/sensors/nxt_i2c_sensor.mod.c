#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x1599edf4, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x355d9ecf, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xe272b567, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xf55fa6c5, __VMLINUX_SYMBOL_STR(i2c_smbus_read_i2c_block_data) },
	{ 0x714eef32, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0xe1334e6c, __VMLINUX_SYMBOL_STR(lego_device_register) },
	{ 0x89c052c5, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0x472035d, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x50fc41b8, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xf2204811, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x64283490, __VMLINUX_SYMBOL_STR(lego_sensor_default_scale) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8743a903, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf2db4d93, __VMLINUX_SYMBOL_STR(lego_sensor_data_size) },
	{ 0x5c0b44ea, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x3b79cc35, __VMLINUX_SYMBOL_STR(lego_port_register) },
	{ 0xfe05bd5a, __VMLINUX_SYMBOL_STR(lego_device_unregister) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x5937f60d, __VMLINUX_SYMBOL_STR(unregister_lego_sensor) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x6d56aa84, __VMLINUX_SYMBOL_STR(lego_port_unregister) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x6d343d30, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x466804c7, __VMLINUX_SYMBOL_STR(register_servo_motor) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7aa190b7, __VMLINUX_SYMBOL_STR(i2c_legoev3_algo) },
	{ 0x8be5575, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x1ec6879a, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc1f096bb, __VMLINUX_SYMBOL_STR(unregister_servo_motor) },
	{ 0x669481ec, __VMLINUX_SYMBOL_STR(i2c_smbus_write_i2c_block_data) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3fa7fd7, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x81a6abe9, __VMLINUX_SYMBOL_STR(register_lego_sensor) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=servo_motor_class";

MODULE_ALIAS("i2c:lego-nxt-us");
MODULE_ALIAS("i2c:lego-nxt-temp");
MODULE_ALIAS("i2c:lego-power-storage");
MODULE_ALIAS("i2c:ht-nxt-pir");
MODULE_ALIAS("i2c:ht-nxt-barometric");
MODULE_ALIAS("i2c:ht-nxt-ir-seek-v2");
MODULE_ALIAS("i2c:ht-nxt-color");
MODULE_ALIAS("i2c:ht-nxt-color-v2");
MODULE_ALIAS("i2c:ht-nxt-angle");
MODULE_ALIAS("i2c:ht-nxt-compass");
MODULE_ALIAS("i2c:ht-nxt-ir-receiver");
MODULE_ALIAS("i2c:ht-nxt-accel");
MODULE_ALIAS("i2c:ht-nxt-ir-link");
MODULE_ALIAS("i2c:ht-super-pro");
MODULE_ALIAS("i2c:ht-nxt-smux");
MODULE_ALIAS("i2c:ms-8ch-servo");
MODULE_ALIAS("i2c:ms-absolute-imu");
MODULE_ALIAS("i2c:ms-angle");
MODULE_ALIAS("i2c:ms-ev3-smux");
MODULE_ALIAS("i2c:ms-ir-thermometer");
MODULE_ALIAS("i2c:ms-light-array");
MODULE_ALIAS("i2c:ms-line-leader");
MODULE_ALIAS("i2c:ms-nxtmmx");
MODULE_ALIAS("i2c:ms-nxtcam");
MODULE_ALIAS("i2c:ms-nxtcam5");
MODULE_ALIAS("i2c:ms-pixy-adapter");
MODULE_ALIAS("i2c:ms-pps58-nx");
MODULE_ALIAS("i2c:mi-xg1300l");
MODULE_ALIAS("i2c:pixy-lego");
