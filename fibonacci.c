#include <stdio.h>
void fibonacci(int num); // funtion prototype
int main()
{
  int num;
  printf("Enter the number of times you want to print fibonacci series : ");
  scanf("%d", &num);
  fibonacci(num); // funtion call
  return 0;
}
void fibonacci(int num) // funtion definition
{
  int sum = 1, lead = 1, last = 0;
  num -= 1;
  printf("%d ", last);
  while (num > 0)
  {
    num--;
    printf(" ,%d", sum);
    sum = lead + last;
    last = lead;
    lead = sum;
  }
  printf("\n");
}