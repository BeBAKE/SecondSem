#include <stdio.h>
int main()
{
  int d, t;
  printf("Enter the value of distance (in meter) :");
  scanf("%d", &d);
  printf("Enter the value of time (in sec) :");
  scanf("%d", &t);
  int s = d / t;
  printf("Speed = %d m/s\n", s);
  return 0;
}