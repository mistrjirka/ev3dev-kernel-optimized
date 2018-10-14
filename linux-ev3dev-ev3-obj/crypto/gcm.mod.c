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
	{ 0xb748e4d2, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xc067263, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0xa805363a, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x1dc54eb6, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xddece99e, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xbe892890, __VMLINUX_SYMBOL_STR(crypto_ahash_type) },
	{ 0x2899c18c, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x6e613e95, __VMLINUX_SYMBOL_STR(crypto_grab_skcipher) },
	{ 0x62dd113f, __VMLINUX_SYMBOL_STR(crypto_init_ahash_spawn) },
	{ 0x273b5263, __VMLINUX_SYMBOL_STR(crypto_find_alg) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x149dc83b, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xcffe298a, __VMLINUX_SYMBOL_STR(crypto_grab_aead) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xbb2242fc, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xe470b3c4, __VMLINUX_SYMBOL_STR(crypto_ahash_finup) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x389ecf9e, __VMLINUX_SYMBOL_STR(__bswapdi2) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf40b2297, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0xfec4233a, __VMLINUX_SYMBOL_STR(__crypto_xor) },
	{ 0x161bd4b5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x607f18e2, __VMLINUX_SYMBOL_STR(scatterwalk_ffwd) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x91dda801, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6bb68126, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xd9ae21d0, __VMLINUX_SYMBOL_STR(crypto_get_default_null_skcipher) },
	{ 0xbe20b411, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x21cd536a, __VMLINUX_SYMBOL_STR(crypto_put_default_null_skcipher) },
	{ 0x8a3bfb0, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x13e206cc, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0xc2fcbe5d, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

