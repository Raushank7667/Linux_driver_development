#include<linux/module.h>
#include<linux/init.h>

static int __init my_init(void){
	printk("Better hello Kernel\n");
		return 0;
}
static void __exit my_exit(void){
	printk("Exiting from better Kernel Module \n");
}

module_init(my_init);
module_exit(my_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("RAUSHAN kUMAR <kumarraushan.aic@gmail.com> ");
MODULE_DESCRIPTION("A simple hello world linux kernel Module");

