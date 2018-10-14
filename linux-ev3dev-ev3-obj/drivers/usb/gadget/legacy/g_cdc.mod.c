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
	{ 0x718831dc, __VMLINUX_SYMBOL_STR(usb_add_config) },
	{ 0x410589c1, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0xb68e6457, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x93bb3849, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb8cb0b1a, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0x2f1a99fc, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0xd66c809d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7d6f3576, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0xcf026e38, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0x32d4e982, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0xa21a16fb, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x8ecdb0d, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0x21c5c4f9, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x36c61e3c, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0xb7e7699e, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0x3fa7fd7, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x8652ae31, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x32a1ded6, __VMLINUX_SYMBOL_STR(usb_remove_function) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether";
