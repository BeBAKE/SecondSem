#include <stdio.h>
int main()
{
  char *ptr;
  ptr = "kumar";
  printf("%c\n", &**&ptr);
}