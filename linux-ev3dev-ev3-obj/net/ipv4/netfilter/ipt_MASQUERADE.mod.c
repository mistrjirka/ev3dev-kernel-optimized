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
	{ 0x3f5c468e, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv4_unregister_notifier) },
	{ 0x76f7fc7d, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0xfedbf252, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv4_register_notifier) },
	{ 0xe5cbcc1f, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x7132c798, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv4) },
	{ 0xc462e4a3, __VMLINUX_SYMBOL_STR(nf_ct_netns_get) },
	{ 0x168c28de, __VMLINUX_SYMBOL_STR(nf_ct_netns_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat_masquerade_ipv4,x_tables,nf_conntrack";

