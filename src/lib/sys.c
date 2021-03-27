#include <syscall.h>
#include <lib.h>
unsigned long sys_open(char *fn, int flags)
{
	return _syscall(SYS_open, fn, flags, 0, 0, 0, 0);
}

unsigned long sys_read(unsigned long fd, char *buff, unsigned long size)
{
	return _syscall(SYS_read, fd, buff, size, 0, 0, 0);
}

unsigned str_len(char *sz)
{
	int count = 0;
	while(*sz++)
	{
		count++;
	}
	return count;
}

void delay(int ticks)
{
	for(int i=;i<ticks;i++)
	{
		// nothing happpening
	}
}

void str_print(char *str)
{
	_syscall(SYS_write, (void *)1, str, (void *)_strlen(str), 0, 0, 0);
}
