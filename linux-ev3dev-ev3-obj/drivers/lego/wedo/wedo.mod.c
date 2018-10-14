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
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa2e5a2b7, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xdc4baa33, __VMLINUX_SYMBOL_STR(of_led_classdev_register) },
	{ 0x3b79cc35, __VMLINUX_SYMBOL_STR(lego_port_register) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xcaf6a0d2, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x5937f60d, __VMLINUX_SYMBOL_STR(unregister_lego_sensor) },
	{ 0x6d56aa84, __VMLINUX_SYMBOL_STR(lego_port_unregister) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x5ce7b80a, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xd66c809d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe019838, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x57b234c5, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xf4b54b9f, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xc82bf543, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x466804c7, __VMLINUX_SYMBOL_STR(register_servo_motor) },
	{ 0xcaa7e103, __VMLINUX_SYMBOL_STR(unregister_dc_motor) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbf6ce96e, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xc1f096bb, __VMLINUX_SYMBOL_STR(unregister_servo_motor) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb7cdfe69, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x81a6abe9, __VMLINUX_SYMBOL_STR(register_lego_sensor) },
	{ 0x814284c9, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xcb8d41cc, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x6dad86a8, __VMLINUX_SYMBOL_STR(register_dc_motor) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=servo_motor_class";

MODULE_ALIAS("usb:v0694p0003d*dc*dsc*dp*ic*isc*ip*in*");
