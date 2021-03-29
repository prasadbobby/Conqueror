#include <lib.h>
#include <fcntl.h>
#include <time.h>

unsigned long console_fd = 0;
void console_open()
{
  console_fd = sys_open("/dev/console/", O_RDWR | O_NDELAY);
}

char console_read()
{
  char c = 0;
  while(!sys_read(console_fd, &c, 1))
  {
    struct timespec ts;
    ts.tv_sec = 0;
    ts.tv_nsec = 10000;
    sys_nanosleep(&ts, NULL);
  }
  retun c;
}
