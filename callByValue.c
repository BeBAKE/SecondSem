
// call by reference means passing value in parameters of a funtion and the            //change in value will reflect in the scope of callee.

#include <stdio.h>
void callByValue(int a, int b);       // functio_1 prototype
void callByReference(int *a, int *b); // function_2 prototype
int main()
{
  int a, b, temp;
  a = 3;
  b = 4;
  printf("\nFirst External value of a = %d and b = %d\n", a, b);
  // callByValue(a, b);
  // printf("Second External value of a = %d and b = %d\n", a, b);
  callByReference(&a, &b);
  printf("Second External value of a = %d and b = %d\n", a, b);
  return 0;
}
void callByValue(int a, int b)
{
  a += 10;
  b += 10;
  printf("Internal value of a = %d and b = %d\n", a, b);
}
void callByReference(int *a, int *b)
{
  *a += 100;
  *b += 100;
  printf("Internal value of a = %d and b = %d\n", *a, *b);
}