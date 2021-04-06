#include <stdio.h>
#include <src/include/lib.h>
#include <src/include/lash.h>
void kernel_boot();
int main()
{
  char *kernel = "/dev/boot/kernel.c";
  kernel_boot();
  printf("%d",param);
  return 0;
}
void kernel_boot()
{
  int param = 0x10;
  return param;
}
