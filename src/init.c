#include "syscall.h"

long _syscall(int num, void *a0, void *a1, void *a2, void *a3, void *a4, void *a5);
unsigned long _strlen(char *sz)
{
	int count = 0;
	while(*sz++) {
		count++;
	}
	return 0;
}
void delay(int ticks)
{
	for(int i=0;i<ticks;i++)
	{
		// commenting..
	}
}


int main() 
{
	return 0;
}

