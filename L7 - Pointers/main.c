#include <stdio.h>
void swap(int* x, int* y);
int main()
{
  int arr[] = {1,6,5};
printf("arr = %d\n", sizeof(arr));
  swap(arr, &arr[1]);
  

  return 0;
}

void swap(int* x, int* y){
  printf("x = %d", sizeof(x));
}