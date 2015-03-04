#include "libpie.h"

char *makeup = "apple";

module_param(makeup, charp, 0);
module_init(make_pie_init);
module_exit(make_pie_exit);

int __init make_pie_init(void)
{
	if (strcmp(makeup, "apple") == 0) {
		return make_apple();
	} else if (strcmp(makeup, "pumpkin") == 0) {
		return make_pumpkin();
	}
	printk(KERN_INFO "YuLun is making unknown target: %s\n", makeup);

	return 0;
}

void __exit make_pie_exit(void)
{
	printk(KERN_INFO "Goodbye, world 2\n");
}

MODULE_PARM_DESC(makeup, "What do you want to make?");
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("YuLun Shih");
MODULE_DESCRIPTION("This is a simple kernel module");
