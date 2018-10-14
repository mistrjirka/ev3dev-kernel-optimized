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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x59ba7266, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x5215a475, __VMLINUX_SYMBOL_STR(hid_add_device) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x443f18af, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xc10dbfce, __VMLINUX_SYMBOL_STR(hid_ignore) },
	{ 0xe0a1361b, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xe00d6250, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xaabab281, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x5c2e3421, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x3e2ce7e, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xaa8b3172, __VMLINUX_SYMBOL_STR(hid_parse_report) },
	{ 0x300491cf, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x81742e39, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xb308c97d, __VMLINUX_SYMBOL_STR(wait_woken) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x5a6cec82, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5c272fab, __VMLINUX_SYMBOL_STR(bt_sock_register) },
	{ 0x3c77a4e7, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x46a4f3e8, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0xda02d67, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x44b39a7b, __VMLINUX_SYMBOL_STR(hid_input_report) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x5dc627a6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x4899a628, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x116d54fc, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xddece99e, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x39275cb1, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xc407c243, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0xdb864284, __VMLINUX_SYMBOL_STR(bt_sock_unlink) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1e4737c, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x3e781ed7, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x4d82891d, __VMLINUX_SYMBOL_STR(l2cap_conn_put) },
	{ 0x29816bdd, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x116a8a5c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x201a4b32, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x96196252, __VMLINUX_SYMBOL_STR(l2cap_is_socket) },
	{ 0x15beecca, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x23b365df, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x657aa0b4, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xccde6984, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xa38caae0, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8fea24bd, __VMLINUX_SYMBOL_STR(bt_sock_unregister) },
	{ 0xe8140b03, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xe7372bf2, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xd3512349, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x525a83d2, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xc3f37633, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x2082a62c, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xf74fa0c3, __VMLINUX_SYMBOL_STR(bt_sock_link) },
	{ 0xa8b0670c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xd0654aba, __VMLINUX_SYMBOL_STR(woken_wake_function) },
	{ 0x89eae297, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf456b2ad, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xc0ee317f, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x6d3cb18e, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x29ba11e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5976ac9f, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xb2dd8598, __VMLINUX_SYMBOL_STR(l2cap_register_user) },
	{ 0x20515131, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0x511b6a49, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xf732cfe2, __VMLINUX_SYMBOL_STR(hid_destroy_device) },
	{ 0xb10aca6b, __VMLINUX_SYMBOL_STR(hid_allocate_device) },
	{ 0xd7b76d55, __VMLINUX_SYMBOL_STR(l2cap_conn_get) },
	{ 0xbcd14db0, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x3232d60, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x413c0466, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x93f6bff1, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x39f5c32d, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x3fb2b1cc, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2e1467cd, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xd9e520d3, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0xde8c10ab, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x963e0acd, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xdd67235a, __VMLINUX_SYMBOL_STR(bt_procfs_init) },
	{ 0x5b0207e7, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x590ba4fa, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xaf195559, __VMLINUX_SYMBOL_STR(bt_procfs_cleanup) },
	{ 0x4dec6038, __VMLINUX_SYMBOL_STR(memscan) },
	{ 0xbc86f65, __VMLINUX_SYMBOL_STR(l2cap_unregister_user) },
	{ 0x6a211df2, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "920F000EB925BE9216A7D3A");
