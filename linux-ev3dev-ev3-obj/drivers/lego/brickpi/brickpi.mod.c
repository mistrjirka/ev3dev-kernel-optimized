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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x3d79f998, __VMLINUX_SYMBOL_STR(tm_pid_update) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xe44f67c2, __VMLINUX_SYMBOL_STR(tm_speed_init) },
	{ 0x714eef32, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0xe1334e6c, __VMLINUX_SYMBOL_STR(lego_device_register) },
	{ 0xe0e74e65, __VMLINUX_SYMBOL_STR(board_info_get_drvdata) },
	{ 0x472035d, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x7adeb8d4, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xe518b90b, __VMLINUX_SYMBOL_STR(serdev_device_close) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8663996a, __VMLINUX_SYMBOL_STR(serdev_device_write_buf) },
	{ 0xddece99e, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x5c0b44ea, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x3b79cc35, __VMLINUX_SYMBOL_STR(lego_port_register) },
	{ 0xfe05bd5a, __VMLINUX_SYMBOL_STR(lego_device_unregister) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe4d36fc8, __VMLINUX_SYMBOL_STR(__serdev_device_driver_register) },
	{ 0x201a4b32, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xbe87a67a, __VMLINUX_SYMBOL_STR(serdev_device_write_wakeup) },
	{ 0xa7152cae, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6d56aa84, __VMLINUX_SYMBOL_STR(lego_port_unregister) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x1a8975a4, __VMLINUX_SYMBOL_STR(ev3_uart_sensor_defs) },
	{ 0x62998790, __VMLINUX_SYMBOL_STR(tm_speed_update) },
	{ 0x895a24bb, __VMLINUX_SYMBOL_STR(board_info_unregister) },
	{ 0xa4b5bb3d, __VMLINUX_SYMBOL_STR(board_info_register) },
	{ 0x56b6bd3e, __VMLINUX_SYMBOL_STR(tm_pid_reinit) },
	{ 0x81e7adc7, __VMLINUX_SYMBOL_STR(serdev_device_open) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc8eb2bf8, __VMLINUX_SYMBOL_STR(serdev_device_set_flow_control) },
	{ 0x8be5575, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x1ec6879a, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xbb2242fc, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd6f32ebe, __VMLINUX_SYMBOL_STR(tm_pid_init) },
	{ 0xa4e6cdf9, __VMLINUX_SYMBOL_STR(serdev_device_set_baudrate) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xf11fb052, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5054c285, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ev3_uart_sensor";

MODULE_ALIAS("of:N*T*Cev3dev,brickpi");
MODULE_ALIAS("of:N*T*Cev3dev,brickpiC*");
