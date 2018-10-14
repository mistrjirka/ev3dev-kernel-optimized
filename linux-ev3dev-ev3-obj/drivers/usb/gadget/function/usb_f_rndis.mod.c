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
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa3b4eed8, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0xc19bae13, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x88a577ab, __VMLINUX_SYMBOL_STR(usb_ep_disable) },
	{ 0xb9a38379, __VMLINUX_SYMBOL_STR(usb_ep_enable) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x3d5ffb95, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0x92215052, __VMLINUX_SYMBOL_STR(usb_ep_queue) },
	{ 0x2fe4ac24, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0xe6f2865e, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x2930b436, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xe332e020, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x76099a0d, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xa25554f3, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x5063ff0f, __VMLINUX_SYMBOL_STR(usb_ep_alloc_request) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x4efa3e7f, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0x9343cf48, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0x6fef09b6, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x410589c1, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0xb8b61ecf, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x574b5097, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0x755e33b3, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x93bb3849, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x201a4b32, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3ab51d1b, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xdfc0c78e, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xf23cb0ab, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x14a77286, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0xaea86cc3, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x62ff98b7, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0x64b449b7, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0xb8cb0b1a, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0x449e3c20, __VMLINUX_SYMBOL_STR(gether_get_host_addr_u8) },
	{ 0xe8140b03, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x833e7367, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0xa8b0670c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xd322a641, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xa21a16fb, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x734bf2d, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0xe4709b37, __VMLINUX_SYMBOL_STR(usb_ep_free_request) },
	{ 0x56f8aa8c, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2ff89b4d, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x27831414, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0x91578019, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xbe825cf5, __VMLINUX_SYMBOL_STR(usb_os_desc_prepare_interf_dir) },
	{ 0xb6593136, __VMLINUX_SYMBOL_STR(dev_get_stats) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether";

