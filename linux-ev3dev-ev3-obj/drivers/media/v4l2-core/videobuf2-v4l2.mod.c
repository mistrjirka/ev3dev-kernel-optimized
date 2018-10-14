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
	{ 0x1a270ac1, __VMLINUX_SYMBOL_STR(vb2_core_streamoff) },
	{ 0x4dbd0442, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x41da040c, __VMLINUX_SYMBOL_STR(vb2_core_dqbuf) },
	{ 0x930f1c22, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x58e6f5e6, __VMLINUX_SYMBOL_STR(vb2_core_qbuf) },
	{ 0xa6d52c9b, __VMLINUX_SYMBOL_STR(vb2_core_querybuf) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbb63e1af, __VMLINUX_SYMBOL_STR(vb2_core_streamon) },
	{ 0x28b66f01, __VMLINUX_SYMBOL_STR(vb2_core_poll) },
	{ 0x6241904b, __VMLINUX_SYMBOL_STR(vb2_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9bb022c0, __VMLINUX_SYMBOL_STR(vb2_core_prepare_buf) },
	{ 0x116a8a5c, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x94fbaff4, __VMLINUX_SYMBOL_STR(v4l2_event_pending) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe7a118b7, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x85e3705d, __VMLINUX_SYMBOL_STR(vb2_core_queue_release) },
	{ 0x5b1eb5db, __VMLINUX_SYMBOL_STR(vb2_write) },
	{ 0x4089fee7, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x41d0e75c, __VMLINUX_SYMBOL_STR(vb2_core_create_bufs) },
	{ 0x65243fea, __VMLINUX_SYMBOL_STR(vb2_core_expbuf) },
	{ 0x166f719e, __VMLINUX_SYMBOL_STR(vb2_core_reqbufs) },
	{ 0xa367c504, __VMLINUX_SYMBOL_STR(vb2_verify_memory_type) },
	{ 0x3e93d05b, __VMLINUX_SYMBOL_STR(vb2_core_queue_init) },
	{ 0xd8277147, __VMLINUX_SYMBOL_STR(vb2_buffer_in_use) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,videodev";

