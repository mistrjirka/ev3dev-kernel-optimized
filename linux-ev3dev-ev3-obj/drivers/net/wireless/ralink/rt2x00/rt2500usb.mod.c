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
	{ 0xf2204811, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xd41d9eef, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0xbf2885d1, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0xff888c54, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0x893c8405, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x29d54b2f, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0x13aa4025, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0xf1257b58, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0x53511777, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xe9e36b6f, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x1c9bac2a, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0xebede4c4, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0xbcda6945, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0xad67b4dd, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0xd9ea1b81, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0xade8bdbd, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0x1ccaf24, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0x9647e3b, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0x138d149b, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0x938c5a98, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0x3e1efc28, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x6a502593, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x56e0c2ef, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0xe53e4390, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x54454ced, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0x5e4023c0, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0x673982d, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0x7f39982e, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0xefc31a52, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0x9475583b, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0xcaf6a0d2, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xbf6ce96e, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x13007bae, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd66c809d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5ec81310, __VMLINUX_SYMBOL_STR(rt2x00lib_set_mac_address) },
	{ 0xa5659f20, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x91578019, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xe019838, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xaea86cc3, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x6fef09b6, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc6f83888, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0x3b71fa7a, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0x45227b5e, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00usb,rt2x00lib";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "50526305F04672226A42A56");
