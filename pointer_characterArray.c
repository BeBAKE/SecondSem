#include <stdio.h>
int main()
{
  // read *s[] as array of pointers
  char *s[] = {"gate", "gatesmashers", "vivek", "trending"};

  printf("String = %s\n", *s);
  // printf("String = %s\n", *(s + 1));
  // printf("String = %s\n", *(s + 3) + 2);
}