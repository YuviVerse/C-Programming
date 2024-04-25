#include <stdio.h>
int func(int num);
void printStuff(int num);
void PrintArray(char* arr);

int main()
{
  // int sum = func(5);
  // printf("%d", sum);
  
  // printStuff(3);

  char arr[] = {"YuviVerse"};
  PrintArray(arr);

  return 0;
}

void PrintArray(char *arr){
  if (*arr == '\0')
  {
    return;
  }

  printf("%c", *arr);
  
  PrintArray(arr + 1);
}

void printStuff(int num){
  
  if (num == 0)
  {
    return;
  }

  printf("Before %d\n", num);
  printStuff(num - 1);
  printf("After %d\n", num);

  return;
}

int func(int num){

  if (num == 0)
  {
    return 0;
  }

  return func(num - 1) + num;
}

