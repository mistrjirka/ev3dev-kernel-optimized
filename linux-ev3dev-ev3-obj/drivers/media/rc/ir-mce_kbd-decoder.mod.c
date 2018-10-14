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
	{ 0xfebf8200, __VMLINUX_SYMBOL_STR(ir_raw_handler_unregister) },
	{ 0xaa5dd955, __VMLINUX_SYMBOL_STR(ir_raw_handler_register) },
	{ 0xda02d67, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa38caae0, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0x21d42f5b, __VMLINUX_SYMBOL_STR(ir_raw_gen_manchester) },
	{ 0x553efb91, __VMLINUX_SYMBOL_STR(rc_core_debug) },
	{ 0x116d54fc, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb4eb84e, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x6d3cb18e, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6a211df2, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x2e1467cd, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x5c2e3421, __VMLINUX_SYMBOL_STR(del_timer) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

