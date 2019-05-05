#include <linux/kernel.h>

asmlinkage long sys_manikanta(void)
{
        printk("mk system call\n");
        return 0;
}
