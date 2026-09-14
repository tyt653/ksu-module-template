#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("tyt653");
MODULE_DESCRIPTION("Simple KSU Kernel Module Demo");
MODULE_VERSION("1.0");

static int __init rabbit_mod_init(void)
{
    pr_info("🐰 Rabbit KSU module loaded!\n");
    return 0;
}

static void __exit rabbit_mod_exit(void)
{
    pr_info("🐰 Rabbit KSU module unloaded!\n");
}

module_init(rabbit_mod_init);
module_exit(rabbit_mod_exit);
