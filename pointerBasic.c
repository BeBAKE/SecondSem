#include <stdio.h>
int main()
{
  int x = 10;
  int *y = &x;
  printf("value of x=%d %d %d\n", x, *y, *(&x));
  printf("%p\n", &x);
  printf("%p\n", y);
  printf("%d\n", *y);
  printf("%p\n", &y);
}