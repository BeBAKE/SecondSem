#include <stdio.h>
long fibonacci(int);
int main()
{
  int n = 10;

  printf("%lu\n", fibonacci(n));
}
long fibonacci(int n)
{
  if (n < 2)
  {
    return n;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}