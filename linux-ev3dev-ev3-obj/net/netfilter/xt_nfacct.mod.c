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
	{ 0x4393ed8f, __VMLINUX_SYMBOL_STR(xt_unregister_match) },
	{ 0x39c49aa7, __VMLINUX_SYMBOL_STR(xt_register_match) },
	{ 0x877f723c, __VMLINUX_SYMBOL_STR(nfnl_acct_overquota) },
	{ 0x108eddaf, __VMLINUX_SYMBOL_STR(nfnl_acct_update) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7c61d2c1, __VMLINUX_SYMBOL_STR(nfnl_acct_find_get) },
	{ 0xbecf5d14, __VMLINUX_SYMBOL_STR(nfnl_acct_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nfnetlink_acct";

