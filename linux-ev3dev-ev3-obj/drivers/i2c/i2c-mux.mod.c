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
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5fa079be, __VMLINUX_SYMBOL_STR(rt_mutex_lock) },
	{ 0xfb6c3651, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xe4c66e6c, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xca95283c, __VMLINUX_SYMBOL_STR(rt_mutex_trylock) },
	{ 0xbe597134, __VMLINUX_SYMBOL_STR(rt_mutex_unlock) },
	{ 0xb61d7a80, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x9ef1d2a, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0x7cbba4cb, __VMLINUX_SYMBOL_STR(i2c_adapter_type) },
	{ 0x6c618bd9, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x8029db35, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xd66c809d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf1756af5, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0x2af32192, __VMLINUX_SYMBOL_STR(i2c_add_numbered_adapter) },
	{ 0x445ba000, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5f44c5ee, __VMLINUX_SYMBOL_STR(__i2c_transfer) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x42ed809d, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0xf11fb052, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

