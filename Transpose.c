#include <stdio.h>
#define ROW 4
#define COL 3
int main()
{
  int mat1[ROW][COL] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {22, 33, 44}}, mat2[COL][ROW];

  // printf("Enter values for matrix 1 row-wise");
  // for (int i = 0; i < ROW; i++)
  // {
  //   for (int j = 0; j < COL; i++)
  //   {
  //     scanf("%d", &mat1[i][j]);
  //   }
  // }

  for (int i = 0; i < COL; i++)
  {
    for (int j = 0; j < ROW; j++)
    {
      mat2[i][j] = mat1[j][i];
    }
  }

  for (int i = 0; i < COL; i++)
  {
    for (int j = 0; j < ROW; j++)
    {
      printf("%d\t", mat2[i][j]);
    }
    printf("\n");
  }
}