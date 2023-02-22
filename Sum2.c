#include <stdio.h>
void sum();

int main()
{
  printf("Calculate sum of two numbers\n");
  sum();
  return 0;
}
void sum()
{
  int a, b, result;
  printf("Enter two numbers : ");
  scanf("%d%d", &a, &b);

  result = a + b;

  printf("sum of %d and %d is %d\n", a, b, result);
}