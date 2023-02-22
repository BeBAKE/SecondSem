#include <stdio.h>
int main()
{
  int a = 43;
  int *ptra = &a;
  int *ptrp = ptra;
  printf("Address of a is : %x\n", &a);
  printf("Address of a is : %x\n", ptra);
  printf("value of a is : %d\n", *ptra);
  printf("Address of pointer is : %p\n", ptrp);
  printf("Address of pointer is : %x\n", &ptra);
}