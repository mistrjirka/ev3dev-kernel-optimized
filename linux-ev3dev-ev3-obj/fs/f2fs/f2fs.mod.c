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
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x894e16f1, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x53326531, __VMLINUX_SYMBOL_STR(mempool_alloc_pages) },
	{ 0x205e3c9, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x2690e6c1, __VMLINUX_SYMBOL_STR(_find_next_zero_bit_le) },
	{ 0x767d8bab, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xedf270ef, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x7f6c5208, __VMLINUX_SYMBOL_STR(__blkdev_issue_discard) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1a9a743e, __VMLINUX_SYMBOL_STR(filemap_check_errors) },
	{ 0x683bf630, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x6b9d1b2d, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xe0a1361b, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x54e34ad6, __VMLINUX_SYMBOL_STR(blk_status_to_errno) },
	{ 0xaf4bd765, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xf33c856e, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0x9ef31551, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xb99842ef, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x161bd4b5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x62ff0154, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0xc7844d91, __VMLINUX_SYMBOL_STR(filemap_fault) },
	{ 0x336eb9b8, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xf4e8af0f, __VMLINUX_SYMBOL_STR(generic_write_checks) },
	{ 0x188a3dfb, __VMLINUX_SYMBOL_STR(timespec_trunc) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xdf15148b, __VMLINUX_SYMBOL_STR(generic_file_llseek_size) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x99c3bee4, __VMLINUX_SYMBOL_STR(kset_register) },
	{ 0xc7a1840e, __VMLINUX_SYMBOL_STR(llist_add_batch) },
	{ 0xce32df85, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0x9012fa26, __VMLINUX_SYMBOL_STR(__generic_file_write_iter) },
	{ 0xc1d8cfaf, __VMLINUX_SYMBOL_STR(__fdget) },
	{ 0x738f1249, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0x64999478, __VMLINUX_SYMBOL_STR(congestion_wait) },
	{ 0x1e4255a4, __VMLINUX_SYMBOL_STR(bdev_read_only) },
	{ 0xad73041f, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xb573a396, __VMLINUX_SYMBOL_STR(generic_fh_to_parent) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xf1deabf2, __VMLINUX_SYMBOL_STR(div64_u64) },
	{ 0x61f3a1e1, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x19788bd2, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x34473ecb, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0x4a9e35f7, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xca757ca0, __VMLINUX_SYMBOL_STR(truncate_inode_pages_range) },
	{ 0xc61a31f, __VMLINUX_SYMBOL_STR(generic_file_open) },
	{ 0xf1989785, __VMLINUX_SYMBOL_STR(posix_acl_access_xattr_handler) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x6faec90c, __VMLINUX_SYMBOL_STR(posix_acl_update_mode) },
	{ 0x754a3021, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0x7b30e37c, __VMLINUX_SYMBOL_STR(tag_pages_for_writeback) },
	{ 0x409b5db2, __VMLINUX_SYMBOL_STR(filemap_write_and_wait) },
	{ 0xd6e8bc4, __VMLINUX_SYMBOL_STR(__lock_buffer) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x93bac0f1, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x76cf47f6, __VMLINUX_SYMBOL_STR(__aeabi_llsl) },
	{ 0x2322cb7a, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x7113e034, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xbe038bb3, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xa34ac02a, __VMLINUX_SYMBOL_STR(kobject_set_name) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x59514183, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x15cf9578, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xee5f8539, __VMLINUX_SYMBOL_STR(add_to_page_cache_lru) },
	{ 0x692f0b59, __VMLINUX_SYMBOL_STR(filemap_fdatawait_range) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2b7f6427, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x53c3ec3d, __VMLINUX_SYMBOL_STR(d_instantiate_new) },
	{ 0xdceb9cf8, __VMLINUX_SYMBOL_STR(kobject_del) },
	{ 0x8fbb49dc, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x28240254, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x5be111b4, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0xf1ef3411, __VMLINUX_SYMBOL_STR(unlock_buffer) },
	{ 0x3f252dbf, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0x953e1b9e, __VMLINUX_SYMBOL_STR(ktime_get_real_seconds) },
	{ 0x5a95e49b, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x40c7247c, __VMLINUX_SYMBOL_STR(si_meminfo) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xab360023, __VMLINUX_SYMBOL_STR(set_page_dirty) },
	{ 0x3c77a4e7, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xda02d67, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x881fbfe1, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x8240459b, __VMLINUX_SYMBOL_STR(iov_iter_fault_in_readable) },
	{ 0xa8091598, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x5dc627a6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb82470e4, __VMLINUX_SYMBOL_STR(down_write_trylock) },
	{ 0xa32b409b, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0xfa0c8d6d, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0xddece99e, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc6db9e6, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1dc54eb6, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x5c804ffb, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0xdf93b9d8, __VMLINUX_SYMBOL_STR(timespec64_to_jiffies) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xcd63c845, __VMLINUX_SYMBOL_STR(__aeabi_lasr) },
	{ 0xca4b5a3a, __VMLINUX_SYMBOL_STR(sync_inodes_sb) },
	{ 0x6dce6a15, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xf1f57fc1, __VMLINUX_SYMBOL_STR(inode_add_bytes) },
	{ 0x69521eb, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x201a4b32, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x42774dfc, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x8d9bc00a, __VMLINUX_SYMBOL_STR(posix_acl_chmod) },
	{ 0xc6d3cc75, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf9722a4e, __VMLINUX_SYMBOL_STR(iov_iter_alignment) },
	{ 0x78eb8a9e, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0x3841bb6a, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x53e78f50, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0xfd501da8, __VMLINUX_SYMBOL_STR(wait_for_completion_io) },
	{ 0xd201f86d, __VMLINUX_SYMBOL_STR(account_page_dirtied) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x9a1e43ad, __VMLINUX_SYMBOL_STR(__sync_dirty_buffer) },
	{ 0x3956371c, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0x58b15081, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xd69ef97d, __VMLINUX_SYMBOL_STR(posix_acl_alloc) },
	{ 0xd985dc99, __VMLINUX_SYMBOL_STR(mempool_free_pages) },
	{ 0xffd63492, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x695a52e1, __VMLINUX_SYMBOL_STR(set_nlink) },
	{  0xb8c76, __VMLINUX_SYMBOL_STR(file_update_time) },
	{ 0x7805653d, __VMLINUX_SYMBOL_STR(page_symlink) },
	{ 0xa681fe88, __VMLINUX_SYMBOL_STR(generate_random_uuid) },
	{ 0xa361407a, __VMLINUX_SYMBOL_STR(thaw_bdev) },
	{ 0x8aad3019, __VMLINUX_SYMBOL_STR(insert_inode_locked) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x69ab4edb, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0xf3bf8b34, __VMLINUX_SYMBOL_STR(blkdev_get_by_dev) },
	{ 0xee9609f7, __VMLINUX_SYMBOL_STR(set_cached_acl) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x5fde262b, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xcb0609f, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xedf1360, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0xe7372bf2, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xbae484f6, __VMLINUX_SYMBOL_STR(shrink_dcache_sb) },
	{ 0x525a83d2, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xc3f37633, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x6c3d2faa, __VMLINUX_SYMBOL_STR(migrate_page_move_mapping) },
	{ 0x97b556fc, __VMLINUX_SYMBOL_STR(inode_nohighmem) },
	{ 0xa08d601e, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x5443913b, __VMLINUX_SYMBOL_STR(radix_tree_delete) },
	{ 0xa85781c4, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xdf5d00dc, __VMLINUX_SYMBOL_STR(file_write_and_wait_range) },
	{ 0xbf68ca5a, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x88288e85, __VMLINUX_SYMBOL_STR(kvmalloc_node) },
	{ 0x3d7f4ea8, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0x4b82055c, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0xd3ba53b6, __VMLINUX_SYMBOL_STR(radix_tree_gang_lookup) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8d4119dc, __VMLINUX_SYMBOL_STR(ilookup) },
	{ 0xb8ba0ea, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x9f04bc82, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xb64c53f3, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xddb1cd7, __VMLINUX_SYMBOL_STR(llist_reverse_order) },
	{ 0xf636e5de, __VMLINUX_SYMBOL_STR(radix_tree_tag_set) },
	{ 0xe65833bb, __VMLINUX_SYMBOL_STR(__filemap_set_wb_err) },
	{ 0x2ea4a414, __VMLINUX_SYMBOL_STR(wait_for_stable_page) },
	{ 0xefde2d0b, __VMLINUX_SYMBOL_STR(fs_kobj) },
	{ 0xd41942e8, __VMLINUX_SYMBOL_STR(inode_sub_bytes) },
	{ 0x3bc21f3f, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x4bce716e, __VMLINUX_SYMBOL_STR(pagevec_lookup_tag) },
	{ 0xf82ec573, __VMLINUX_SYMBOL_STR(rb_prev) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x65fd066a, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0xbee0a115, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0xfdfc0b3b, __VMLINUX_SYMBOL_STR(fiemap_fill_next_extent) },
	{ 0x400afd28, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x9a7b683e, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x8b8059bd, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x78b7fb3f, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x256bf182, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x9d5e53ab, __VMLINUX_SYMBOL_STR(page_cache_sync_readahead) },
	{ 0x8a3bfb0, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x511b6a49, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x1755a6fd, __VMLINUX_SYMBOL_STR(migrate_page_states) },
	{ 0x8d914472, __VMLINUX_SYMBOL_STR(vfs_setpos) },
	{ 0x7f88db4c, __VMLINUX_SYMBOL_STR(clear_page_dirty_for_io) },
	{ 0xb61cab7b, __VMLINUX_SYMBOL_STR(__radix_tree_insert) },
	{ 0x53356bf3, __VMLINUX_SYMBOL_STR(down_read_trylock) },
	{ 0x1ebec3f3, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x5a4242c0, __VMLINUX_SYMBOL_STR(sync_inode_metadata) },
	{ 0x8393f29, __VMLINUX_SYMBOL_STR(radix_tree_tag_clear) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x7f93e715, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x541a7bef, __VMLINUX_SYMBOL_STR(d_tmpfile) },
	{ 0x831943f, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x413c0466, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xf5f2bf2, __VMLINUX_SYMBOL_STR(__pagevec_release) },
	{ 0x93f6bff1, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x9183ea55, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0x6bf1d21f, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xff13ead9, __VMLINUX_SYMBOL_STR(iter_file_splice_write) },
	{ 0xa28a8efb, __VMLINUX_SYMBOL_STR(freeze_bdev) },
	{ 0x25b69326, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xca35ee50, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0xe4054e66, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xea491fbd, __VMLINUX_SYMBOL_STR(truncate_pagecache_range) },
	{ 0x1ff481b2, __VMLINUX_SYMBOL_STR(inode_dio_wait) },
	{ 0x98a581a7, __VMLINUX_SYMBOL_STR(page_get_link) },
	{ 0x6562b607, __VMLINUX_SYMBOL_STR(d_find_any_alias) },
	{ 0x5f50cc65, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9d437713, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0x1ab9530, __VMLINUX_SYMBOL_STR(current_time) },
	{ 0xfc36d0d4, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x70ae8378, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x721b1851, __VMLINUX_SYMBOL_STR(skip_spaces) },
	{ 0x52f0f557, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0x9754ec10, __VMLINUX_SYMBOL_STR(radix_tree_preload) },
	{ 0x5dd63a82, __VMLINUX_SYMBOL_STR(invalidate_mapping_pages) },
	{ 0x94ae8170, __VMLINUX_SYMBOL_STR(page_mapping) },
	{ 0x32d1d359, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xfd5a7fd0, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0xcb1f1241, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x543fc9da, __VMLINUX_SYMBOL_STR(__blockdev_direct_IO) },
	{ 0x963e0acd, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xce8f3a32, __VMLINUX_SYMBOL_STR(inode_set_flags) },
	{ 0xb86d6479, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0x671c87fe, __VMLINUX_SYMBOL_STR(posix_acl_default_xattr_handler) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0xbb1cbc9a, __VMLINUX_SYMBOL_STR(mapping_tagged) },
	{ 0xfe40f2ee, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x64fa6725, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x337e0ec7, __VMLINUX_SYMBOL_STR(writeback_inodes_sb) },
	{ 0x25496615, __VMLINUX_SYMBOL_STR(filemap_map_pages) },
	{ 0xbb2242fc, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x871c0a7e, __VMLINUX_SYMBOL_STR(fiemap_check_flags) },
	{ 0xd8b18206, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x79331831, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x8a4fa83b, __VMLINUX_SYMBOL_STR(__aeabi_llsr) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xfbc4f89e, __VMLINUX_SYMBOL_STR(io_schedule_timeout) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x1515dbaf, __VMLINUX_SYMBOL_STR(generic_fh_to_dentry) },
	{ 0xf96260ad, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0x171a5fb9, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0xfcc61d72, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x4063803a, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x866c1dfe, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xfd20e32c, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xf99e75d4, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0x7cb31274, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0xd6305b29, __VMLINUX_SYMBOL_STR(iget_locked) },
	{ 0x16642c12, __VMLINUX_SYMBOL_STR(setattr_prepare) },
	{ 0xc7be01d4, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0x8066f81, __VMLINUX_SYMBOL_STR(migrate_page_copy) },
	{ 0xc7ec668d, __VMLINUX_SYMBOL_STR(generic_fillattr) },
	{ 0x3995a3ae, __VMLINUX_SYMBOL_STR(filemap_fdatawrite) },
	{ 0x3458e28f, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xd67c1a76, __VMLINUX_SYMBOL_STR(__page_file_index) },
	{ 0x2292fd4b, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

