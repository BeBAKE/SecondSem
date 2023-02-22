#include <stdio.h>
#include <stdlib.h>
int main()
{
  // // Use of malloc
  // int *ptr;
  // int length;
  // printf("Entere the size of the array\n");
  // scanf("%d", &length);
  // ptr = (int *)malloc(length * sizeof(int));

  // // Making dynamically allocated array
  // for (int i = 0; i < 3; i++)
  // {
  //   printf("Enter the value of %dth : ", i);
  //   scanf("%d", &ptr[i]);
  // }

  // for (int i = 0; i < 4; i++)
  // {
  //   printf("The value at %d of this array is %d\n", i, *(ptr + i));
  //   // *(ptr + i) can also be written as ptr[i]
  // }

  // Use of calloc
  int *ptr;
  int length;
  printf("Entere the size of the array\n");
  scanf("%d", &length);
  ptr = (int *)calloc(length, sizeof(int));

  for (int i = 0; i < length; i++)
  {
    printf("Enter the value of %dth : ", i);
    scanf("%d", ptr + i); // or &ptr[i]
  }
  for (int i = 0; i < length; i++)
  {
    printf("The value at %d of this array is %d\n", i, *(ptr + i));
  }

  // Use of realloc
  printf("Enter the new length of the array : ");
  scanf("%d", &length);
  ptr = (int *)realloc(ptr, length * sizeof(int));

  for (int i = 0; i < length; i++)
  {
    printf("Enter the value of %dth : ", i);
    scanf("%d", &ptr[i]);
  }
  for (int i = 0; i < length; i++)
  {
    printf("The value at %d of this array is %d\n", i, *(ptr + i));
  }

  // Using free
  free(ptr);
}