#include <stdio.h>

int main()
{ // Problem: What is the output for num = 2?
  int num = 2;
  printf("Block 6: ");
  if (num == 1)
  {
    printf("One ");
  }
  else if (num == 2)
  {
    printf("Two ");
  }
  if (num == 2)
  {
    printf("Also Two ");
  }
  if (num < 3)
  {
    printf("Less than Three\n");
  }
}