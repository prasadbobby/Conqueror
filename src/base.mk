SHELL ?= /bin/sh
CC ?= gcc
FLAGS ?= -nostdlib -I../include
MYOS_PATH ?= /mnt/Conqueror
DESTDIR ?= /mnt/Conqueror


PREFIX ?= $(DESTDIR)
BINDIR ?= $(PREFIX?)/sbin
