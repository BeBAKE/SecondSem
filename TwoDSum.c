#include <stdio.h>
int main()
{
  int array1[2][3] = {{1, 2, 3}, {2, 4, 6}};
  int array2[2][3] = {{5, 6, 7}, {8, 9, 10}};
  int sum[2][3];
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      sum[i][j] = array1[i][j] + array2[i][j];
    }
  }
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("[%d] ", sum[i][j]);
    }
    printf("\n");
  }
  return 0;
}