#include <stdio.h>
void swap(int* x, int* y);
int main()
{
  int arr[] = {1,6};

  swap(arr, &arr[1]);
  
  for (int i = 0; i < 2; i++)
  {
    printf("%d ", arr[i]);
  }

  return 0;
}

void swap(int* x, int* y){
  int temp = *x;
  *x = *y;
  *y = temp;
}