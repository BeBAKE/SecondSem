#include <stdio.h>
int main()
{
  int x = 10;
  float a = 23;
  int *y = &x;
  float *b = &a;
  printf("size of x =%x , *y = %u", sizeof(x), sizeof(*y));
  printf("\n");
  printf("size of a =%lu , *b = %lu", sizeof(a), sizeof(*b));
}