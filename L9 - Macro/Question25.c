#include <stdio.h>
#define PRINT_MATRIX(matrix, rows, cols) \
  {                                      \
    for (int i = 0; i < rows; i++)       \
    {                                    \
      for (int j = 0; j < cols; j++)     \
      {                                  \
        printf("%d ", matrix[i][j]);     \
      }                                  \
      printf("\n");                      \
    }                                    \
  }
int main()
{
  int matrix[2][2] = {{1, 2}, {3, 4}};
  PRINT_MATRIX(matrix, 2, 2);
  return 0;
}
