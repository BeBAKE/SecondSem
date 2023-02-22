#include <stdio.h>
int main()
{
  int i, j;
  int matrix[2][3] = {{2, 4, 8}, {1, 10, 9}};
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("[%d]", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}