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
	{ 0x9ecd76dd, __VMLINUX_SYMBOL_STR(iio_read_const_attr) },
	{ 0xe272b567, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x6d343d30, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xdf3df5d1, __VMLINUX_SYMBOL_STR(iio_device_release_direct_mode) },
	{ 0x276e8620, __VMLINUX_SYMBOL_STR(iio_device_claim_direct_mode) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x8743a903, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0x11d34b33, __VMLINUX_SYMBOL_STR(iio_trigger_notify_done) },
	{ 0xc33aee6d, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0x91053454, __VMLINUX_SYMBOL_STR(iio_get_time_ns) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xa8c0464b, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x3cc835a6, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0xd66c809d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x355d9ecf, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x9f89442c, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x50fc41b8, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x281c0263, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0x70fa611, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:tcs3472");
