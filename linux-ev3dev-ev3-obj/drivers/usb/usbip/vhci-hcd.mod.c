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
	{ 0xdaa668f9, __VMLINUX_SYMBOL_STR(usbip_event_happened) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb533baa8, __VMLINUX_SYMBOL_STR(usb_create_shared_hcd) },
	{ 0xd02753dc, __VMLINUX_SYMBOL_STR(usbip_header_correct_endian) },
	{ 0xe00d6250, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xaabab281, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xdc688e97, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x7260d02, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0xbd9d7988, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0x8f1244a3, __VMLINUX_SYMBOL_STR(usb_hcd_poll_rh_status) },
	{ 0x644afa9d, __VMLINUX_SYMBOL_STR(usbip_alloc_iso_desc_pdu) },
	{ 0xd7071212, __VMLINUX_SYMBOL_STR(usb_hcd_giveback_urb) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7cbb9a15, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x3c77a4e7, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x1f2e5b75, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xda02d67, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9e46df, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0x8e8a96b2, __VMLINUX_SYMBOL_STR(usbip_event_add) },
	{ 0xddece99e, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x779ca432, __VMLINUX_SYMBOL_STR(usb_hcd_is_primary_hcd) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe1ea0586, __VMLINUX_SYMBOL_STR(usbip_dump_header) },
	{ 0x77ae495d, __VMLINUX_SYMBOL_STR(usb_speed_string) },
	{ 0x618b40ff, __VMLINUX_SYMBOL_STR(usb_hcd_link_urb_to_ep) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x42774dfc, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x769a0099, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0x63e9c5f, __VMLINUX_SYMBOL_STR(platform_device_del) },
	{ 0x7b75571f, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x68509551, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0xb955faa6, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x8fa63ed8, __VMLINUX_SYMBOL_STR(usbip_stop_eh) },
	{ 0x323197ec, __VMLINUX_SYMBOL_STR(dev_attr_usbip_debug) },
	{ 0xf9bcd98f, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0xb61d7a80, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xc3f37633, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x83a5e779, __VMLINUX_SYMBOL_STR(usbip_recv_iso) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x7f00ef0d, __VMLINUX_SYMBOL_STR(usbip_pad_iso) },
	{ 0xef923975, __VMLINUX_SYMBOL_STR(usb_hcd_check_unlink_urb) },
	{ 0xd66c809d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x96c0f1cb, __VMLINUX_SYMBOL_STR(usbip_dump_urb) },
	{ 0x57b234c5, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x7fcb6dd3, __VMLINUX_SYMBOL_STR(usbip_recv) },
	{ 0xf4b54b9f, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x65fd066a, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x511b6a49, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x5b80ad1e, __VMLINUX_SYMBOL_STR(platform_bus) },
	{ 0xdae11f73, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0x413c0466, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x93f6bff1, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbe4ecea0, __VMLINUX_SYMBOL_STR(usbip_recv_xbuff) },
	{ 0x8bb5147a, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x78b72f44, __VMLINUX_SYMBOL_STR(usbip_debug_flag) },
	{ 0x963e0acd, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x89ba17b8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xa93f046a, __VMLINUX_SYMBOL_STR(usb_hcd_unlink_urb_from_ep) },
	{ 0xe1be181, __VMLINUX_SYMBOL_STR(usb_hcd_resume_root_hub) },
	{ 0x640377fc, __VMLINUX_SYMBOL_STR(usbip_start_eh) },
	{ 0xa98ac2d1, __VMLINUX_SYMBOL_STR(usbip_pack_pdu) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xf09a5115, __VMLINUX_SYMBOL_STR(platform_device_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbip-core";

