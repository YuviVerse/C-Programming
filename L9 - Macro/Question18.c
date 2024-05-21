#include <stdio.h>
#define DECREMENT(x) (--(x))
int main()
{
  int x = 5;
  printf("%d\n", DECREMENT(x));
  return 0;
}
