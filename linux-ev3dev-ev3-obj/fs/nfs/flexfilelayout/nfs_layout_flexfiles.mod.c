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
	{ 0x15c1634a, __VMLINUX_SYMBOL_STR(pnfs_unregister_layoutdriver) },
	{ 0x90d71aa5, __VMLINUX_SYMBOL_STR(nfs4_schedule_session_recovery) },
	{ 0x5827980f, __VMLINUX_SYMBOL_STR(pnfs_nfs_generic_sync) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf3767d06, __VMLINUX_SYMBOL_STR(xdr_init_encode) },
	{ 0xe3e84c0, __VMLINUX_SYMBOL_STR(nfs4_pnfs_ds_connect) },
	{ 0x161bd4b5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xd14f5010, __VMLINUX_SYMBOL_STR(pnfs_generic_clear_request_commit) },
	{ 0xf691d12e, __VMLINUX_SYMBOL_STR(nfs4_setup_sequence) },
	{ 0xdef21436, __VMLINUX_SYMBOL_STR(nfs_init_cinfo) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x872246a9, __VMLINUX_SYMBOL_STR(nfs_initiate_commit) },
	{ 0xd000e024, __VMLINUX_SYMBOL_STR(pnfs_error_mark_layout_for_return) },
	{ 0x4f2eaa51, __VMLINUX_SYMBOL_STR(nfs4_pnfs_ds_put) },
	{ 0x8b588871, __VMLINUX_SYMBOL_STR(put_rpccred) },
	{ 0x54bef45, __VMLINUX_SYMBOL_STR(layoutstats_timer) },
	{ 0xc8638035, __VMLINUX_SYMBOL_STR(nfs4_delete_deviceid) },
	{ 0x7adeb8d4, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x643d9ba1, __VMLINUX_SYMBOL_STR(groups_free) },
	{ 0x6a24480b, __VMLINUX_SYMBOL_STR(nfs4_decode_mp_ds_addr) },
	{ 0xfebbe0c, __VMLINUX_SYMBOL_STR(nfs_initiate_pgio) },
	{ 0x7f0b7fd7, __VMLINUX_SYMBOL_STR(nfs4_set_rw_stateid) },
	{ 0xcebb3880, __VMLINUX_SYMBOL_STR(pnfs_generic_commit_pagelist) },
	{ 0x24504674, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xc2184d17, __VMLINUX_SYMBOL_STR(pnfs_generic_recover_commit_reqs) },
	{ 0xee1f9582, __VMLINUX_SYMBOL_STR(nfs4_sequence_done) },
	{ 0xe89af961, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0x11294180, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0x18af4c3d, __VMLINUX_SYMBOL_STR(pnfs_update_layout) },
	{ 0xe87f15e9, __VMLINUX_SYMBOL_STR(rpc_exit) },
	{ 0x4a5bb216, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_cleanup) },
	{ 0x21f9d083, __VMLINUX_SYMBOL_STR(pnfs_generic_write_commit_done) },
	{ 0x9409dc7f, __VMLINUX_SYMBOL_STR(rpc_delay) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x45265f10, __VMLINUX_SYMBOL_STR(pnfs_generic_layout_insert_lseg) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x33977c52, __VMLINUX_SYMBOL_STR(xdr_init_decode_pages) },
	{ 0xbac3cbf2, __VMLINUX_SYMBOL_STR(ns_to_timespec64) },
	{ 0x4dacf3d9, __VMLINUX_SYMBOL_STR(rpc_call_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xc2216cf6, __VMLINUX_SYMBOL_STR(pnfs_read_resend_pnfs) },
	{ 0x6fcd7821, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0x54bb28ed, __VMLINUX_SYMBOL_STR(nfs4_find_or_create_ds_client) },
	{ 0x14363771, __VMLINUX_SYMBOL_STR(rpc_max_payload) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x458a4aef, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_write_mds) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xbdfc95c7, __VMLINUX_SYMBOL_STR(pnfs_layout_mark_request_commit) },
	{ 0xa753fc1d, __VMLINUX_SYMBOL_STR(pnfs_destroy_layout) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x4ed5fa12, __VMLINUX_SYMBOL_STR(nfs4_pnfs_ds_add) },
	{ 0x297622e9, __VMLINUX_SYMBOL_STR(pnfs_layoutcommit_inode) },
	{ 0x45641916, __VMLINUX_SYMBOL_STR(pnfs_put_lseg) },
	{ 0x5a505809, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0xa807ba4a, __VMLINUX_SYMBOL_STR(pnfs_set_layoutcommit) },
	{ 0x565272b3, __VMLINUX_SYMBOL_STR(pnfs_generic_scan_commit_lists) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x69d3558d, __VMLINUX_SYMBOL_STR(pnfs_generic_rw_release) },
	{ 0x22423951, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x65fd066a, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x5ccd7696, __VMLINUX_SYMBOL_STR(nfs4_test_deviceid_unavailable) },
	{ 0xa02df320, __VMLINUX_SYMBOL_STR(nfs_map_string_to_numeric) },
	{ 0xf999267e, __VMLINUX_SYMBOL_STR(pnfs_generic_commit_release) },
	{ 0x4787d4e1, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0xac24c865, __VMLINUX_SYMBOL_STR(pnfs_read_done_resend_to_mds) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x69583415, __VMLINUX_SYMBOL_STR(rpc_restart_call_prepare) },
	{ 0x3e2b0ba6, __VMLINUX_SYMBOL_STR(groups_alloc) },
	{ 0x426a77ed, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0xfcc4e20a, __VMLINUX_SYMBOL_STR(pnfs_generic_prepare_to_resend_writes) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4a2a1b4d, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_check_layout) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf1ea6f1c, __VMLINUX_SYMBOL_STR(__bswapsi2) },
	{ 0x5bfc48ec, __VMLINUX_SYMBOL_STR(pnfs_write_done_resend_to_mds) },
	{ 0x26871eef, __VMLINUX_SYMBOL_STR(rpc_wake_up) },
	{ 0xfe03799, __VMLINUX_SYMBOL_STR(rpc_count_iostats_metrics) },
	{ 0xd3dbcc72, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xaf7833a0, __VMLINUX_SYMBOL_STR(rpc_lookup_generic_cred) },
	{ 0xc14d2e5d, __VMLINUX_SYMBOL_STR(xdr_write_pages) },
	{ 0x8650d1fe, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_read_mds) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xb8adb65, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0x8652ae31, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x2ab3d008, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0xd44d9e8b, __VMLINUX_SYMBOL_STR(nfs_writeback_update_inode) },
	{ 0xfd20e32c, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x49edeb02, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,sunrpc,nfs";

