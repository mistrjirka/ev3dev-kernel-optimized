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
	{ 0xbe4f23ae, __VMLINUX_SYMBOL_STR(nf_ct_kill_acct) },
	{ 0x9c9355c1, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb6abc8ff, __VMLINUX_SYMBOL_STR(nf_nat_used_tuple) },
	{ 0x8bc10e7c, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_register) },
	{ 0xf0e2f668, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0xd03c7700, __VMLINUX_SYMBOL_STR(secure_ipv4_port_ephemeral) },
	{ 0x88a72207, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0x2bfb05ce, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x229fc74e, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0x58dfaea3, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_unregister) },
	{ 0xf0f4a49d, __VMLINUX_SYMBOL_STR(nf_xfrm_me_harder) },
	{ 0x5b96c573, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0xf1ea6f1c, __VMLINUX_SYMBOL_STR(__bswapsi2) },
	{ 0x3aeaae12, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xe3cb769c, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_unregister) },
	{ 0x2a098063, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_register) },
	{ 0x5a939bac, __VMLINUX_SYMBOL_STR(__nf_nat_l4proto_find) },
	{ 0xd919fbdb, __VMLINUX_SYMBOL_STR(nf_nat_alloc_null_binding) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_nat";

