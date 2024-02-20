#include <stdio.h>

int func(int);

int z = 6;

int main()
{
  int x = 3; 

  int y = z;
  z = 4;
  func(3);
  func(3);
  func(3);
  func(3);
  // x == 3
  return 0;
}

int func(int x){
  static int i = 0;
  i++;

  printf("%d\n", i);
  printf("%d\n", z);
}

