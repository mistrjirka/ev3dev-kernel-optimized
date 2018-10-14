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
	{ 0x205e3c9, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x7084ce15, __VMLINUX_SYMBOL_STR(set_wb_congested) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xac9657d8, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x446d1e25, __VMLINUX_SYMBOL_STR(set_anon_super) },
	{ 0xe0a1361b, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x9ef31551, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xb99842ef, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x6a819bc0, __VMLINUX_SYMBOL_STR(d_invalidate) },
	{ 0x161bd4b5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x27baa09b, __VMLINUX_SYMBOL_STR(__set_page_dirty_nobuffers) },
	{ 0xc7844d91, __VMLINUX_SYMBOL_STR(filemap_fault) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x28f38dc7, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0x8d6ff57d, __VMLINUX_SYMBOL_STR(mntget) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xf4e8af0f, __VMLINUX_SYMBOL_STR(generic_write_checks) },
	{ 0x2c326dd4, __VMLINUX_SYMBOL_STR(iov_iter_revert) },
	{ 0x4dbd0442, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x2a41bc4f, __VMLINUX_SYMBOL_STR(proc_symlink) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xbbcb39bf, __VMLINUX_SYMBOL_STR(nlmclnt_done) },
	{ 0xb154fb9, __VMLINUX_SYMBOL_STR(rpcauth_key_timeout_notify) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xce32df85, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xabcaa577, __VMLINUX_SYMBOL_STR(free_anon_bdev) },
	{ 0xf596e67d, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x68522ca5, __VMLINUX_SYMBOL_STR(migrate_page) },
	{ 0x680d2b9b, __VMLINUX_SYMBOL_STR(iov_iter_get_pages_alloc) },
	{ 0x70fbde93, __VMLINUX_SYMBOL_STR(nlmclnt_init) },
	{ 0x738f1249, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xd8413030, __VMLINUX_SYMBOL_STR(rpc_clnt_xprt_switch_has_addr) },
	{ 0xcb9062d0, __VMLINUX_SYMBOL_STR(seq_escape) },
	{ 0x19788bd2, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x5abbfd95, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x34473ecb, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0x4a9e35f7, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0x38c9d41c, __VMLINUX_SYMBOL_STR(radix_tree_delete_item) },
	{ 0xf886f9c0, __VMLINUX_SYMBOL_STR(downgrade_write) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x754a3021, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0x409b5db2, __VMLINUX_SYMBOL_STR(filemap_write_and_wait) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x8b588871, __VMLINUX_SYMBOL_STR(put_rpccred) },
	{ 0xca42537f, __VMLINUX_SYMBOL_STR(deactivate_locked_super) },
	{ 0x521820a, __VMLINUX_SYMBOL_STR(__page_file_mapping) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xb0cc236e, __VMLINUX_SYMBOL_STR(rpc_init_wait_queue) },
	{ 0x5dd81c4f, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x2322cb7a, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x7113e034, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x59514183, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x7a4957ea, __VMLINUX_SYMBOL_STR(invalidate_inode_pages2) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x412d8816, __VMLINUX_SYMBOL_STR(vm_node_stat) },
	{ 0xf2204811, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xee5f8539, __VMLINUX_SYMBOL_STR(add_to_page_cache_lru) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xdb0de017, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x95bec36f, __VMLINUX_SYMBOL_STR(rename_lock) },
	{ 0xed713d5d, __VMLINUX_SYMBOL_STR(d_add) },
	{ 0x8fbb49dc, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x3f009e80, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_atomic_t) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x3f252dbf, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0x8824bcef, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0x5a95e49b, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x24504674, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xab360023, __VMLINUX_SYMBOL_STR(set_page_dirty) },
	{ 0xda02d67, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xa3131f6, __VMLINUX_SYMBOL_STR(strnchr) },
	{ 0x7fe32873, __VMLINUX_SYMBOL_STR(rb_replace_node) },
	{ 0xe89af961, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0x5dc627a6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x8b82dd3, __VMLINUX_SYMBOL_STR(rpc_killall_tasks) },
	{ 0xb3687850, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_lock) },
	{ 0xa32b409b, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0x6c7b12c, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xde9360ba, __VMLINUX_SYMBOL_STR(totalram_pages) },
	{ 0x8f1a7440, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0xe87f15e9, __VMLINUX_SYMBOL_STR(rpc_exit) },
	{ 0xffa8302, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0xddece99e, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0x88cb1b38, __VMLINUX_SYMBOL_STR(rpc_lookup_cred_nonblock) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x33977c52, __VMLINUX_SYMBOL_STR(xdr_init_decode_pages) },
	{ 0xf0f2aa6f, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xa95133d5, __VMLINUX_SYMBOL_STR(rpc_put_task_async) },
	{ 0x625e6bc, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x6dce6a15, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x82b6cd0a, __VMLINUX_SYMBOL_STR(rpc_call_sync) },
	{ 0xd6387855, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xfe0e7b1, __VMLINUX_SYMBOL_STR(d_obtain_root) },
	{ 0x3e3967dc, __VMLINUX_SYMBOL_STR(finish_no_open) },
	{ 0xe4cc55ee, __VMLINUX_SYMBOL_STR(rpc_create) },
	{ 0xb74fe0c4, __VMLINUX_SYMBOL_STR(wait_for_completion_killable) },
	{ 0x201a4b32, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2b496bc, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0xc6d3cc75, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd7bff33f, __VMLINUX_SYMBOL_STR(write_inode_now) },
	{ 0xc9e2d0, __VMLINUX_SYMBOL_STR(sget) },
	{ 0x80951b28, __VMLINUX_SYMBOL_STR(rpcauth_get_gssinfo) },
	{ 0x64db9a5, __VMLINUX_SYMBOL_STR(mark_mounts_for_expiry) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x4e765128, __VMLINUX_SYMBOL_STR(rpc_proc_unregister) },
	{ 0x82d79b51, __VMLINUX_SYMBOL_STR(sysctl_vfs_cache_pressure) },
	{ 0xf7e6eab0, __VMLINUX_SYMBOL_STR(d_move) },
	{ 0x14363771, __VMLINUX_SYMBOL_STR(rpc_max_payload) },
	{ 0xffd63492, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x695a52e1, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xc0faaf10, __VMLINUX_SYMBOL_STR(write_cache_pages) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xb23da5f9, __VMLINUX_SYMBOL_STR(proc_mkdir_data) },
	{ 0x31414c17, __VMLINUX_SYMBOL_STR(rpc_lookup_machine_cred) },
	{ 0x32314db4, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x2ac7253, __VMLINUX_SYMBOL_STR(rpc_lookup_cred) },
	{ 0x9a98c102, __VMLINUX_SYMBOL_STR(rpc_peeraddr2str) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x69ab4edb, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0x5fde262b, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xa7c61b3a, __VMLINUX_SYMBOL_STR(rpc_clone_client_set_auth) },
	{ 0xcb0609f, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xedf1360, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0xe7372bf2, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x41482d8b, __VMLINUX_SYMBOL_STR(strndup_user) },
	{ 0xd3512349, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x525a83d2, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xcee467f3, __VMLINUX_SYMBOL_STR(xprt_load_transport) },
	{ 0x97b556fc, __VMLINUX_SYMBOL_STR(inode_nohighmem) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xb590e00f, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x51ef33b8, __VMLINUX_SYMBOL_STR(kstrndup) },
	{ 0xd7f6f58d, __VMLINUX_SYMBOL_STR(ilookup5) },
	{ 0x58e3306d, __VMLINUX_SYMBOL_STR(bit_wait_io) },
	{ 0xd32f02d2, __VMLINUX_SYMBOL_STR(__fsnotify_parent) },
	{ 0xbf68ca5a, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xca016a30, __VMLINUX_SYMBOL_STR(rpc_setbufsize) },
	{ 0xb340148f, __VMLINUX_SYMBOL_STR(__rpc_wait_for_completion_task) },
	{ 0x5bf493d, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x783b3563, __VMLINUX_SYMBOL_STR(wake_up_atomic_t) },
	{ 0x16e297c3, __VMLINUX_SYMBOL_STR(bit_wait) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x22423951, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x11c08461, __VMLINUX_SYMBOL_STR(simple_nosetlease) },
	{ 0x9f04bc82, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0xb64c53f3, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xcbf7f376, __VMLINUX_SYMBOL_STR(generic_perform_write) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xe0f55e6e, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x4d0f559f, __VMLINUX_SYMBOL_STR(d_alloc) },
	{ 0x3bc21f3f, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x5786834, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0x58d2273e, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xe3f0c5e0, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x94e7d91e, __VMLINUX_SYMBOL_STR(rpc_print_iostats) },
	{ 0xbee0a115, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0xaf52b588, __VMLINUX_SYMBOL_STR(__d_lookup_done) },
	{ 0x400afd28, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x2cdb972c, __VMLINUX_SYMBOL_STR(deactivate_super) },
	{ 0x61bdfc4a, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x256bf182, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0xa9a681c2, __VMLINUX_SYMBOL_STR(locks_lock_inode_wait) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0x395da1d9, __VMLINUX_SYMBOL_STR(rpcauth_cred_key_to_expire) },
	{ 0x9b8832a0, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x800fb92b, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x7f88db4c, __VMLINUX_SYMBOL_STR(clear_page_dirty_for_io) },
	{ 0x42f3c53b, __VMLINUX_SYMBOL_STR(rpc_run_task) },
	{ 0x9b673ee2, __VMLINUX_SYMBOL_STR(rpc_sleep_on) },
	{ 0x62f17290, __VMLINUX_SYMBOL_STR(clear_wb_congested) },
	{ 0x1ebec3f3, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x52112a78, __VMLINUX_SYMBOL_STR(read_cache_pages) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x7f93e715, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x831943f, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x413c0466, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xa667615b, __VMLINUX_SYMBOL_STR(d_lookup) },
	{ 0x69583415, __VMLINUX_SYMBOL_STR(rpc_restart_call_prepare) },
	{ 0x41655e89, __VMLINUX_SYMBOL_STR(remove_proc_subtree) },
	{ 0x1984d421, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit) },
	{ 0x93f6bff1, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x9183ea55, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0x71dfa75d, __VMLINUX_SYMBOL_STR(rpc_wake_up_queued_task) },
	{ 0xcfe47f1c, __VMLINUX_SYMBOL_STR(I_BDEV) },
	{ 0xb63ff113, __VMLINUX_SYMBOL_STR(rpc_pton) },
	{ 0xff13ead9, __VMLINUX_SYMBOL_STR(iter_file_splice_write) },
	{ 0xaa54384a, __VMLINUX_SYMBOL_STR(blockdev_superblock) },
	{ 0x25b69326, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xe4054e66, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x8eee07bd, __VMLINUX_SYMBOL_STR(finish_open) },
	{ 0xab6a2a53, __VMLINUX_SYMBOL_STR(read_cache_page) },
	{ 0x4c85d1e6, __VMLINUX_SYMBOL_STR(invalidate_inode_pages2_range) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa56441ff, __VMLINUX_SYMBOL_STR(generic_permission) },
	{ 0x1ff481b2, __VMLINUX_SYMBOL_STR(inode_dio_wait) },
	{ 0x5f50cc65, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x7f02cdc2, __VMLINUX_SYMBOL_STR(unmap_mapping_range) },
	{ 0xb7da1fa0, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9d437713, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0xbe4e59c0, __VMLINUX_SYMBOL_STR(generic_error_remove_page) },
	{ 0x70ae8378, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x52f0f557, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0xf1ea6f1c, __VMLINUX_SYMBOL_STR(__bswapsi2) },
	{ 0x18ee34f3, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x5dd63a82, __VMLINUX_SYMBOL_STR(invalidate_mapping_pages) },
	{ 0xfd5a7fd0, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xcb1f1241, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x26871eef, __VMLINUX_SYMBOL_STR(rpc_wake_up) },
	{ 0x4f4bbfbb, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0x963e0acd, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x217183d7, __VMLINUX_SYMBOL_STR(vfs_submount) },
	{ 0xf346231f, __VMLINUX_SYMBOL_STR(seq_list_start_head) },
	{ 0xbb1cbc9a, __VMLINUX_SYMBOL_STR(mapping_tagged) },
	{ 0xfe40f2ee, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x64fa6725, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd3dbcc72, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0x25496615, __VMLINUX_SYMBOL_STR(filemap_map_pages) },
	{ 0xbb2242fc, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x79331831, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0xe7d4daac, __VMLINUX_SYMBOL_STR(seq_list_next) },
	{ 0x8a4fa83b, __VMLINUX_SYMBOL_STR(__aeabi_llsr) },
	{ 0x21eaa402, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0x3fa7fd7, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x9ff04e88, __VMLINUX_SYMBOL_STR(proc_create) },
	{ 0x4102e91e, __VMLINUX_SYMBOL_STR(mnt_set_expiry) },
	{ 0xc78c8eca, __VMLINUX_SYMBOL_STR(rpc_shutdown_client) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x7f0ad5e6, __VMLINUX_SYMBOL_STR(rpc_proc_register) },
	{ 0x3c47d5cd, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0xf96260ad, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0x66e18aa0, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0x2027510c, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0x171a5fb9, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x2ab3d008, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x3c185c61, __VMLINUX_SYMBOL_STR(page_put_link) },
	{ 0x4063803a, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x866c1dfe, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x786b55d0, __VMLINUX_SYMBOL_STR(d_alloc_parallel) },
	{ 0xfd20e32c, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x1d80632a, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x7cb31274, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0xc7be01d4, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0x860abcc, __VMLINUX_SYMBOL_STR(__d_drop) },
	{ 0xc7ec668d, __VMLINUX_SYMBOL_STR(generic_fillattr) },
	{ 0xd55b39f4, __VMLINUX_SYMBOL_STR(noop_backing_dev_info) },
	{ 0xd67c1a76, __VMLINUX_SYMBOL_STR(__page_file_index) },
	{ 0xd2577db0, __VMLINUX_SYMBOL_STR(posix_test_lock) },
	{ 0xfe84cff6, __VMLINUX_SYMBOL_STR(super_setup_bdi_name) },
	{ 0x1fb0d658, __VMLINUX_SYMBOL_STR(generic_shutdown_super) },
	{ 0xfb12626f, __VMLINUX_SYMBOL_STR(rpc_put_task) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lockd,sunrpc";

