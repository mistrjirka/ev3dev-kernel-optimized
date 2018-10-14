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
	{ 0x4b6fb9f6, __VMLINUX_SYMBOL_STR(nfs_unlink) },
	{ 0xa9f8519, __VMLINUX_SYMBOL_STR(nfs_symlink) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8b671fea, __VMLINUX_SYMBOL_STR(nfs_refresh_inode) },
	{ 0x25b8bf4b, __VMLINUX_SYMBOL_STR(nfs_close_context) },
	{ 0x3e0d4eca, __VMLINUX_SYMBOL_STR(nfs_free_client) },
	{ 0xae69c5a4, __VMLINUX_SYMBOL_STR(nfs_try_mount) },
	{ 0x4bc1fa2d, __VMLINUX_SYMBOL_STR(nfs_permission) },
	{ 0x5027be95, __VMLINUX_SYMBOL_STR(nfs_link) },
	{ 0xf00e246f, __VMLINUX_SYMBOL_STR(xdr_inline_pages) },
	{ 0x376ac8b5, __VMLINUX_SYMBOL_STR(nfs_instantiate) },
	{ 0xee1df878, __VMLINUX_SYMBOL_STR(nfs_sops) },
	{ 0x683d5743, __VMLINUX_SYMBOL_STR(nfs_setattr_update_inode) },
	{ 0x51aa3c32, __VMLINUX_SYMBOL_STR(unregister_nfs_version) },
	{ 0xfe1cf418, __VMLINUX_SYMBOL_STR(nfs_rmdir) },
	{ 0xe89af961, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xfb7ee006, __VMLINUX_SYMBOL_STR(nfs_alloc_fattr) },
	{ 0xb606e716, __VMLINUX_SYMBOL_STR(nfs_fattr_init) },
	{ 0xf2a263d4, __VMLINUX_SYMBOL_STR(xdr_terminate_string) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8a6082d8, __VMLINUX_SYMBOL_STR(nfs_setattr) },
	{ 0x7e1f3389, __VMLINUX_SYMBOL_STR(nfs_fs_type) },
	{ 0x82b6cd0a, __VMLINUX_SYMBOL_STR(rpc_call_sync) },
	{ 0x4dacf3d9, __VMLINUX_SYMBOL_STR(rpc_call_start) },
	{ 0x2ed63018, __VMLINUX_SYMBOL_STR(register_nfs_version) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x36f3804, __VMLINUX_SYMBOL_STR(nfs_getattr) },
	{ 0x8a7afd1e, __VMLINUX_SYMBOL_STR(nfs_invalidate_atime) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x26884ff7, __VMLINUX_SYMBOL_STR(nfs_alloc_fhandle) },
	{ 0x6dc78535, __VMLINUX_SYMBOL_STR(nfs_lookup) },
	{ 0xe94045f8, __VMLINUX_SYMBOL_STR(nfs_rename) },
	{ 0x894205f3, __VMLINUX_SYMBOL_STR(nfs_file_operations) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc7d5f363, __VMLINUX_SYMBOL_STR(nfs_mkdir) },
	{ 0x5cad5bac, __VMLINUX_SYMBOL_STR(nfs_create) },
	{ 0xdf7dd333, __VMLINUX_SYMBOL_STR(xdr_read_pages) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8ec62a86, __VMLINUX_SYMBOL_STR(nfs_init_client) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2d34c8ec, __VMLINUX_SYMBOL_STR(nfs_create_server) },
	{ 0xf1ea6f1c, __VMLINUX_SYMBOL_STR(__bswapsi2) },
	{ 0x97225abe, __VMLINUX_SYMBOL_STR(nfs_mknod) },
	{ 0xa5c0448e, __VMLINUX_SYMBOL_STR(nfs_submount) },
	{ 0xd3dbcc72, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xff057987, __VMLINUX_SYMBOL_STR(nfs_wb_all) },
	{ 0xc14d2e5d, __VMLINUX_SYMBOL_STR(xdr_write_pages) },
	{ 0xe779f147, __VMLINUX_SYMBOL_STR(nfs_dentry_operations) },
	{ 0x7ad23660, __VMLINUX_SYMBOL_STR(nfs_alloc_client) },
	{ 0xd44d9e8b, __VMLINUX_SYMBOL_STR(nfs_writeback_update_inode) },
	{ 0x6387c35, __VMLINUX_SYMBOL_STR(nlmclnt_proc) },
	{ 0xd15e32b8, __VMLINUX_SYMBOL_STR(nfs_clone_server) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfs,sunrpc,lockd";

