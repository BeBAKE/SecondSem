#include <stdio.h>
int sum(int, int);

int main()
{
  int a, b, add;
  printf("Enter two numbers : ");
  scanf("%d%d", &a, &b);

  add = sum(a, b);

  printf("Sum of %d and %d is %d\n", a, b, add);
}
int sum(int a, int b)
{
  int result = a + b;
  return result;
}