#include <lib.h>
#include <fcntl.h>
#include <time.h>

unsigned long console_fd = 0;
void console_open()
{
  console_fd = sys_open("/dev/console/", O_RDWR | O_NDELAY);
}
