#include <stdio.h>
int main()
{
  int sort[8] = {-587, 32, 0, 2, -23, 6, 576, 12};
  int len = sizeof(sort) / sizeof(sort[0]);
  int min = sort[0], max = sort[0];
  for (int i = 0; i < len; i++)
  {
    if (min < sort[i])
    {
      min = sort[i];
    }
    if (max > sort[i])
    {
      max = sort[i];
    }
  }
  printf("maximum element of sort is : %d\n minimum element of sort is : %d\n", max, min);
}
