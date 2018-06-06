TOPDIR=./../..

TARGET=t_fibonacci

LIBPATH=$(TOPDIR)/lib
EXEPATH=$(TOPDIR)/bin

CFLAGS+= -I$(TOPDIR)/include/q_fibonacci 
CFLAGS+= -I$(TOPDIR)/include/q_print 

LDFLAGS= -L$(TOPDIR)/lib

LDFLAGS+= -lq_fibonacci
LDFLAGS+= -lq_print

include $(TOPDIR)/Makefile.env
