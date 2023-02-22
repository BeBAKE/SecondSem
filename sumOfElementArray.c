#include <stdio.h>
int main()
{
  int arr1[10] = {1, 23, 12, 2, 5, 7, 5, 54, 85, 54};
  int arr2[10] = {1, 23, 12, 2, 10, 7, 5, 54, 85, 54};
  int sum[10];
  for (int i = 0; i < 10; i++)
  {
    sum[i] = arr1[i] + arr2[i];
  }
  for (int i = 0; i < 10; i++)
  {
    printf("%d\n", sum[i]);
  }
}