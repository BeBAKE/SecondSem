#include <stdio.h>
void PFactors(int num);
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Primefactorsof%dare:\n", num);
  PFactors(num);
  return 0;
}

void PFactors(int num)
{
  int i = 2;
  if (num == 1)
  {
    return;
  }
  while (num % i != 0)
  {
    i++;
  }
  printf("%d\t", i);
  PFactors(num / i);
}