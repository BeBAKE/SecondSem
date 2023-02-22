#include <stdio.h>
int main()
{
  float p, r, t;
  printf("Enter the value of principle amount : ");
  scanf("%f", &p);
  printf("Enter the value of rate : ");
  scanf("%f", &r);
  printf("Enter the value of time : ");
  scanf("%f", &t);
  float simpleInt = (p * r * t) / 100.0;
  printf("Value of Simple Interest is %f ", simpleInt);
  return 0;
}