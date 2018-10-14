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
	{ 0x4dbd0442, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe272b567, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x6d343d30, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x58a4784a, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x34f97bbf, __VMLINUX_SYMBOL_STR(hwmon_device_register) },
	{ 0x769a0099, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x201a4b32, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf11fb052, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x50fc41b8, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbfb390a1, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte) },
	{ 0x31f1a088, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7cbb9a15, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xaa9bb741, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("i2c:pcf8591");
