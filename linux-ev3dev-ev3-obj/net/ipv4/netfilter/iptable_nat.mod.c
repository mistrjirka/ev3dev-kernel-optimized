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
	{ 0xd3512349, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf0f2aa6f, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x9b8832a0, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcfb02f0e, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0x2e5ba801, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0xf7aa35d4, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_in) },
	{ 0x8b26a310, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_out) },
	{ 0xe391f65f, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_local_fn) },
	{ 0x44e1ae2d, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0x21dc0071, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_fn) },
	{ 0x3cc6ff72, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tables,nf_nat_ipv4";

