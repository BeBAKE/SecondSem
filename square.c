#include <stdio.h>
float square();

int main()
{
  printf("calculate sq of area\n");
  float area = square();
  printf("area of sq is %f\n", area);
}
float square()
{
  int side;
  printf("enter the side : ");
  scanf("%d", &side);
  return (side * side);
}