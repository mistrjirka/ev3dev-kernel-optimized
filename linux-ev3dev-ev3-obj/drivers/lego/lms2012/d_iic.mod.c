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
	{ 0x89ba17b8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x1f2e5b75, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x5c0b44ea, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x8be5575, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xe8d6301b, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xddece99e, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x76f6c5ef, __VMLINUX_SYMBOL_STR(kmalloc_order) },
	{ 0x27f4457f, __VMLINUX_SYMBOL_STR(lms2012_compat_get) },
	{ 0xbb2242fc, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xfb6c3651, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x714eef32, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0xe5c6a291, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0x7c333787, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x1cb3d723, __VMLINUX_SYMBOL_STR(gpiod_direction_output) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd649b388, __VMLINUX_SYMBOL_STR(completion_done) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xfacd2e14, __VMLINUX_SYMBOL_STR(pgprot_user) },
	{ 0x6d394bb4, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x161bd4b5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc0ee317f, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xbfb9aea8, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x472035d, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lms2012_compat";

