#include <stdio.h>
int main()
{
  int arr[8], sum = 0;
  for (int i = 0; i < 8; i++)
  {
    printf("Enter the %dth element to add in the array :", i);
    scanf("%d", &arr[i]);
  }
  printf("\n");

  for (int i = 0; i < 8; i++)
  {
    sum += arr[i];
  }

  printf("sum of the elements of the array is : %d\n", sum);

  return 0;
}