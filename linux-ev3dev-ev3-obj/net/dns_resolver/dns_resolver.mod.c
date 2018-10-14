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
	{ 0x51a29cb0, __VMLINUX_SYMBOL_STR(request_key) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe0a1361b, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x11cc7b08, __VMLINUX_SYMBOL_STR(prepare_kernel_cred) },
	{ 0x19788bd2, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x7113e034, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x7b4ee807, __VMLINUX_SYMBOL_STR(generic_key_instantiate) },
	{ 0x45083f42, __VMLINUX_SYMBOL_STR(user_read) },
	{ 0xd8d460c4, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0x5dc627a6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x6457bb51, __VMLINUX_SYMBOL_STR(key_validate) },
	{ 0xdc25378a, __VMLINUX_SYMBOL_STR(key_revoke) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0xdd27fa87, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x9afe9504, __VMLINUX_SYMBOL_STR(key_put) },
	{ 0x65fd066a, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x9cd217a8, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0xcd431593, __VMLINUX_SYMBOL_STR(keyring_alloc) },
	{ 0xe3baa91c, __VMLINUX_SYMBOL_STR(register_key_type) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xff40dcd6, __VMLINUX_SYMBOL_STR(unregister_key_type) },
	{ 0x72cf3dac, __VMLINUX_SYMBOL_STR(user_revoke) },
	{ 0x8652ae31, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xcb4368b8, __VMLINUX_SYMBOL_STR(user_destroy) },
	{ 0x94279ad4, __VMLINUX_SYMBOL_STR(revert_creds) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

