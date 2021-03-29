#include <syscall.h>
#include <fcntl.h>
#include <lib.h>

int main() 
{
	char *msg = "Conqueror_1.0 Initializing";
	sleep_sec(1);
	
	str_print(msg);
	sleep_sec(1);
	char buff[255];
	char *filename = "/src/init/init.c";
	str_print("Opening file; ");
	str_print(filename);
	str_print("\n");
	
	unsigned long fd = sys_open(filename, O_RDONLY);
	sys_read(fd, buff, sizeof(buff));
	str_print(buff);
	while(1)
	{
		sleep_sec(1);
		str_print("CONQUEROR LOADING\n");
	}
	return 0;
}

