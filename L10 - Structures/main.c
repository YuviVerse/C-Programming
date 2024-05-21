#include <stdio.h>

typedef struct Student
{
  char name[10];
  int age;
  float height;
} Stu;


int main()
{
  Stu s1[10] = {{"ui", 23,34.3}, {"ui", 23,34.3}, {"ui", 23,34.3}, {"ui", 23,34.3}};
  s1[0].age = 20;
  
  Stu s2 = {"ui", 23,34.3};

  Stu* sP = s1;
  printf("%f", sP->height);

  return 0;
}
