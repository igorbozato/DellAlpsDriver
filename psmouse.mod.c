#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x9a31bb74, "module_layout" },
	{ 0xa3a93a1, "device_remove_file" },
	{ 0x5cd9dbb5, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xadaabe1b, "pv_lock_ops" },
	{ 0xc996d097, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xb3be75f6, "dev_set_drvdata" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xe47d774f, "dev_printk" },
	{ 0xd7ce66b5, "serio_unregister_driver" },
	{ 0x20168c97, "ps2_handle_ack" },
	{ 0x6ba8c572, "ps2_sendbyte" },
	{ 0x78469066, "ps2_handle_response" },
	{ 0x41ca1224, "input_mt_report_finger_count" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x305bd1d9, "input_alloc_absinfo" },
	{ 0x6b06fdce, "delayed_work_timer_fn" },
	{ 0xd11918a2, "ps2_end_command" },
	{ 0xda983abc, "__ps2_command" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0x593a99b, "init_timer_key" },
	{ 0x37013607, "mutex_unlock" },
	{ 0xb595d894, "serio_interrupt" },
	{ 0x106dad30, "ps2_drain" },
	{ 0x91715312, "sprintf" },
	{ 0xcb7122d2, "sysfs_remove_group" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4f916e83, "input_mt_report_pointer_emulation" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb730e464, "input_set_abs_params" },
	{ 0x31808f62, "input_event" },
	{ 0xe25ef436, "serio_unregister_child_port" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x3c80c06c, "kstrtoull" },
	{ 0x90a1601f, "dmi_check_system" },
	{ 0xe56f8c24, "__serio_register_driver" },
	{ 0xfee0571a, "dev_err" },
	{ 0xc45328ad, "mutex_lock_interruptible" },
	{ 0x27e1a049, "printk" },
	{ 0x12a0df79, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x7da7be30, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8834396c, "mod_timer" },
	{ 0x25942518, "input_mt_init_slots" },
	{ 0xe8750fa1, "serio_close" },
	{ 0xe39e7c05, "serio_open" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x165c638, "device_create_file" },
	{ 0xad436042, "dev_notice" },
	{ 0xb529515a, "_dev_info" },
	{ 0x78764f4e, "pv_irq_ops" },
	{ 0x27632c69, "ps2_command" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xf568fa1e, "input_register_device" },
	{ 0x43261dca, "_raw_spin_lock_irq" },
	{ 0xc998d8bd, "input_free_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x52159bf0, "ps2_init" },
	{ 0xd61adcbd, "kmem_cache_alloc_trace" },
	{ 0x52c549c4, "serio_reconnect" },
	{ 0x19264a2c, "__serio_register_port" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f95450a, "input_unregister_device" },
	{ 0xd16295fb, "input_mt_report_slot_state" },
	{ 0xb32d2b4a, "ps2_cmd_aborted" },
	{ 0x3c7d99b6, "dev_warn" },
	{ 0x28318305, "snprintf" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x10519fe3, "dev_get_drvdata" },
	{ 0x365ab83a, "ps2_begin_command" },
	{ 0x6a5bb4f8, "queue_delayed_work" },
	{ 0x2c2deb57, "input_allocate_device" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty05pr*id*ex*");

MODULE_INFO(srcversion, "E8566C6FC2A58F6472C204B");
