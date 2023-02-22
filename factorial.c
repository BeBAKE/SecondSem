#include <stdio.h>
int fact(int);

int main()
{
  int num, flag;
  printf("Enter the number : ");
  scanf("%d", &num);
  if (fact(num) != 0)
  {
    printf("factorial of %d is %d\n", num, fact(num));
  }
}

int fact(int num)
{
  int flag = num - 1;
  if (num <= 0)
  {
    if (num == 0)
    {
      return 1;
    }
    else
    {
      printf("Negative numbers don't have factorials\n");
      return 0;
    }
  }
  while (flag > 0)
  {
    num *= flag;
    flag--;
  }
  return num;
}