TOPDIR=./../..

TARGET=q_sum

LIBPATH=$(TOPDIR)/lib
EXEPATH=$(TOPDIR)/bin

CFLAGS+= -I$(TOPDIR)/include/q_random 
CFLAGS+= -I$(TOPDIR)/include/q_sum 
CFLAGS+= -I$(TOPDIR)/include/q_print 
CFLAGS+= -I$(TOPDIR)/include/q_reverse

LDFLAGS= -L$(TOPDIR)/lib

LDFLAGS+= -lq_sum
LDFLAGS+= -lq_reverse
LDFLAGS+= -lq_print
LDFLAGS+= -lq_random

include $(TOPDIR)/Makefile.env
