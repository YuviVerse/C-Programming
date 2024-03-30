#include <stdio.h>

int main()
{
  // Problem: Guess the output based on the value of a and b
  int a = 5, b = 5;
  printf("Block 3: ");
  if (a == b)
    printf("a equals b. ");
  if (a++ > b)
    printf("a is greater than b after increment. ");
  else
    printf("a is not greater than b after increment. ");
}