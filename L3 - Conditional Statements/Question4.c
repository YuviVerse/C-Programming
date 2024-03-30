#include <stdio.h>

int main()
{ // Problem: What is the output when day is Wednesday?
  char *day = "Wednesday";
  printf("\nBlock 4: ");
  switch (day[0])
  {
  case 'M':
    printf("Monday\n");
    break;
  case 'W':
    printf("Wednesday\n");
    break;
  case 'F':
    printf("Friday\n");
    break;
  default:
    printf("Not Monday, Wednesday, or Friday\n");
  }
}