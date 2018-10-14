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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd41e2618, __VMLINUX_SYMBOL_STR(put_pid) },
	{ 0xe0a1361b, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xa55e02cd, __VMLINUX_SYMBOL_STR(snd_register_device) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x4dbd0442, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x151f4898, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0xd3358cb, __VMLINUX_SYMBOL_STR(pid_vnr) },
	{ 0x81742e39, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xf9dae50a, __VMLINUX_SYMBOL_STR(snd_device_initialize) },
	{ 0xeb95de37, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6339b6d0, __VMLINUX_SYMBOL_STR(snd_seq_device_load_drivers) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x7113e034, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa4ab0b2c, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x5dc627a6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xddece99e, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xaad8c7d6, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x91def1c, __VMLINUX_SYMBOL_STR(snd_seq_autoload_exit) },
	{ 0x116a8a5c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x201a4b32, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb6feb8cb, __VMLINUX_SYMBOL_STR(snd_unregister_device) },
	{ 0x3971b4df, __VMLINUX_SYMBOL_STR(snd_ecards_limit) },
	{ 0x3a1ac054, __VMLINUX_SYMBOL_STR(set_normalized_timespec64) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x59f8ae3, __VMLINUX_SYMBOL_STR(snd_timer_pause) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb3fd04b2, __VMLINUX_SYMBOL_STR(snd_timer_resolution) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xe7372bf2, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x525a83d2, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x5bf493d, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xa3ff6364, __VMLINUX_SYMBOL_STR(snd_timer_start) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc0ee317f, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x491b8421, __VMLINUX_SYMBOL_STR(snd_timer_open) },
	{ 0xc2c5b2b6, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x413c0466, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x3fb2b1cc, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc7e32f1a, __VMLINUX_SYMBOL_STR(snd_timer_close) },
	{ 0xe1f977b, __VMLINUX_SYMBOL_STR(snd_seq_root) },
	{ 0xb9c81b76, __VMLINUX_SYMBOL_STR(snd_info_free_entry) },
	{ 0xcb7d1706, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x4a3ea5c0, __VMLINUX_SYMBOL_STR(snd_request_card) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xa96ca86c, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x5e515be6, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x370a0736, __VMLINUX_SYMBOL_STR(snd_seq_autoload_init) },
	{ 0x23a8300d, __VMLINUX_SYMBOL_STR(snd_info_create_module_entry) },
	{ 0xd2501231, __VMLINUX_SYMBOL_STR(snd_info_register) },
	{ 0x4063803a, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x1d80632a, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-seq-device";

