#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5a60589a, __VMLINUX_SYMBOL_STR(platform_device_add_properties) },
	{ 0x14a9ac37, __VMLINUX_SYMBOL_STR(bus_find_device_by_name) },
	{ 0x9accf94a, __VMLINUX_SYMBOL_STR(platform_bus_type) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xe93e49c3, __VMLINUX_SYMBOL_STR(devres_free) },
	{ 0x37debe4b, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0xbfda9164, __VMLINUX_SYMBOL_STR(irq_create_mapping) },
	{ 0x47fcccb0, __VMLINUX_SYMBOL_STR(regulator_bulk_register_supply_alias) },
	{ 0x9d50eab, __VMLINUX_SYMBOL_STR(devres_alloc_node) },
	{ 0xac6dac51, __VMLINUX_SYMBOL_STR(pm_runtime_no_callbacks) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7b75571f, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x68509551, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf9bcd98f, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x7f76dc7a, __VMLINUX_SYMBOL_STR(platform_device_add_resources) },
	{ 0x90959d1d, __VMLINUX_SYMBOL_STR(device_for_each_child_reverse) },
	{ 0xc0ee317f, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x445ba000, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0xdae11f73, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0x93adb72c, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xef1bb76d, __VMLINUX_SYMBOL_STR(regulator_bulk_unregister_supply_alias) },
	{ 0xf09a5115, __VMLINUX_SYMBOL_STR(platform_device_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

