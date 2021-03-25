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

void print_string(char *str)
{
	_syscall(SYS_write, (void *)1, str, (void *)_strlen(str), 0, 0, 0);
}

int main() 
{	
	char *msg = "Conqueror OS";
	delay(1000000000);
	print_string(msg);
	while(1)
	{	
		delay(100000000);
		print_string("tick\n");
	return 0;
}

