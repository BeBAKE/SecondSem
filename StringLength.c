#include <stdio.h>
int main()
{
  char name[5] = "go";

  int len = sizeof(name) / sizeof(char);
  int actual;

  for (int i = 0; i < len; i++)
  {
    if (name[i] == '\0')
    {
      actual = i;
      break;
    }
  }
  printf("length of name array is %d\n", actual);
}