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
	{ 0x32314db4, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x5a95e49b, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x25b69326, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x39275cb1, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x300491cf, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x3e2ce7e, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x2082a62c, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x23b365df, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xa2f90121, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0xbe712c01, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x657aa0b4, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x3e781ed7, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x15beecca, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0xb4e0b4cf, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xb960b8c5, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x5976ac9f, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xb286e75a, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x52952264, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0x89eae297, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xd21a200a, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x9ff04e88, __VMLINUX_SYMBOL_STR(proc_create) },
	{ 0x7113e034, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x19788bd2, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xb7da1fa0, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0xbe038bb3, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x1e4737c, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xfdac60aa, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0xc19dfac7, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe1e3311e, __VMLINUX_SYMBOL_STR(_copy_from_iter_full) },
	{ 0x590ba4fa, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x21a22efa, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x630efb1a, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x45509e73, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x6bf395ee, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x2bdd1b98, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0x72e19dd0, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x4686b589, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x443f18af, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x29816bdd, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xb8820fd1, __VMLINUX_SYMBOL_STR(dev_get_by_name_rcu) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xe54e46de, __VMLINUX_SYMBOL_STR(__sk_receive_skb) },
	{ 0x77b03256, __VMLINUX_SYMBOL_STR(pskb_trim_rcsum_slow) },
	{ 0x62a4e643, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x29ba11e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x4899a628, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x91578019, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x78e3802a, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xccde6984, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xb791bb52, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xe615e9a7, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0x19ac1202, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,ppp_generic";

