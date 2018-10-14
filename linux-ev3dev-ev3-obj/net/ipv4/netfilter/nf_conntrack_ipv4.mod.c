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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0xb791bb52, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x2baea84f, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0xb244e66e, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0xc1a7989a, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0x10f67491, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_sctp4) },
	{ 0x26fcae50, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x45154270, __VMLINUX_SYMBOL_STR(nf_conntrack_set_hashsize) },
	{ 0xb71c7ab0, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp4) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x88a72207, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0x1e870b93, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfaa81c07, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0xf0f2aa6f, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xee6e5ccc, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0x9f7c855a, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x19ac1202, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xe5989ab1, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0x97ef6180, __VMLINUX_SYMBOL_STR(nf_unregister_net_hooks) },
	{ 0xdde66e8d, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8ffe7e89, __VMLINUX_SYMBOL_STR(nf_conntrack_htable_size) },
	{ 0xe0119d30, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0x2af81b3d, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_dccp4) },
	{ 0x36ee76e1, __VMLINUX_SYMBOL_STR(nf_register_net_hooks) },
	{ 0x104a4cac, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udplite4) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0xe3f0c5e0, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0x6ab8fa85, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x9b8832a0, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x812d4b9e, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0x55442756, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0xc8a21c23, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp4) },
	{ 0x58f705e8, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x3c47d5cd, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x6cbe0c5d, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x7fe0bfb6, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0xd71ad6d, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x6e8da7ff, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv4";

