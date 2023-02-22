#include <stdio.h>
int main()
{
  int num, flag = 0, temp;
  printf("Enter the digit : ");
  scanf("%d", &num);
  temp = num;
  // while(num>0){
  //   num/=10;
  //   flag++;
  // }
  do
  {
    num /= 10;
    flag++;
  } while (num > 0);
  printf("Total number of digits in %d is %d\n", temp, flag);

  return 0;
}