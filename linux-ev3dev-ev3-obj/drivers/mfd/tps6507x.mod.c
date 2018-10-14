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
	{ 0xe272b567, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x6d343d30, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x58813c19, __VMLINUX_SYMBOL_STR(devm_mfd_add_devices) },
	{ 0xf11fb052, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xfb6c3651, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x2481dd50, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mfd-core";

MODULE_ALIAS("of:N*T*Cti,tps6507x");
MODULE_ALIAS("of:N*T*Cti,tps6507xC*");
MODULE_ALIAS("i2c:tps6507x");
