#include <stdio.h>

// a valid string in c is null terminated , i.e
// ended with '\0'.
// name[] = "vivek"; is null terminated and we don't need to end it with \0
// name[] = {'v','i','v','e','k','\0'}; here we have to put a null character ourself.

void printstr(char string[])
{
  int i = 0;
  while (string[i] != '\0')
  {
    printf("%c", string[i]);
    i++;
  }
  printf("\n");
}

int main()
{
  char name[] = "Vivek";

  char greeting[] = {'h', 'e', 'l', 'l', 'o'};

  char str[34];
  char str2[23];

  // printstr(name);

  // printstr(greeting);
  gets(name);
  puts(name);
  scanf("%s", &greeting);
  printf("%s", greeting);
}