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
	{ 0x74e5563e, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x8b843437, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xd45da138, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x2abaf1c9, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x15af3edf, __VMLINUX_SYMBOL_STR(usbnet_set_link_ksettings) },
	{ 0x2ed5325a, __VMLINUX_SYMBOL_STR(usbnet_get_link_ksettings) },
	{ 0x9473ca96, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x3c3bdceb, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x221dfa45, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x42d653df, __VMLINUX_SYMBOL_STR(usbnet_get_stats64) },
	{ 0x68c5ca97, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x2e5d0274, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0xaeb35694, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x35f83afc, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x177eb807, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xb3f11034, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xcaf6a0d2, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xbf6ce96e, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xa6c6f5b4, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5f522572, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x476b21eb, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x6f73318d, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x7567dc7d, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0xc41978ea, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xff149a31, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x6175446e, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0xaf0dd969, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x1f429d32, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0xe1d4af44, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x42ad5d0b, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6fef09b6, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe8140b03, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe332e020, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x19623e0, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v07AAp9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p6688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0268d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p8515d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A47p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p8101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p9700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9621d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p1269d*dc*dsc*dp*ic*isc*ip*in*");