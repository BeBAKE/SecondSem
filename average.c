#include <stdio.h>
void average(int, int, int, int);

int main()
{
  int a, b, c, d;
  printf("Calculate average of 4 numbers\n");
  printf("Enter value of 4 numbers\n");
  scanf("%d%d%d%d", &a, &b, &c, &d);

  average(a, b, c, d);

  return 0;
}

void average(int a, int b, int c, int d)
{
  float result = (a + b + c + d) / 4.0;
  printf("Average of %d, %d, %d, %d is %f\n", a, b, c, d, result);
}
