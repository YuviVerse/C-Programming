#include <stdio.h>
#undef DEBUG
int main()
{
#ifndef DEBUG
  printf("Debug mode is off.\n");
#else
  printf("Debug mode is on.\n");
#endif
  printf("Program is running.\n");
  return 0;
}