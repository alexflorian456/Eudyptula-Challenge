#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

int p1_init(void){
	printk(KERN_DEBUG "Hello World! from %s\n", __FUNCTION__);
	return 0;
}

void p1_exit(void){
	printk(KERN_DEBUG "Goodbye World! from %s\n", __FUNCTION__);
}

module_init(p1_init);
module_exit(p1_exit);

MODULE_LICENSE("GPL");
