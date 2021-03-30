#include <syscall.h>
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
	_syscall(SYS_write, (void *)1, str, (void *)str_len(str), 0, 0, 0);
}

int str_eq(char *a, char *b)
{
	char ca = *a;
	char cb = *b;
	
	for(; ca != 0 && cb != 0; ca = *(++a), cb = *(++b))
	{
		if (ca != cb)
		{
			return 0;
		}
	}
	return ca == cb;
}

