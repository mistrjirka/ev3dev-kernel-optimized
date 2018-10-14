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
	{ 0xcaf6a0d2, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xbf6ce96e, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x4c7167a0, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x5f522572, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x727a87f4, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x4d7adce8, __VMLINUX_SYMBOL_STR(usbnet_device_suggests_idle) },
	{ 0x1ba02b3c, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x91578019, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x814284c9, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xe019838, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xcb8d41cc, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x6fef09b6, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x78e3802a, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xe8140b03, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xe332e020, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x19623e0, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xaea86cc3, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x590ba4fa, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");
