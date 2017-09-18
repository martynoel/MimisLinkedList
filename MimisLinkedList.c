/* Mimi Chenyao */
/* Operating Systems */
/* Project 2 */

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/list.h>
#include <linux/types.h> 

struct birthday {
	int day;
	int month;
	int year;
	struct list_head list;
}

static LIST_HEAD(birthday_list);

/* Module entry point */

int mimisLinkedList_init(void) {

/* Creating each birthday struct in list */

	printk(KERN_INFO "Creating birthday list\n")

	struct birthday *mimi;
	mimi = kmalloc(sizeof(*mimi), GFP_KERNEL);
	mimi->day = 2;
	mimi->month = 7;
	mimi->year = 1996;
	INIT_LIST_HEAD(&mimi->list);
	list_add_tail(&mimi->list, &birthday_list);

	struct birthday *ross;
	ross = kmalloc(sizeof(*ross), GFP_KERNEL);
	ross->day = 24;
	ross->month = 5;
	ross->year = 1996;
	INIT_LIST_HEAD(&ross->list);
	list_add_tail(&ross->list, &birthday_list);

	struct birthday *leo;
	leo = kmalloc(sizeof(*leo), GFP_KERNEL);
	leo->day = 6;
	leo->month = 6;
	leo->year = 1996;
	INIT_LIST_HEAD(&leo->list);
	list_add_tail(&leo->list, &birthday_list);

	struct birthday *angelo;
	angelo = kmalloc(sizeof(*angelo), GFP_KERNEL);
	angelo->day = 7;
	angelo->month = 8;
	angelo->year = 1997;
	INIT_LIST_HEAD(&angelo->list);
	list_add_tail(&angelo->list, &birthday_list);

	struct birthday *billy;
	billy = kmalloc(sizeof(*billy), GFP_KERNEL);
	billy->day = 25;
	billy->month = 4;
	billy->year = 1996;
	INIT_LIST_HEAD(&billy->list);
	list_add_tail(&billy->list, &birthday_list);

/* Traversing the list */

	printk(KERN_INFO "Traversing birthday list\n");

	birthday *birthdayPtr;

	list_for_each_entry(birthdayPtr, &birthday_list, list) {
		printk(KERN_INFO "BIRTHDAY: Month: %d Day: %d Year: %d\n", 
			ptr->month, 
			ptr->day,
			ptr->year);
	}

	return 0;
}

/* Module exit point */

void mimisLinkedList_exit(void) {

	printk(KERN_INFO "Removing module\n");

/* Removes each struct from list */

	list_for_each_entry_safe(ptr, next, &birthday_list, list) {
		printk(KERN_INFO "REMOVING BIRTHDAY: Month: %d Day: %d Year: %d\n",
			ptr->month,
			ptr->day,
			ptr->year);

		list_del(&ptr->list);
		kfree(ptr);
	}
}

/* Register module entry/exit pts */

module_init(mimisLinkedList_init);
module_exit(mimisLinkedList_exit);

MODULE_LICENSE("IDEK CORPORATION");
MODULE_DESCRIPTION("Mimi's friends' bdays");
MODULE_AUTHOR("Mimi Chenyao");
