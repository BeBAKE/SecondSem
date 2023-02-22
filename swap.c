#include <stdio.h>
void swap(int *, int *);

int main()
{
  int a, b;
  printf("Enter two numbers : ");
  scanf("%d%d", &a, &b);
  printf("a=%d and b=%d before swapping\n", a, b);
  swap(&a, &b);
  printf("a=%d and b=%d after swapping\n", a, b);
  return 0;
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
  printf("a=%d and b=%d after swapping\n", *a, *b);
}
