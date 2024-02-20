#include <stdio.h>

int main()
{
  int x; 
  float y; 
  double z; 
  char c; 

  x = 4;
  y = 1.2;
  z = 2.456745;
  c = 'a';

  printf("Enter number:\n");
  scanf("%d%f", &x, &y);
  printf("Enter Character:\n");
  scanf(" %c", &c);

  printf("Everything else:\n");
  printf("The X is: %d\n The float is: %f\n %lf \n%c", x, y, z, c);

  x
}