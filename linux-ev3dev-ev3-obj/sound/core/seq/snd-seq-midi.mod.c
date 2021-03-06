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
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7ddf2a2e, __VMLINUX_SYMBOL_STR(snd_midi_event_reset_decode) },
	{ 0x85c27c7a, __VMLINUX_SYMBOL_STR(snd_midi_event_reset_encode) },
	{ 0x4dbd0442, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1a724fcc, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_ctl) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x73c783a8, __VMLINUX_SYMBOL_STR(snd_rawmidi_kernel_release) },
	{ 0xad8829c1, __VMLINUX_SYMBOL_STR(snd_seq_create_kernel_client) },
	{ 0xc36e0b12, __VMLINUX_SYMBOL_STR(snd_rawmidi_kernel_open) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7ab3ab98, __VMLINUX_SYMBOL_STR(snd_midi_event_decode) },
	{ 0x5902f413, __VMLINUX_SYMBOL_STR(snd_rawmidi_input_params) },
	{ 0xf1b6a729, __VMLINUX_SYMBOL_STR(__snd_seq_driver_register) },
	{ 0x85e4ac82, __VMLINUX_SYMBOL_STR(snd_midi_event_new) },
	{ 0x7b8699eb, __VMLINUX_SYMBOL_STR(snd_seq_event_port_detach) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x602ea06e, __VMLINUX_SYMBOL_STR(snd_rawmidi_drain_output) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfcf964a7, __VMLINUX_SYMBOL_STR(snd_midi_event_free) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x12b3f866, __VMLINUX_SYMBOL_STR(snd_rawmidi_kernel_write) },
	{ 0xe85e3a66, __VMLINUX_SYMBOL_STR(snd_rawmidi_kernel_read) },
	{ 0xe934da1d, __VMLINUX_SYMBOL_STR(snd_seq_dump_var_event) },
	{ 0xd49e308d, __VMLINUX_SYMBOL_STR(snd_rawmidi_output_params) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdf2e317, __VMLINUX_SYMBOL_STR(snd_midi_event_encode) },
	{ 0x3fb4d161, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_dispatch) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6bb71038, __VMLINUX_SYMBOL_STR(snd_seq_delete_kernel_client) },
	{ 0x720f8504, __VMLINUX_SYMBOL_STR(snd_seq_driver_unregister) },
	{ 0x499c3645, __VMLINUX_SYMBOL_STR(snd_rawmidi_info_select) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-seq-midi-event,snd-seq,snd-rawmidi,snd-seq-device";

