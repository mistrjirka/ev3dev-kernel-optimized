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
	{ 0xf2204811, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xcaf6a0d2, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xbf6ce96e, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0xa9bf0e60, __VMLINUX_SYMBOL_STR(btrtl_setup_realtek) },
	{ 0x15850ff6, __VMLINUX_SYMBOL_STR(btintel_set_diag) },
	{ 0x2f203123, __VMLINUX_SYMBOL_STR(btintel_hw_error) },
	{ 0x6ec1ac24, __VMLINUX_SYMBOL_STR(btintel_set_bdaddr) },
	{ 0x7f7a81e3, __VMLINUX_SYMBOL_STR(btintel_set_diag_mfg) },
	{ 0x709fe114, __VMLINUX_SYMBOL_STR(btbcm_setup_apple) },
	{ 0xaa4cd0b4, __VMLINUX_SYMBOL_STR(btbcm_set_bdaddr) },
	{ 0x8a4213a7, __VMLINUX_SYMBOL_STR(btbcm_setup_patchram) },
	{ 0x757e2f49, __VMLINUX_SYMBOL_STR(usb_driver_claim_interface) },
	{ 0xda2283eb, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0xc214cccc, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xbc122695, __VMLINUX_SYMBOL_STR(of_property_read_variable_u16_array) },
	{ 0xc96706c2, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x404412f, __VMLINUX_SYMBOL_STR(of_irq_get_byname) },
	{ 0x4bedcea2, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xb6b2b435, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0xddece99e, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf11fb052, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xa7e312d, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0x7d3dee1d, __VMLINUX_SYMBOL_STR(hci_recv_diag) },
	{ 0x9484a9e7, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xeaac5ed1, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x3d3e4279, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xab5d912a, __VMLINUX_SYMBOL_STR(__hci_cmd_sync_ev) },
	{ 0xb8b00843, __VMLINUX_SYMBOL_STR(btintel_exit_mfg) },
	{ 0x13ee33e8, __VMLINUX_SYMBOL_STR(btintel_enter_mfg) },
	{ 0x9f137286, __VMLINUX_SYMBOL_STR(btintel_set_event_mask_mfg) },
	{ 0x44bae227, __VMLINUX_SYMBOL_STR(bit_wait_timeout) },
	{ 0x5e206705, __VMLINUX_SYMBOL_STR(btintel_set_event_mask) },
	{ 0x6fe91876, __VMLINUX_SYMBOL_STR(btintel_load_ddc_config) },
	{ 0x637929b4, __VMLINUX_SYMBOL_STR(btintel_secure_send) },
	{ 0x4071b517, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_timeout) },
	{ 0x7c23d0fe, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xfe64fb80, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x89f8ea5d, __VMLINUX_SYMBOL_STR(btintel_check_bdaddr) },
	{ 0xdad07c32, __VMLINUX_SYMBOL_STR(btintel_version_info) },
	{ 0x4b47da36, __VMLINUX_SYMBOL_STR(btintel_read_version) },
	{ 0x7adeb8d4, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x9594d3d3, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xa1c8b707, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x70946bf0, __VMLINUX_SYMBOL_STR(__hci_cmd_sync) },
	{ 0x400d1ca, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0x4c7167a0, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x41d0446, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x8a0455da, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x5c44b80, __VMLINUX_SYMBOL_STR(usb_get_from_anchor) },
	{ 0xa370f0a2, __VMLINUX_SYMBOL_STR(usb_scuttle_anchored_urbs) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3b0ed173, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x814284c9, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0x29ba11e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x590ba4fa, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf456b2ad, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xda02d67, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbd639443, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0xe019838, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x53a3c678, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xcb8d41cc, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btrtl,btintel,btbcm";

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0000p0000d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E126E921FEB134A2A9C94F8");
