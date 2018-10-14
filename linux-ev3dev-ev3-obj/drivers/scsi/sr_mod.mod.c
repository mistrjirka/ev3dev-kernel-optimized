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
	{ 0xc5039eec, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf2527835, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xda98c0cc, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x4dbd0442, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xbc30e08f, __VMLINUX_SYMBOL_STR(cdrom_number_of_slots) },
	{ 0xfe90c4a6, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x3709c1af, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0x97673164, __VMLINUX_SYMBOL_STR(unregister_cdrom) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xe50f9343, __VMLINUX_SYMBOL_STR(blk_dump_rq_flags) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x8d1a8e6f, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x964f9a96, __VMLINUX_SYMBOL_STR(cdrom_open) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf05643f4, __VMLINUX_SYMBOL_STR(scsi_execute) },
	{ 0xee0e7009, __VMLINUX_SYMBOL_STR(scsi_autopm_get_device) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x88383725, __VMLINUX_SYMBOL_STR(check_disk_change) },
	{ 0x900813ab, __VMLINUX_SYMBOL_STR(cdrom_release) },
	{ 0xa5c772e1, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xa7152cae, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xa549678f, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9f921ffd, __VMLINUX_SYMBOL_STR(cdrom_get_media_event) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x14bcf701, __VMLINUX_SYMBOL_STR(cdrom_check_events) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x1d63f2f6, __VMLINUX_SYMBOL_STR(cdrom_get_last_written) },
	{ 0x4af94422, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbcc78feb, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0x7e816536, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xfc5ce1ec, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x64824f86, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0xbe300910, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0xd182b1cf, __VMLINUX_SYMBOL_STR(scsi_init_io) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4dd85c31, __VMLINUX_SYMBOL_STR(cdrom_ioctl) },
	{ 0xd9a74819, __VMLINUX_SYMBOL_STR(blk_pm_runtime_init) },
	{ 0xae30bea0, __VMLINUX_SYMBOL_STR(register_cdrom) },
	{ 0xd2ea7910, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0xbf2aca40, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xd340278e, __VMLINUX_SYMBOL_STR(scsi_autopm_put_device) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xc2f1969a, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xc5acae83, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";

