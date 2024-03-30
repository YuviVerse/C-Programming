#include <stdio.h>

int main()
{
  // Problem: What is the output if x is less than 10 but not less than 5?
  int x = 7;
  printf("Block 1: ");
  if (x < 10)
  {
    if (x < 5)
    {
      printf("x is less than 5.\n");
    }
    else
    {
      printf("x is less than 10 but not less than 5.\n");
    }
  }
  else
  {
    printf("x is 10 or more.\n");
  }

  return 0;
}
