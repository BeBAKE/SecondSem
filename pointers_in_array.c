#include <stdio.h>
int main()
{
  int x[5] = {1, 2, 3, 4, 5};
  int *p;
  p = &x[0]; // or p=&x;
  printf("%d\n", x[0]);
  printf("%d\n", *p);
  printf("%d\n", *p++);
  printf("%d\n", ++*p);
  printf("%d\n", *++p);
  printf("%d\n", *(p + 2));
  p = &x[3];
  printf("%d\n", *p - 1); // first it will go to x[3] i.e 4 then decrement by 1.
}