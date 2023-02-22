#include <stdio.h>
// int ROW1=3;
// int COL1=4;
// int ROW2=4;
// int COL2=3;
#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 3

int main()
{
  int mat1[ROW1][COL1], mat2[ROW2][COL2], mat3[ROW1][COL2];

  printf("Enter value of matrix row-wise ");
  for (int i = 0; i < ROW1; i++)
  {
    for (int j = 0; j < COL1; j++)
    {
      scanf("%d", &mat1[i][j]);
    }
  }

  printf("Enter value of matrix row-wise ");
  for (int i = 0; i < ROW2; i++)
  {
    for (int j = 0; j < COL2; j++)
    {
      scanf("%d", &mat2[i][j]);
    }
  }

  for (int i = 0; i < ROW1; i++)
  {
    for (int j = 0; j < COL2; j++)
    {
      mat3[i][j] = 0;
      for (int k = 0; k < COL1; k++)
      {
        mat3[i][j] += (mat1[i][k] * mat2[k][j]);
      }
    }
  }

  for (int i = 0; i < ROW1; i++)
  {
    for (int j = 0; j < COL2; j++)
    {
      printf("%d\t", mat3[i][j]);
    }
    printf("\n");
  }
}
