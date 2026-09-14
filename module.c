#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rabbit");
MODULE_DESCRIPTION("A cute rabbit kernel module for Neo7 Turbo Dimensity9400e");

static int __init rabbit_init(void)
{
    pr_info("🐰 Rabbit module loaded! Hello my bunny girl!\n");
    return 0;
}

static void __exit rabbit_exit(void)
{
    pr_info("🐰 Rabbit module unloaded, bye bye~\n");
}

module_init(rabbit_init);
module_exit(rabbit_exit);
