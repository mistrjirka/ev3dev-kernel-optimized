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
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa3b4eed8, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0xc19bae13, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x22483c7, __VMLINUX_SYMBOL_STR(gserial_connect) },
	{ 0x88a577ab, __VMLINUX_SYMBOL_STR(usb_ep_disable) },
	{ 0xb9a38379, __VMLINUX_SYMBOL_STR(usb_ep_enable) },
	{ 0x92215052, __VMLINUX_SYMBOL_STR(usb_ep_queue) },
	{ 0xf749fec9, __VMLINUX_SYMBOL_STR(usb_ep_set_halt) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9343cf48, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0x93bb3849, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3ab51d1b, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x11984a2c, __VMLINUX_SYMBOL_STR(gserial_disconnect) },
	{ 0xe7d69110, __VMLINUX_SYMBOL_STR(gs_alloc_req) },
	{ 0x64b449b7, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x33bfdca2, __VMLINUX_SYMBOL_STR(gserial_alloc_line) },
	{ 0x833e7367, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x734bf2d, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb6652875, __VMLINUX_SYMBOL_STR(gserial_free_line) },
	{ 0x2ff89b4d, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x27831414, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0x1003c8fe, __VMLINUX_SYMBOL_STR(gs_free_req) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_serial";

