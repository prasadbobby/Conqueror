#include <lib.h>

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
