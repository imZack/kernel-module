#ifndef LIBPIE_H_
#define LIBPIE_H_
#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */
#include <linux/init.h>		/* Needed for the macros */

int __init make_pie_init(void);

void __exit make_pie_exit(void);

int make_apple(void);

int make_pumpkin(void);

#endif /* LIBPIE_H_ */