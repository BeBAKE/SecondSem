#include <stdio.h>
int main()
{
  int sort[10] = {10, 14, 100, 21, 97, 28, 1, 7, 6, 80};
  int i, j, temp;
  for (i = 0; i < 10; i++)
  {
    for (j = i + 1; j < 10; j++)

      if (sort[j] < sort[i])
      {
        temp = sort[i];
        sort[i] = sort[j];
        sort[j] = temp;
      }
  }
  printf("the sorted array is\n");

  for (i = 0; i < 10; i++)
  {
    printf("%d ", sort[i]);
  }
  printf("\n");
}