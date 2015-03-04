obj-m += make_pie.o
make_pie-objs := make_pie_entry.o apple.o pumpkin.o

ifeq ($(LINUX_SRC),)
LINUX_SRC = /lib/modules/$(shell uname -r)/build
endif

# EXTRA_CFLAGS := -I$(src)

all:
	$(MAKE) -C $(LINUX_SRC) M=$(PWD) modules
clean:
	$(MAKE) -C $(LINUX_SRC) M=$(PWD) clean