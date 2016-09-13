ifeq ($(KERNELRELEASE),)
	KERNEL_SOURCE ?= /lib/modules/$(shell uname -r)/build
	PWD := $(shell pwd)
default: module query_app
module:
	$(MAKE) -C $(KERNEL_SOURCE) SUBDIRS=$(PWD) modules
clean:
	$(MAKE) -C $(KERNEL_SOURCE) SUBDIRS=$(PWD) clean
	${RM} query_app
else
	obj-m := query_ioctl.o
endif
