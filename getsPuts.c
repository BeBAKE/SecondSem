
//

#include <stdio.h>
int main()
{
  char sequence[100];
  printf("Enter the sequence of string : ");
  gets(sequence); // act as scanf("%s", &sequence);
  printf("String entered : ");
  puts(sequence); // in place of -> printf("%s entered\n",sequence);
  return 0;
  // char alpha;

  // alpha = getchar();

  // putchar(alpha);
}