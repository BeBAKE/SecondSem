// #include <stdio.h>
// #include <string.h>
// void reverse(char[]);
// int main()
// {
//   char line[100];
//   printf("Enter : ");
//   fgets(line, sizeof(line), stdin);
//   reverse(line);
//   printf("%s", line);

// }
// void reverse(char line[])
// {
//   printf("%d", strlen(line));
//   char temp = 'a';
//   for (int i = 0, j = strlen(line) - 1; i < j; i++, j--)
//   {
//     temp = line[i];
//     line[i] = line[j];
//     line[j] = temp;
//   }

// }
#include <stdio.h>
void reverseSentence();
int main()
{
  printf("Enter a sentence: ");
  reverseSentence();
  return 0;
}
void reverseSentence()
{
  char c;
  scanf("%c", &c);
  if (c != '\n')
  {
    reverseSentence();
    printf("%c", c);
  }
}