#include <stdio.h>

int main()
{

  int a[] = {1, 2, 3, 4, 5, 6, 7, 8}, temp;

  for (int i = 0, j = 7; i < j; i++, j--)
  {
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
  }
  for (int i = 0; i < 8; i++)
  {
    printf("%d j", a[i]);
  }
}