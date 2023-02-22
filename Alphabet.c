#include <stdio.h>
int main()
{
  char alpha;
  printf("Enter the alphabet : ");
  scanf("%c", &alpha);
  switch (alpha)
  {

  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    printf("Entered value is vowel\n");
    break;
  default:
    printf("Entered value is consonant\n");
    break;
  }
}