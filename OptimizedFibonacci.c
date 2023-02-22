#include <stdio.h>

long fiboCache[];
long fibonacci(int);

int main()
{
  int n = 50;
  // fiboCache[n];

  printf("%dth fibonacci number is : %lu\n", n, fibonacci(n));

  for (int i = 0; i < n; i++)
  {
    printf("%ld ", fiboCache[i]);
  }
}

long fibonacci(int n)
{
  if (n < 2)
  {
    return n;
  }

  if (fiboCache[n] != 0)
  {
    return fiboCache[n];
  }

  long nthFibonacci = fibonacci(n - 1) + fibonacci(n - 2);

  fiboCache[n] = nthFibonacci;

  return nthFibonacci;
}