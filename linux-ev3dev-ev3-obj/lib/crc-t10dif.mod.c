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
	{ 0x62ff0154, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x78eb8a9e, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0xbea5ff1e, __VMLINUX_SYMBOL_STR(static_key_initialized) },
	{ 0x106f13ab, __VMLINUX_SYMBOL_STR(crc_t10dif_generic) },
	{ 0x8a3bfb0, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crct10dif_common";

