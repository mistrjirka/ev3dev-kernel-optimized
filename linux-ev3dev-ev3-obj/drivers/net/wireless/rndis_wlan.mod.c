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
	{ 0x6c7b12c, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x4dbd0442, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x74e5563e, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x8b843437, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xd45da138, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x2abaf1c9, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xf364451a, __VMLINUX_SYMBOL_STR(rndis_tx_fixup) },
	{ 0xbe88b5a4, __VMLINUX_SYMBOL_STR(rndis_rx_fixup) },
	{ 0x13884298, __VMLINUX_SYMBOL_STR(rndis_status) },
	{ 0x42d653df, __VMLINUX_SYMBOL_STR(usbnet_get_stats64) },
	{ 0x68c5ca97, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xaeb35694, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xfcb954b5, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x35f83afc, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x177eb807, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xb3f11034, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xcaf6a0d2, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xbf6ce96e, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xb859f38b, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x476b21eb, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xd6173ad9, __VMLINUX_SYMBOL_STR(usbnet_purge_paused_rxq) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0xe8663ae6, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0x9ef80526, __VMLINUX_SYMBOL_STR(cfg80211_cqm_rssi_notify) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9e89c0b3, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0xd827e158, __VMLINUX_SYMBOL_STR(generic_rndis_bind) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x201a4b32, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6763e67e, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc359ac22, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0x831f5e11, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe6f2865e, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xcf2b6772, __VMLINUX_SYMBOL_STR(usbnet_resume_rx) },
	{ 0x36bda937, __VMLINUX_SYMBOL_STR(cfg80211_connect_done) },
	{ 0x2930b436, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x902519f0, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x58d2273e, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x56e186e6, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x1e4ea15f, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0x38d5e1c4, __VMLINUX_SYMBOL_STR(rndis_unbind) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xfd792e2a, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x2c06435b, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0x8dbe9e74, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x243998cc, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_data) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1ba02b3c, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xc90c084d, __VMLINUX_SYMBOL_STR(ieee80211_get_channel) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6b61239d, __VMLINUX_SYMBOL_STR(rndis_command) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xd5a2cc98, __VMLINUX_SYMBOL_STR(cfg80211_pmksa_candidate_notify) },
	{ 0xc536acad, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x67196e8, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x9664521a, __VMLINUX_SYMBOL_STR(usbnet_pause_rx) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,rndis_host,cfg80211";

MODULE_ALIAS("usb:v0411p00BCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v050Dp011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1799p011Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0014d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p0026d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0B05p1717d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0A5CpD11Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v1690p0715d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v13B1p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0BAFp0111d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0411p004Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icEFisc01ip01in*");
