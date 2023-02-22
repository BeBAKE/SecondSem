#include <stdio.h>
int main()
{
  int a, b;
  char op;
  printf("Enter the operator : ");
  scanf("%c", &op);
  printf("Enter two operands : ");
  scanf("%d %d", &a, &b);

  switch (op)
  {
  case '+':
    printf("%d\n", a + b);

  case '-':
    printf("%d\n", a - b);

  case '*':
    printf("%d\n", a * b);

  case '/':
    printf("%d\n", a / b);

  case '%':
    printf("%d\n", a % b);

  default:
    printf("Enter the default operand\n");
  }
}
