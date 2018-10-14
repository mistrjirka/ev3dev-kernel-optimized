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
	{ 0xb42a92d, __VMLINUX_SYMBOL_STR(of_property_read_string_helper) },
	{ 0x8771ebba, __VMLINUX_SYMBOL_STR(devm_pwm_get) },
	{ 0x6b018078, __VMLINUX_SYMBOL_STR(of_count_phandle_with_args) },
	{ 0xe5c6a291, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0x7a2478f0, __VMLINUX_SYMBOL_STR(pwm_apply_state) },
	{ 0xfedaa808, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0x4fac8340, __VMLINUX_SYMBOL_STR(devm_gpiod_get_array) },
	{ 0x97a283fc, __VMLINUX_SYMBOL_STR(i2c_put_adapter) },
	{ 0xe8792afc, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x67d97da9, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0x9d50eab, __VMLINUX_SYMBOL_STR(devres_alloc_node) },
	{ 0x1f2e5b75, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x65f3b873, __VMLINUX_SYMBOL_STR(devm_gpiod_get_array_optional) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7b75571f, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xe53b817c, __VMLINUX_SYMBOL_STR(of_property_count_elems_of_size) },
	{ 0x68509551, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0xf9bcd98f, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xd66c809d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x93adb72c, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0xbcd14db0, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xf06e5a8c, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0xdf4d19ae, __VMLINUX_SYMBOL_STR(devm_pinctrl_put) },
	{ 0xe24ce5f9, __VMLINUX_SYMBOL_STR(of_parse_phandle_with_args) },
	{ 0x1ec6879a, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x987e3e47, __VMLINUX_SYMBOL_STR(of_find_device_by_node) },
	{ 0x89ba17b8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x42ed809d, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x10971e0c, __VMLINUX_SYMBOL_STR(i2c_get_adapter) },
	{ 0xf11fb052, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf09a5115, __VMLINUX_SYMBOL_STR(platform_device_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cev3dev,lms2012-compat");
MODULE_ALIAS("of:N*T*Cev3dev,lms2012-compatC*");
