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
	{ 0x95bdd97b, __VMLINUX_SYMBOL_STR(crypto_unregister_shash) },
	{ 0x3410781f, __VMLINUX_SYMBOL_STR(crypto_register_shash) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

