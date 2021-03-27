#include <syscall.h>

unsigned long open_file(char *fn, int flags)
{
	return _syscall(SYS_open, fn, flags, 0, 0, 0, 0);
}

unsigned long read_file(unsigned long fd, char *buff, unsigned long size)
{
	return _syscall(SYS_read, fd, buff, size, 0, 0, 0);
}

unsigned long _strlen(char *sz)
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

void print_string(char *str)
{
	_syscall(SYS_write, (void *)1, str, (void *)_strlen(str), 0, 0, 0);
}
