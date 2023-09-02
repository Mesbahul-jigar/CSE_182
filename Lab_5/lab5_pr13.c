#include <stdio.h>
int main() 
{
  char oper;
  double a ,b ;
  
    printf("Enter an opererator (+, -, *, /): ");
  scanf("%c", &oper);
  

  printf("Enter two operands: ");
  scanf("%lf %lf", &a, &b);
  

  switch (oper) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", a, b, a + b);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", a, b, a - b);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", a, b, a * b);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", a, b, a / b);
      break;
    
    default:
      printf("Invalid opererator");
  }

  return 0;
}