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
	{ 0xcaf6a0d2, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xbf6ce96e, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x74f8af57, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xb7cdfe69, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xcb8d41cc, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xfc5335f7, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x323fdaa8, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x1eaa17ca, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x9c7d517b, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x590ba4fa, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa5429be9, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x9484a9e7, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xfd792e2a, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x755e33b3, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x2e9b2b0c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0xe019838, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x39761d2c, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x58d2273e, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x2930b436, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xe6f2865e, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa1c8b707, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xd66c809d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf23cb0ab, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x97297182, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x603e4190, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x814284c9, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x5ce7b80a, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v05ACp1290d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp1292d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp1294d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp1297d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp129Ad*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A2d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A6d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12ABd*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp129Cd*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A0d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A8d*dc*dsc*dp*icFFiscFDip01in*");
