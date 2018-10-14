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
	{ 0x67196e8, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa9ff2135, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x161bd4b5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xad995dac, __VMLINUX_SYMBOL_STR(netdev_stats_to_stats64) },
	{ 0x4dbd0442, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x5c2e3421, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x81742e39, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xe6f2865e, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x5c44b80, __VMLINUX_SYMBOL_STR(usb_get_from_anchor) },
	{ 0x2930b436, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x97297182, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xa370f0a2, __VMLINUX_SYMBOL_STR(usb_scuttle_anchored_urbs) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xe332e020, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3d3e4279, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xc830506c, __VMLINUX_SYMBOL_STR(usb_get_urb) },
	{ 0x39761d2c, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xda02d67, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xa5429be9, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x1eaa17ca, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xddece99e, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xaad8c7d6, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1e4737c, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x48be89fd, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x755e33b3, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xa6c6f5b4, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x201a4b32, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x5669a39d, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x9484a9e7, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xf23cb0ab, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xf27e44a0, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface_async) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x74f8af57, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xa1c8b707, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa38caae0, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x54415ad4, __VMLINUX_SYMBOL_STR(mii_ethtool_set_link_ksettings) },
	{ 0xa8b0670c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x10c38c03, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xe019838, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x79ee754, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x3daea73a, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_async) },
	{ 0x479cbf57, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xa6060c22, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x9c7d517b, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xaa4a7797, __VMLINUX_SYMBOL_STR(hex2bin) },
	{ 0x476b21eb, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x413c0466, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x877ee659, __VMLINUX_SYMBOL_STR(mii_ethtool_get_link_ksettings) },
	{ 0x5318ccc3, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_no_resume) },
	{ 0xaeb35694, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x3fb2b1cc, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5b0207e7, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x603e4190, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1f429d32, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0x91578019, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x5c41ff32, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x590ba4fa, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xfcb954b5, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x814284c9, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xeaac5ed1, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x53a3c678, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0xcb8d41cc, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x323fdaa8, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

