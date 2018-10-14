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
	{ 0xcccd1382, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x960f202d, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x168c28de, __VMLINUX_SYMBOL_STR(nf_ct_netns_put) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc462e4a3, __VMLINUX_SYMBOL_STR(nf_ct_netns_get) },
	{ 0xd94b60df, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_conntrack,nf_nat";

