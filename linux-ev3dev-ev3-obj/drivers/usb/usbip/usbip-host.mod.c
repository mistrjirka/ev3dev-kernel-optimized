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
	{ 0x205e3c9, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x281e7747, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdaa668f9, __VMLINUX_SYMBOL_STR(usbip_event_happened) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd02753dc, __VMLINUX_SYMBOL_STR(usbip_header_correct_endian) },
	{ 0xe00d6250, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xaabab281, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x68910c3a, __VMLINUX_SYMBOL_STR(usb_set_configuration) },
	{ 0x644afa9d, __VMLINUX_SYMBOL_STR(usbip_alloc_iso_desc_pdu) },
	{ 0x97297182, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x8a935739, __VMLINUX_SYMBOL_STR(usb_hub_claim_port) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x39761d2c, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x3c77a4e7, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8e8a96b2, __VMLINUX_SYMBOL_STR(usbip_event_add) },
	{ 0xddece99e, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe1ea0586, __VMLINUX_SYMBOL_STR(usbip_dump_header) },
	{ 0x7e261d64, __VMLINUX_SYMBOL_STR(usbip_in_eh) },
	{ 0x292986a4, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x42774dfc, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x9484a9e7, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe35391ba, __VMLINUX_SYMBOL_STR(usb_register_device_driver) },
	{ 0xffd63492, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb955faa6, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0xcec56073, __VMLINUX_SYMBOL_STR(device_attach) },
	{ 0x8fa63ed8, __VMLINUX_SYMBOL_STR(usbip_stop_eh) },
	{ 0x323197ec, __VMLINUX_SYMBOL_STR(dev_attr_usbip_debug) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xc3f37633, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x83a5e779, __VMLINUX_SYMBOL_STR(usbip_recv_iso) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x58a4784a, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xd66c809d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe019838, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x96c0f1cb, __VMLINUX_SYMBOL_STR(usbip_dump_urb) },
	{ 0x57b234c5, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x3d9d6b61, __VMLINUX_SYMBOL_STR(driver_create_file) },
	{ 0x7fcb6dd3, __VMLINUX_SYMBOL_STR(usbip_recv) },
	{ 0x9f3f6e7e, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xf4b54b9f, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa6060c22, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x511b6a49, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xb7352922, __VMLINUX_SYMBOL_STR(usb_deregister_device_driver) },
	{ 0x7f93e715, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x413c0466, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x93f6bff1, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbe4ecea0, __VMLINUX_SYMBOL_STR(usbip_recv_xbuff) },
	{ 0xe14d937e, __VMLINUX_SYMBOL_STR(usb_hub_release_port) },
	{ 0x8bb5147a, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x78b72f44, __VMLINUX_SYMBOL_STR(usbip_debug_flag) },
	{ 0x963e0acd, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x7fb0c8bc, __VMLINUX_SYMBOL_STR(driver_remove_file) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x640377fc, __VMLINUX_SYMBOL_STR(usbip_start_eh) },
	{ 0x814284c9, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xa98ac2d1, __VMLINUX_SYMBOL_STR(usbip_pack_pdu) },
	{ 0xcb8d41cc, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbip-core";

