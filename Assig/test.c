#include <linux/module.h> // included for all kernel modules
#include <linux/kernel.h> // included for KERN_INFO
#include <linux/init.h> // included for __init and __exit macros
#include <linux/proc_fs.h>
#include <linux/sched.h>
#include<linux/pid_namespace.h>
#include<linux/pid.h>
static int pid;
struct task_struct *task;
static int __init procsched_init(void)
{
    printk(KERN_INFO "Starting kernel module!\n");
    struct pid *get_pid;
	get_pid = find_get_pid(pid);
	if (get_pid == NULL)
	   	return -1;
	else {
	    task = pid_task(get_pid, PIDTYPE_PID);	
        printk(KERN_INFO "pid = %d\n",task->pid);
        printk(KERN_INFO "pcount = %lu\n",task->sched_info.pcount);
        printk(KERN_INFO "run_delay = %llu\n",task->sched_info.run_delay);
        printk(KERN_INFO "last_arrival = %llu\n",task->sched_info.last_arrival);
        printk(KERN_INFO "last_queued = %llu\n",task->sched_info.last_queued);
        return 0;
    }
    return 1;
}
static void __exit procsched_cleanup(void)
{
    printk(KERN_INFO "Cleaning up module.\n");
}
MODULE_LICENSE("GPL");
module_init(procsched_init);
module_exit(procsched_cleanup);
module_param(pid, int , 0);
