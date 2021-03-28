LDFLAGS = -shared
TARGET = lib.so

CSOURCES = $(shell echo *.c)
SSOURCES = $(shell echo *.s)

OBJECTS = $(CSOURCES:.c=_c.o)
OBJECTS += $(SSOURCES:.S=_S.o)

BINDER = $(PREFIX)/lib

all: $(TARGET)
