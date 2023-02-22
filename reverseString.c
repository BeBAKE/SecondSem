#include <stdio.h>
#include <string.h>
int main()
{
  char name[20], rev[20];
  printf("Enter name : ");
  gets(name);
  int count = 0;
  for (int i = strlen(name) - 1; i >= 0; i--)
  {
    rev[count] = name[i];
    count++;
  }
  printf("reverse is : %s \n", rev);
  // puts(rev);
}