#include <stdio.h>
int division(int a, int y);
int main()
{
  int n1, n2, qoutient;
  printf("enter the two number : ");
  scanf("%d%d", &n1, &n2);

  printf("division of %d and %d is %d\n", n1, n2, division(n1, n2));
  return 0;
}
int division(int x, int y)
{
  int result;
  result = x / y;
  return result;
}