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
	{ 0x41441291, __VMLINUX_SYMBOL_STR(get_phy_device) },
	{ 0x1830eaab, __VMLINUX_SYMBOL_STR(mdio_device_free) },
	{ 0xf53646de, __VMLINUX_SYMBOL_STR(phy_attach_direct) },
	{ 0x3238b060, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x315b5fae, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0x1678428c, __VMLINUX_SYMBOL_STR(of_irq_get) },
	{ 0x37debe4b, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0xf1882d92, __VMLINUX_SYMBOL_STR(of_get_phy_mode) },
	{ 0x561de660, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0xb7f13d8d, __VMLINUX_SYMBOL_STR(phy_device_register) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x84fe323d, __VMLINUX_SYMBOL_STR(phy_device_create) },
	{ 0x91966276, __VMLINUX_SYMBOL_STR(phy_device_free) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x164503b4, __VMLINUX_SYMBOL_STR(mdiobus_is_registered_device) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2a122c0a, __VMLINUX_SYMBOL_STR(of_device_is_available) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x85be090d, __VMLINUX_SYMBOL_STR(of_match_node) },
	{ 0xa62e005b, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xd606206f, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x697546a4, __VMLINUX_SYMBOL_STR(mdio_device_create) },
	{ 0x7bda26df, __VMLINUX_SYMBOL_STR(fixed_phy_register) },
	{ 0x35383a, __VMLINUX_SYMBOL_STR(bus_find_device) },
	{ 0x677a8a6a, __VMLINUX_SYMBOL_STR(of_prop_next_string) },
	{ 0x9ef1d2a, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0xfddb949b, __VMLINUX_SYMBOL_STR(mdio_device_register) },
	{ 0xd66c809d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x3cb2a8ce, __VMLINUX_SYMBOL_STR(phy_connect_direct) },
	{ 0xc0ee317f, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xedab29f, __VMLINUX_SYMBOL_STR(fixed_phy_unregister) },
	{ 0xd52fa74d, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x31b188ff, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x4b4f9d53, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0xc48389c8, __VMLINUX_SYMBOL_STR(mdio_bus_type) },
	{ 0x42ed809d, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy,fixed_phy";

