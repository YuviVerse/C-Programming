#include <stdio.h>
#define OS_WINDOWS
int main()
{
#ifdef OS_WINDOWS
  printf("Running on Windows.\n");
#elif defined(OS_LINUX)
  printf("Running on Linux.\n");
#else
  printf("Unknown operating system.\n");
#endif
  return 0;
}
