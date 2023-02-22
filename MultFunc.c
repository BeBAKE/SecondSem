#include <stdio.h>
int multiplication(int, int);

int main()
{
  int a, b, mult;
  printf("Enter two numbers : ");
  scanf("%d%d", &a, &b);

  mult = multiplication(a, b);

  printf("multiplication of %d and %d is %d\n", a, b, mult);
}
int multiplication(int a, int b)
{
  int result = a * b;
  return result;
}