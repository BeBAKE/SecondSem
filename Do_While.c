#include <stdio.h>
int main()
{
  int num, count = 0;
  printf("Enter the number : ");
  scanf("%d", &num);
  do
  {
    count++;
    printf("%d\n", count);
  } while (num > count);

  printf("no of digits : %d\n", count);
  return 0;
}