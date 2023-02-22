#include <stdio.h>
int main()
{
  char line[100], ch;
  int digit, consonent, vowels, space;
  digit = consonent = vowels = space = 0;
  printf("ENter line");
  fgets(line, sizeof(line), stdin);

  for (int i = 0; line[i] != '\0'; i++)
  {
    ch = line[i];
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
      vowels++;
    }
    else if (ch > 'a' && ch <= 'z')
    {
      consonent++;
    }
    else if (ch >= '0' && ch <= '9')
    {
      digit++;
    }
    else if (ch == ' ')
    {
      space++;
    }
  }
  printf("%d %d %d %d ", consonent, vowels, digit, space);
}