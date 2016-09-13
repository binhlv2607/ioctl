ifeq ($(KERNELRELEASE),)
	KERNEL_SOURCE ?= /lib/modules/$(shell uname -r)/build
	PWD := $(shell pwd)
default: module query_app1
module:
	$(MAKE) -C $(KERNEL_SOURCE) SUBDIRS=$(PWD) modules
clean:
	$(MAKE) -C $(KERNEL_SOURCE) SUBDIRS=$(PWD) clean
	${RM} query_app1
else
	obj-m := query_ioctl1.o
endif
