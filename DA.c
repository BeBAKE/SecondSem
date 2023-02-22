#include <stdio.h>
#include <stdlib.h>

int main()
{
  float *arr1;
  int length;
  printf("Enter length of dynamic array 1 : ");
  scanf("%d", &length);
  arr1 = (float *)malloc(length * sizeof(float));

  for (int i = 0; i < length; i++)
  {
    scanf("%f", &arr1[i]);
  }

  for (int i = 0; i < length; i++)
  {
    printf("%f ", arr1[i]);
  }

  printf("Enter length of new dynamic array 1 : ");
  scanf("%d", &length);
  arr1 = (float *)realloc(arr1, length * sizeof(float));

  for (int i = 0; i < length; i++)
  {
    scanf("%f", &arr1[i]);
  }

  for (int i = 0; i < length; i++)
  {
    printf("%f ", arr1[i]);
  }
}
