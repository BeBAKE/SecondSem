#include <stdio.h>
int main()
{
  // int sort[8]={21,32,3,2,57,6,576,12};
  int sort[8], sum = 0;
  for (int i = 0; i < 8; i++)
  {
    printf("Enter the %dth element to add in the array :", i);
    scanf("%d", &sort[i]);
  }
  printf("\n");
  for (int i = 0; i < 8; i++)
  {
    sum += sort[i];
    // printf("%d\n",sort[i]);
  }
  printf("sum of the elements of the array is : %d\n", sum);
  return 0;
}