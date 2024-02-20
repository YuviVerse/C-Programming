#include <stdio.h>

float CalculateCircle(int);
void PrintCalculation(int);

int main()
{
  int r = 3;
  int r2 = 5;
  int r3 = 9;

  PrintCalculation(r);
  PrintCalculation(r2);
  PrintCalculation(r3);

  return 0;
}

float CalculateCircle(int r){
  return r * r * 3.14;
}

void PrintCalculation(int r){
  printf("%f\n", CalculateCircle(r));
}



