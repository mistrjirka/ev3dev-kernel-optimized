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
	{ 0x4f288f34, __VMLINUX_SYMBOL_STR(tty_mode_ioctl) },
	{ 0x89ba17b8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x1f2e5b75, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7c333787, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0xc804693e, __VMLINUX_SYMBOL_STR(gpiod_get_value) },
	{ 0x714eef32, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0x3c401e73, __VMLINUX_SYMBOL_STR(tty_register_ldisc) },
	{ 0x5c0b44ea, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x3f5d53e0, __VMLINUX_SYMBOL_STR(tasklet_hrtimer_init) },
	{ 0xe8d6301b, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x76f6c5ef, __VMLINUX_SYMBOL_STR(kmalloc_order) },
	{ 0x27f4457f, __VMLINUX_SYMBOL_STR(lms2012_compat_get) },
	{ 0xe01b8237, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0xb44b03fd, __VMLINUX_SYMBOL_STR(tty_wait_until_sent) },
	{ 0x8dbcb01e, __VMLINUX_SYMBOL_STR(tty_put_char) },
	{ 0xa120d33c, __VMLINUX_SYMBOL_STR(tty_unregister_ldisc) },
	{ 0x161bd4b5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xc0ee317f, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbfb9aea8, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x472035d, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x1cb3d723, __VMLINUX_SYMBOL_STR(gpiod_direction_output) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe7372bf2, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x525a83d2, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x468db175, __VMLINUX_SYMBOL_STR(tty_driver_flush_buffer) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xfacd2e14, __VMLINUX_SYMBOL_STR(pgprot_user) },
	{ 0x6d394bb4, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lms2012_compat";

