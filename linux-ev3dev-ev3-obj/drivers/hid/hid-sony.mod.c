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
	{ 0x2027510c, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0xb2eff02f, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x5495392, __VMLINUX_SYMBOL_STR(hid_debug) },
	{ 0x4d5c32e8, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xc871a1a9, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0x57f0f449, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0x116d54fc, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x58a4784a, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x6bbbe5cc, __VMLINUX_SYMBOL_STR(hid_hw_close) },
	{ 0xbbddf838, __VMLINUX_SYMBOL_STR(input_ff_create_memless) },
	{ 0x9499139c, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x687dce2b, __VMLINUX_SYMBOL_STR(power_supply_powers) },
	{ 0xdc4baa33, __VMLINUX_SYMBOL_STR(of_led_classdev_register) },
	{ 0xe92edd8b, __VMLINUX_SYMBOL_STR(hid_hw_open) },
	{ 0x80c05a7, __VMLINUX_SYMBOL_STR(power_supply_register) },
	{ 0x44b5ee9a, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1120e04a, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x89ab6b97, __VMLINUX_SYMBOL_STR(hid_validate_values) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x140b2393, __VMLINUX_SYMBOL_STR(hid_hw_stop) },
	{ 0xdfc0c78e, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x87475907, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0x281e7747, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x76099a0d, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xc82bf543, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xa51dff80, __VMLINUX_SYMBOL_STR(__hid_request) },
	{ 0x986ef30a, __VMLINUX_SYMBOL_STR(hid_hw_start) },
	{ 0xbf450fc4, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0xf11fb052, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x2e1467cd, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x974e4d59, __VMLINUX_SYMBOL_STR(power_supply_get_drvdata) },
	{ 0xb4eb84e, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x6d3cb18e, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x1b1f57cb, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x2f0f949d, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x6a211df2, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x1ec6879a, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd66c809d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ff-memless";

MODULE_ALIAS("hid:b0003g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0005g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0003g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000024B");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000374");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000002");
MODULE_ALIAS("hid:b0003g*v0000054Cp00001000");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000306");
MODULE_ALIAS("hid:b0005g*v0000046Dp00000306");
MODULE_ALIAS("hid:b0005g*v00000609p00000306");
MODULE_ALIAS("hid:b0003g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0005g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0003g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0005g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000BA0");
MODULE_ALIAS("hid:b0003g*v00001345p00003008");
