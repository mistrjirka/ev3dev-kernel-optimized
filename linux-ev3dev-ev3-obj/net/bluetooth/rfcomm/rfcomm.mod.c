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
	{ 0xcd9a5260, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x59ba7266, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0xb791bb52, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x443f18af, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xe00d6250, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x4dbd0442, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x5c2e3421, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x81742e39, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xb308c97d, __VMLINUX_SYMBOL_STR(wait_woken) },
	{ 0x49dde139, __VMLINUX_SYMBOL_STR(bt_sock_poll) },
	{ 0x7e9c523b, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x851bc2db, __VMLINUX_SYMBOL_STR(hci_register_cb) },
	{ 0x448437f4, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0x32eeecb3, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0xbeb39b00, __VMLINUX_SYMBOL_STR(bt_sock_ioctl) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xbd6afcb4, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0xf2204811, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xead8d06, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1e1626d9, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x5c272fab, __VMLINUX_SYMBOL_STR(bt_sock_register) },
	{ 0x6d02f9a0, __VMLINUX_SYMBOL_STR(kernel_listen) },
	{ 0x1e6980ee, __VMLINUX_SYMBOL_STR(hci_conn_check_secure) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3c77a4e7, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xdbdc3dfa, __VMLINUX_SYMBOL_STR(bt_sock_wait_state) },
	{ 0xda02d67, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb237390d, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x4899a628, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x39275cb1, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x176e9012, __VMLINUX_SYMBOL_STR(bt_accept_enqueue) },
	{ 0x8d223a7, __VMLINUX_SYMBOL_STR(tty_port_put) },
	{ 0xdb864284, __VMLINUX_SYMBOL_STR(bt_sock_unlink) },
	{ 0xe7f47c09, __VMLINUX_SYMBOL_STR(bt_accept_unlink) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1e4737c, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xe8b0200d, __VMLINUX_SYMBOL_STR(hci_get_route) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x3d1897b4, __VMLINUX_SYMBOL_STR(bt_accept_dequeue) },
	{ 0x3e781ed7, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x2ccf60b, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0x9f3ca9a6, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0x29816bdd, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x201a4b32, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x42774dfc, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x19ac1202, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xdf7389f, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0x4da40e5f, __VMLINUX_SYMBOL_STR(hci_conn_security) },
	{ 0x5dba8da1, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x374dbb1b, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0xaea86cc3, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9a092b9a, __VMLINUX_SYMBOL_STR(device_move) },
	{ 0xccde6984, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xa38caae0, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8fea24bd, __VMLINUX_SYMBOL_STR(bt_sock_unregister) },
	{ 0x9b1b89a1, __VMLINUX_SYMBOL_STR(tty_vhangup) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xe8140b03, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xd3512349, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf74fa0c3, __VMLINUX_SYMBOL_STR(bt_sock_link) },
	{ 0x58a4784a, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x45a213d7, __VMLINUX_SYMBOL_STR(tty_port_tty_wakeup) },
	{ 0x5bf493d, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xa8b0670c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xd0654aba, __VMLINUX_SYMBOL_STR(woken_wake_function) },
	{ 0x89eae297, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xb28e3fb8, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xf456b2ad, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xc0ee317f, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xb2e9c85d, __VMLINUX_SYMBOL_STR(bt_sock_stream_recvmsg) },
	{ 0x29ba11e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5976ac9f, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xe3918d4c, __VMLINUX_SYMBOL_STR(hci_unregister_cb) },
	{ 0xe1e3311e, __VMLINUX_SYMBOL_STR(_copy_from_iter_full) },
	{ 0xfd448e67, __VMLINUX_SYMBOL_STR(bt_sock_reclassify_lock) },
	{ 0x10655b05, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x411d0119, __VMLINUX_SYMBOL_STR(tty_port_install) },
	{ 0x511b6a49, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x2a55d852, __VMLINUX_SYMBOL_STR(bt_sock_wait_ready) },
	{ 0x3cc728f0, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x3232d60, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x7e2ce76e, __VMLINUX_SYMBOL_STR(kernel_accept) },
	{ 0x413c0466, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xb07c7e62, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0xcb0a3a8e, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x3fb2b1cc, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf9ea00a4, __VMLINUX_SYMBOL_STR(hci_conn_switch_role) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xde8c10ab, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x80defd8e, __VMLINUX_SYMBOL_STR(add_wait_queue_exclusive) },
	{ 0xdc942dd6, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0x644347d6, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0xdd67235a, __VMLINUX_SYMBOL_STR(bt_procfs_init) },
	{ 0x5b0207e7, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x7f2119d1, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x95dbe078, __VMLINUX_SYMBOL_STR(__get_user_2) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x864f8a13, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0x590ba4fa, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x8652ae31, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xaf195559, __VMLINUX_SYMBOL_STR(bt_procfs_cleanup) },
	{ 0x1d80632a, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3A047E9E271AEA263B4E346");
