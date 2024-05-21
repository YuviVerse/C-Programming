#include <stdio.h>

//#define DEBUG

int main()
{
#ifdef DEBUG
  printf("THIS IS A DEBUG LOG");
#endif

  return 0;
}


