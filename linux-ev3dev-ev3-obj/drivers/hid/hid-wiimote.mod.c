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
	{ 0x281e7747, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xbf450fc4, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x5c2e3421, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xbbddf838, __VMLINUX_SYMBOL_STR(input_ff_create_memless) },
	{ 0x87475907, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0xa2e5a2b7, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x687dce2b, __VMLINUX_SYMBOL_STR(power_supply_powers) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xda02d67, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x2f0f949d, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x44b5ee9a, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xdc4baa33, __VMLINUX_SYMBOL_STR(of_led_classdev_register) },
	{ 0x116d54fc, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xddece99e, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x974e4d59, __VMLINUX_SYMBOL_STR(power_supply_get_drvdata) },
	{ 0x116a8a5c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x76f6c5ef, __VMLINUX_SYMBOL_STR(kmalloc_order) },
	{ 0x201a4b32, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6bbbe5cc, __VMLINUX_SYMBOL_STR(hid_hw_close) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xe92edd8b, __VMLINUX_SYMBOL_STR(hid_hw_open) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa38caae0, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x58a4784a, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xd66c809d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xc0ee317f, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x6d3cb18e, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xb4eb84e, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x70d8f5b0, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0x140b2393, __VMLINUX_SYMBOL_STR(hid_hw_stop) },
	{ 0xbcd14db0, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xc82bf543, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2e1467cd, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x4d5c32e8, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x1ec6879a, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xbb2242fc, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x986ef30a, __VMLINUX_SYMBOL_STR(hid_hw_start) },
	{ 0x80c05a7, __VMLINUX_SYMBOL_STR(power_supply_register) },
	{ 0xb2eff02f, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x5054c285, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x6a211df2, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ff-memless";

MODULE_ALIAS("hid:b0005g*v0000057Ep00000306");
MODULE_ALIAS("hid:b0005g*v0000057Ep00000330");
