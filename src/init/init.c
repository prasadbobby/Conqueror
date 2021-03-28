#include <syscall.h>
#include <fcntl.h>
#include <lib.h>

int main() 
{
	char *msg = "Conqueror_1.0 Initializing";
	delay(100000000);
	
	print_string(msg);
	delay(100000000);
	char buff[255];
	char *filename = "/src/init/init.c";
	print_string("Opening file; ");
	print_string(filename);
	print_string("\n");
	
	unsigned long fd = open_file(filename, O_RDONLY);
	read_file(fd, buff, sizeof(buff));
	print_string(buff);
	while(1)
	{
		delay(100000000);
		print_string("CONQUEROR LOADING\n");
	}
	return 0;
}

