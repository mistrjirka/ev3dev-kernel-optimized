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
	{ 0x41441291, __VMLINUX_SYMBOL_STR(get_phy_device) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x18e4f8aa, __VMLINUX_SYMBOL_STR(swphy_read_reg) },
	{ 0x315b5fae, __VMLINUX_SYMBOL_STR(__mdiobus_register) },
	{ 0x88daa597, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x403f9529, __VMLINUX_SYMBOL_STR(gpio_request_one) },
	{ 0x76099a0d, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xe8792afc, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x561de660, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0xb7f13d8d, __VMLINUX_SYMBOL_STR(phy_device_register) },
	{ 0x91966276, __VMLINUX_SYMBOL_STR(phy_device_free) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb901c39c, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0xdfc0c78e, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xf9bcd98f, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x76691446, __VMLINUX_SYMBOL_STR(phy_device_remove) },
	{ 0xbab05573, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value_cansleep) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe4e48b12, __VMLINUX_SYMBOL_STR(swphy_validate_state) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2027510c, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x91cf26a4, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy";

