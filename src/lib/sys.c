#include <syscall.h>
#include <lib.h>
unsigned long sys_open(char *fn, int flags)
{
	return _syscall(SYS_open, fn, (void *)(long)flags, 0, 0, 0, 0);
}

unsigned long sys_read(unsigned long fd, char *buff, unsigned long size)
{
	return _syscall(SYS_read, fd, (void *)buff, (void *)size, 0, 0, 0);
}


