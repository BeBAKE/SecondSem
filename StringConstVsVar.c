#include <stdio.h>
int main()
{
  char name1[4] = "Aman"; // name1 is the character array
  char name4[] = "Gupta";
  char name2[] = {'v', 'i', 'v', 'e', 'k', '\0'};
  char *name3 = "Aryan"; // name3 is the character pointer

  // name1 and name2 are string variable
  // name3 is string literal/constant

  name1[0] = 'h'; // valid
  name2[0] = 'h'; // valid
  // name3[0]='h';// invalid

  // Printing name3 using for loop
  //  for (int i = 0; i < 5; i++)
  //  {
  //    printf("%c", *(name3 + i));
  //  }

  printf("name1 = %s\n", name1);
  // printf("name 2 = %s\n", name2);
  // printf("name 3 = %p\n", name3);
}