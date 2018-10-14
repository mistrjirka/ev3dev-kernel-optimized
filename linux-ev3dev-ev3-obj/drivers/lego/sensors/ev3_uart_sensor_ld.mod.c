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
	{ 0xa120d33c, __VMLINUX_SYMBOL_STR(tty_unregister_ldisc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c401e73, __VMLINUX_SYMBOL_STR(tty_register_ldisc) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x1a8975a4, __VMLINUX_SYMBOL_STR(ev3_uart_sensor_defs) },
	{ 0x8fe5a68f, __VMLINUX_SYMBOL_STR(lego_sensor_ftoi) },
	{ 0xa2e5a2b7, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x81a6abe9, __VMLINUX_SYMBOL_STR(register_lego_sensor) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8dbcb01e, __VMLINUX_SYMBOL_STR(tty_put_char) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5c0b44ea, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0xe01b8237, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0xb44b03fd, __VMLINUX_SYMBOL_STR(tty_wait_until_sent) },
	{ 0x5054c285, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xb6a68816, __VMLINUX_SYMBOL_STR(find_last_bit) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x714eef32, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0x498b8afb, __VMLINUX_SYMBOL_STR(lego_port_class) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x468db175, __VMLINUX_SYMBOL_STR(tty_driver_flush_buffer) },
	{ 0xe7372bf2, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x525a83d2, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xddece99e, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8be5575, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x6805be22, __VMLINUX_SYMBOL_STR(class_find_device) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc0ee317f, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x5937f60d, __VMLINUX_SYMBOL_STR(unregister_lego_sensor) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x472035d, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xbb2242fc, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xd649b388, __VMLINUX_SYMBOL_STR(completion_done) },
	{ 0x4f288f34, __VMLINUX_SYMBOL_STR(tty_mode_ioctl) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ev3_uart_sensor";

