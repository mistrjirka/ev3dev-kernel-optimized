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
	{ 0xb2037296, __VMLINUX_SYMBOL_STR(ieee80211_rx_napi) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xa4fe51cb, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0xac9ca5dc, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0x9b5a0273, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x48fa2796, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf5534792, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0x821b90a3, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x4dbd0442, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x5c2e3421, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xfaa6cbd6, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x62bb58f7, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x33c81ba5, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0x16bf6c36, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0xe90c4d6a, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0xa55c3cb9, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0xfe90c4a6, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0xdc1c2232, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x36b950ea, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0xf1f74b77, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0xc4f6eb11, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x39742ef8, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0xaf3c3267, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x911bf1f4, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x6d807ff, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0x18017cd4, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x97297182, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xcc8c33f, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xe332e020, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x5ee52022, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xfd792e2a, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x5fc262cb, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfba94762, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0xb6ec1a37, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0xb490b51a, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0xc6295eb8, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0x95f8534c, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x8a567f62, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x73a19010, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xda02d67, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3dc525f7, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0x6fef09b6, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x19e2fa9b, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xbd639443, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0xdc4baa33, __VMLINUX_SYMBOL_STR(of_led_classdev_register) },
	{ 0xfa0c8d6d, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xa5429be9, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xa9173804, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x3a02a51e, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0xddece99e, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb75075e6, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1dc54eb6, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x823eb899, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5fc9a450, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0x932991db, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0x410a7fbb, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xcaf6a0d2, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xbf57132f, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x76f6c5ef, __VMLINUX_SYMBOL_STR(kmalloc_order) },
	{ 0x201a4b32, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xb022683, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0x389ecf9e, __VMLINUX_SYMBOL_STR(__bswapdi2) },
	{ 0xc40e0852, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0x4f98b536, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0x63c89d84, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x6ec87a7, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0xf8f04ccf, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0xa4587c2e, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0x35baae3f, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0x26e7f8e2, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0xa1c8b707, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x31f1d449, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaea86cc3, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x195a71c2, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xa38caae0, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x43b0c9c3, __VMLINUX_SYMBOL_STR(preempt_schedule) },
	{ 0xe8140b03, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xd30262eb, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0xb6dfbba5, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x2632ec43, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0xeb99c219, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x511e9a7c, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0xb36b93d0, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xbbfbec5a, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0x84f2fbd, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0xa8b0670c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x9ea248a8, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0xd66c809d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe019838, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x310feb6c, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0x945ef781, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xd3aedab3, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0xf456b2ad, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x57b234c5, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x8a0455da, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x8adfcd03, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xc1d762f1, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x9594d3d3, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xf4b54b9f, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x29ba11e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7e5daac1, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0xfc203896, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0xad90033b, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0x84f6effd, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_free) },
	{ 0x83b809a0, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xe3539e9f, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x72e506d3, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0xb3a9520e, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x7298dde9, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0xe6ee37de, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0x2886458e, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0xd3267727, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x1bd741d3, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0xdb800d28, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0x9ab69680, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0xc82bf543, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x2d2961af, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2300c8ff, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7e5bb01a, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0xd1c124ba, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0x22c715f6, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_request_out) },
	{ 0xf1ea6f1c, __VMLINUX_SYMBOL_STR(__bswapsi2) },
	{ 0x41659e7f, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0xdda4531e, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0xbf6ce96e, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xfe64fb80, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x7f13ef1e, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x6948f8b7, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x959f1058, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0x5b0207e7, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xc214cccc, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xbb2242fc, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xb0020439, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0x56b6e09, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x590ba4fa, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x5054c285, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x8652ae31, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x38863446, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0x814284c9, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x7c23d0fe, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x24a8dbac, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x53a3c678, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0xcb8d41cc, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ath9k_hw,ath9k_common,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");
