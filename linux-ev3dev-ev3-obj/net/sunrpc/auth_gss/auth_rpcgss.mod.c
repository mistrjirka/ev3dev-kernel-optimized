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
	{ 0x4b15da5, __VMLINUX_SYMBOL_STR(rpcauth_register) },
	{ 0xdd44158d, __VMLINUX_SYMBOL_STR(xdr_shift_buf) },
	{ 0x7d75eadf, __VMLINUX_SYMBOL_STR(auth_domain_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc4ffe7ad, __VMLINUX_SYMBOL_STR(rpc_destroy_wait_queue) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa7cae0de, __VMLINUX_SYMBOL_STR(sunrpc_cache_update) },
	{ 0xbde0c072, __VMLINUX_SYMBOL_STR(xdr_buf_read_netobj) },
	{ 0xf3767d06, __VMLINUX_SYMBOL_STR(xdr_init_encode) },
	{ 0x161bd4b5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xb0773925, __VMLINUX_SYMBOL_STR(rpc_init_pipe_dir_object) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x42e87ad0, __VMLINUX_SYMBOL_STR(cache_destroy_net) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0xe3ee8250, __VMLINUX_SYMBOL_STR(rpcauth_init_cred) },
	{ 0x685e31ca, __VMLINUX_SYMBOL_STR(groups_sort) },
	{ 0xad73041f, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x7e8b8cfe, __VMLINUX_SYMBOL_STR(rpc_unlink) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x8b588871, __VMLINUX_SYMBOL_STR(put_rpccred) },
	{ 0xe50b7e8a, __VMLINUX_SYMBOL_STR(rpcauth_generic_bind_cred) },
	{ 0xb0cc236e, __VMLINUX_SYMBOL_STR(rpc_init_wait_queue) },
	{ 0xf668ba9, __VMLINUX_SYMBOL_STR(svc_auth_unregister) },
	{ 0xbe038bb3, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xf00e246f, __VMLINUX_SYMBOL_STR(xdr_inline_pages) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0xf930a93, __VMLINUX_SYMBOL_STR(cache_register_net) },
	{ 0x643d9ba1, __VMLINUX_SYMBOL_STR(groups_free) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0xdd2bf39b, __VMLINUX_SYMBOL_STR(gssd_running) },
	{ 0x748cfd23, __VMLINUX_SYMBOL_STR(rpc_mkpipe_data) },
	{ 0x8190d4ab, __VMLINUX_SYMBOL_STR(rpc_mkpipe_dentry) },
	{ 0x8824bcef, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0x24504674, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xa4ab0b2c, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xda02d67, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe89af961, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb126a41b, __VMLINUX_SYMBOL_STR(rpc_remove_pipe_dir_object) },
	{ 0xffa8302, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0xddece99e, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf75b197e, __VMLINUX_SYMBOL_STR(xdr_buf_subsegment) },
	{ 0x5546182d, __VMLINUX_SYMBOL_STR(svcauth_unix_set_client) },
	{ 0xc6db9e6, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xecf87d52, __VMLINUX_SYMBOL_STR(cache_check) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8c49cfbf, __VMLINUX_SYMBOL_STR(rpc_queue_upcall) },
	{ 0xf0f2aa6f, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x82b6cd0a, __VMLINUX_SYMBOL_STR(rpc_call_sync) },
	{ 0xe4cc55ee, __VMLINUX_SYMBOL_STR(rpc_create) },
	{ 0x201a4b32, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd8134faa, __VMLINUX_SYMBOL_STR(sunrpc_cache_lookup) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4897ac29, __VMLINUX_SYMBOL_STR(rpc_call_null) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x589f27dd, __VMLINUX_SYMBOL_STR(xdr_init_decode) },
	{ 0x9e509e2, __VMLINUX_SYMBOL_STR(rpcauth_init_credcache) },
	{ 0xe97f4ce5, __VMLINUX_SYMBOL_STR(qword_get) },
	{ 0xc8e96dea, __VMLINUX_SYMBOL_STR(qword_addhex) },
	{ 0x4a1f03fa, __VMLINUX_SYMBOL_STR(rpcauth_lookup_credcache) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xfe487975, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0x2dbcdd77, __VMLINUX_SYMBOL_STR(sunrpc_cache_unhash) },
	{ 0x51ef33b8, __VMLINUX_SYMBOL_STR(kstrndup) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0x4589b60b, __VMLINUX_SYMBOL_STR(cache_unregister_net) },
	{ 0x5bf493d, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xf3060cc8, __VMLINUX_SYMBOL_STR(rpc_pipe_generic_upcall) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x22423951, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x7865d8a0, __VMLINUX_SYMBOL_STR(rpc_destroy_pipe_data) },
	{ 0x46b6d230, __VMLINUX_SYMBOL_STR(svc_auth_register) },
	{ 0x2eec63c9, __VMLINUX_SYMBOL_STR(xdr_encode_netobj) },
	{ 0x6fca9cb, __VMLINUX_SYMBOL_STR(rpc_wake_up_status) },
	{ 0x8ddd8aad, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x51aa6f9f, __VMLINUX_SYMBOL_STR(auth_domain_lookup) },
	{ 0x9dc26599, __VMLINUX_SYMBOL_STR(rpc_release_client) },
	{ 0x2443d235, __VMLINUX_SYMBOL_STR(cache_purge) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xf71521ba, __VMLINUX_SYMBOL_STR(atomic64_add_return) },
	{ 0x9b8832a0, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x800fb92b, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x9b673ee2, __VMLINUX_SYMBOL_STR(rpc_sleep_on) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x3232d60, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x413c0466, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x8cfea8ac, __VMLINUX_SYMBOL_STR(rpcauth_unregister) },
	{ 0x93f6bff1, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x3e2b0ba6, __VMLINUX_SYMBOL_STR(groups_alloc) },
	{ 0x6bf1d21f, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x4e8f6ca7, __VMLINUX_SYMBOL_STR(sunrpc_net_id) },
	{ 0x94abb745, __VMLINUX_SYMBOL_STR(sprint_oid) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfc36d0d4, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xf1ea6f1c, __VMLINUX_SYMBOL_STR(__bswapsi2) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x26871eef, __VMLINUX_SYMBOL_STR(rpc_wake_up) },
	{ 0x963e0acd, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd4d5252f, __VMLINUX_SYMBOL_STR(read_bytes_from_xdr_buf) },
	{ 0xf2a9361c, __VMLINUX_SYMBOL_STR(rpc_net_ns) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0xc3041db3, __VMLINUX_SYMBOL_STR(rpcauth_destroy_credcache) },
	{ 0xc30f693d, __VMLINUX_SYMBOL_STR(cache_create_net) },
	{ 0xd3dbcc72, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf8fe5c9d, __VMLINUX_SYMBOL_STR(auth_domain_find) },
	{ 0xc78c8eca, __VMLINUX_SYMBOL_STR(rpc_shutdown_client) },
	{ 0xc14d2e5d, __VMLINUX_SYMBOL_STR(xdr_write_pages) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x8652ae31, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x2ab3d008, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x4592ba8b, __VMLINUX_SYMBOL_STR(xdr_buf_from_iov) },
	{ 0xc8d4e0e8, __VMLINUX_SYMBOL_STR(rpc_find_or_alloc_pipe_dir_object) },
	{ 0x68135cc5, __VMLINUX_SYMBOL_STR(xdr_buf_trim) },
	{ 0x1d80632a, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xef464c28, __VMLINUX_SYMBOL_STR(getboottime64) },
	{ 0xfb12626f, __VMLINUX_SYMBOL_STR(rpc_put_task) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sunrpc,oid_registry";
