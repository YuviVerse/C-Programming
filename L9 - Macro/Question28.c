#include <stdio.h>
#define VERSION 2
int main()
{
#if VERSION == 1
  printf("Version 1\n");
#elif VERSION == 2
  printf("Version 2\n");
#else
  printf("Unknown version\n");
#endif
  return 0;
}
