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
	{ 0xa3be6315, __VMLINUX_SYMBOL_STR(usb_function_deactivate) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8a724cbb, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcb411537, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig_ss) },
	{ 0xa3b4eed8, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0xc19bae13, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0xd4fdc550, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x88a577ab, __VMLINUX_SYMBOL_STR(usb_ep_disable) },
	{ 0xb9a38379, __VMLINUX_SYMBOL_STR(usb_ep_enable) },
	{ 0xe580add, __VMLINUX_SYMBOL_STR(v4l2_event_queue) },
	{ 0x930f1c22, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x92215052, __VMLINUX_SYMBOL_STR(usb_ep_queue) },
	{ 0x3c1ee614, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x7adeb8d4, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x61c116fc, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xfacec79f, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x7b630be2, __VMLINUX_SYMBOL_STR(config_item_init_type_name) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf749fec9, __VMLINUX_SYMBOL_STR(usb_ep_set_halt) },
	{ 0x5063ff0f, __VMLINUX_SYMBOL_STR(usb_ep_alloc_request) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9343cf48, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0x5341b6b6, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xae204188, __VMLINUX_SYMBOL_STR(usb_function_activate) },
	{ 0x6e2df3f5, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x93bb3849, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x7cbc57d0, __VMLINUX_SYMBOL_STR(v4l2_event_subscribe) },
	{ 0x201a4b32, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9f6db6c4, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x3ab51d1b, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x4f23862e, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0xb4088557, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x79fa2ccf, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x20941d1e, __VMLINUX_SYMBOL_STR(vb2_qbuf) },
	{ 0x64b449b7, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x53366908, __VMLINUX_SYMBOL_STR(vb2_querybuf) },
	{ 0x833e7367, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0xa342df14, __VMLINUX_SYMBOL_STR(usb_composite_setup_continue) },
	{ 0x41df1ae6, __VMLINUX_SYMBOL_STR(usb_ep_dequeue) },
	{ 0xd66c809d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x573ac19a, __VMLINUX_SYMBOL_STR(vb2_streamon) },
	{ 0x4089fee7, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0x734bf2d, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0xaa4a7797, __VMLINUX_SYMBOL_STR(hex2bin) },
	{ 0x91d362b7, __VMLINUX_SYMBOL_STR(vb2_reqbufs) },
	{ 0xe4709b37, __VMLINUX_SYMBOL_STR(usb_ep_free_request) },
	{ 0x780acbaa, __VMLINUX_SYMBOL_STR(vb2_dqbuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc68ddb50, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xcd2af182, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0x27831414, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0x217f897b, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0x785ad6cb, __VMLINUX_SYMBOL_STR(vb2_poll) },
	{ 0xefcbc1ff, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0x8d8413cd, __VMLINUX_SYMBOL_STR(config_group_find_item) },
	{ 0x3ee99f34, __VMLINUX_SYMBOL_STR(vb2_streamoff) },
	{ 0xd895887e, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xd1c64df2, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
	{ 0x1ffc2b61, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,videodev,videobuf2-core,videobuf2-v4l2,videobuf2-vmalloc";

