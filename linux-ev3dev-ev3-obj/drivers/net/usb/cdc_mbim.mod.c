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
	{ 0xd45da138, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x2abaf1c9, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x42d653df, __VMLINUX_SYMBOL_STR(usbnet_get_stats64) },
	{ 0x68c5ca97, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x8d2d8203, __VMLINUX_SYMBOL_STR(cdc_ncm_change_mtu) },
	{ 0xaeb35694, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xfcb954b5, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x35f83afc, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x177eb807, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xb3f11034, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xcaf6a0d2, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xbf6ce96e, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xd095cd83, __VMLINUX_SYMBOL_STR(cdc_ncm_fill_tx_frame) },
	{ 0xe332e020, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x476b21eb, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xe8140b03, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x86540e68, __VMLINUX_SYMBOL_STR(usb_cdc_wdm_register) },
	{ 0x9977e63a, __VMLINUX_SYMBOL_STR(cdc_ncm_bind_common) },
	{ 0xa7e312d, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0x9484a9e7, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xb25c68d6, __VMLINUX_SYMBOL_STR(cdc_ncm_select_altsetting) },
	{ 0xeaac5ed1, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x3d3e4279, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x8b843437, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x74e5563e, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x219a956c, __VMLINUX_SYMBOL_STR(cdc_ncm_unbind) },
	{ 0x48ffe331, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0x6a980e94, __VMLINUX_SYMBOL_STR(in6_dev_finish_destroy) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x727a87f4, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x590ba4fa, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa5429be9, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xc8885e8b, __VMLINUX_SYMBOL_STR(cdc_ncm_rx_verify_ndp16) },
	{ 0x5f01594b, __VMLINUX_SYMBOL_STR(cdc_ncm_rx_verify_nth16) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,cdc_ncm,cdc-wdm";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v03F0pA31Dd*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");
