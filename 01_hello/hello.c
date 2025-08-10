#include<linux/module.h>
#include<linux/init.h>
int my_init(void){

	printk("hello Kernel!\n");
	return 0;
}
void my_end(void){
	printk("bye bye kernel!\n");
}
module_init(my_init);
module_exit(my_end);

MODULE_LICENSE("GPL");
