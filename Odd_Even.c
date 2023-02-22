#include <stdio.h>
int even_odd(int);

int main()
{
  int num;
  printf("Enter a number : ");
  scanf("%d", &num);

  int check = even_odd(num);

  if (check == 0)
  {
    printf("Entered number is even\n");
  }
  else
  {
    printf("Entered number is odd\n");
  }
  return 0;
}

int even_odd(int num)
{
  if (num % 2 == 0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}