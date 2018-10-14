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
	{ 0x120a7623, __VMLINUX_SYMBOL_STR(serio_unregister_driver) },
	{ 0x9cd9b6e6, __VMLINUX_SYMBOL_STR(__serio_register_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x116d54fc, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb4eb84e, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x6d3cb18e, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x4ea26e00, __VMLINUX_SYMBOL_STR(serio_open) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6a211df2, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e1467cd, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xd23f27fc, __VMLINUX_SYMBOL_STR(serio_close) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty00pr*id*ex*");
