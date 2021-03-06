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
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd41e2618, __VMLINUX_SYMBOL_STR(put_pid) },
	{ 0xa55e02cd, __VMLINUX_SYMBOL_STR(snd_register_device) },
	{ 0x6ce83b8, __VMLINUX_SYMBOL_STR(snd_device_register) },
	{ 0x8152fcfb, __VMLINUX_SYMBOL_STR(snd_card_file_remove) },
	{ 0xd3358cb, __VMLINUX_SYMBOL_STR(pid_vnr) },
	{ 0x81742e39, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xf9dae50a, __VMLINUX_SYMBOL_STR(snd_device_initialize) },
	{ 0xeb95de37, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xaf3e40b, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb2e5ae4a, __VMLINUX_SYMBOL_STR(snd_lookup_minor_data) },
	{ 0x7113e034, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa4ab0b2c, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x83f59a15, __VMLINUX_SYMBOL_STR(snd_ctl_unregister_ioctl) },
	{ 0xddece99e, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xaad8c7d6, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xec5ff6a9, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x201a4b32, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xb6feb8cb, __VMLINUX_SYMBOL_STR(snd_unregister_device) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f595b11, __VMLINUX_SYMBOL_STR(snd_major) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x5bf493d, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x436ad49b, __VMLINUX_SYMBOL_STR(snd_card_file_add) },
	{ 0x611c4232, __VMLINUX_SYMBOL_STR(snd_ctl_register_ioctl) },
	{ 0xc0ee317f, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x413c0466, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x93f6bff1, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x3fb2b1cc, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb9c81b76, __VMLINUX_SYMBOL_STR(snd_info_free_entry) },
	{ 0x963e0acd, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1ec6879a, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8319083, __VMLINUX_SYMBOL_STR(snd_ctl_get_preferred_subdevice) },
	{ 0xfbd30a43, __VMLINUX_SYMBOL_STR(snd_seq_device_new) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xa96ca86c, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xd2501231, __VMLINUX_SYMBOL_STR(snd_info_register) },
	{ 0x1d80632a, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-seq-device";

