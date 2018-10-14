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
	{ 0xb5a541a3, __VMLINUX_SYMBOL_STR(ppp_unregister_compressor) },
	{ 0x4743149c, __VMLINUX_SYMBOL_STR(ppp_register_compressor) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7e2675f1, __VMLINUX_SYMBOL_STR(crypto_has_ahash) },
	{ 0x90a1004a, __VMLINUX_SYMBOL_STR(crypto_has_alg) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd5ee63a6, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x56a347d9, __VMLINUX_SYMBOL_STR(crypto_alloc_skcipher) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xec1aa6ef, __VMLINUX_SYMBOL_STR(memzero_explicit) },
	{ 0x93ab9277, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x161bd4b5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x8a3bfb0, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ppp_generic";


MODULE_INFO(srcversion, "1354553F28FE3C49400B0D3");
