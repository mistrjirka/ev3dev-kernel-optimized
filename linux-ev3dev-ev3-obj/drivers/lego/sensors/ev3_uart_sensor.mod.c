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
	{ 0x64d1e5bc, __VMLINUX_SYMBOL_STR(ms_ev3_smux_port_type) },
	{ 0xf2db4d93, __VMLINUX_SYMBOL_STR(lego_sensor_data_size) },
	{ 0x5937f60d, __VMLINUX_SYMBOL_STR(unregister_lego_sensor) },
	{ 0x3b385dc, __VMLINUX_SYMBOL_STR(lego_device_driver_unregister) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x1c8fec26, __VMLINUX_SYMBOL_STR(lego_device_driver_register) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x81a6abe9, __VMLINUX_SYMBOL_STR(register_lego_sensor) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nxt_i2c_sensor";

