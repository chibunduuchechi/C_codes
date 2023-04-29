#include <stdio.h>

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);

int main(void)
{
  int (*ptOperator[])(int, int) = {add, subtract, multiply, divide};
  printf("Enter an operation: \n\n For add press 0\n for subtract 1\n for multiply 2 \n for divide 3: \n");

  int choice;
  if (choice <=3) 
  {
    scanf("%d", &choice);
    printf("enter two numbers: ");
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int result = (ptOperator[choice])(a, b);
    printf("Your Result is %d\n", result);
  }
  else
  {
    printf("Enter a valid option from 0 to 3");
  }
  
  return (0);
}

int add(int x, int y)
{
  return (x+y);
}
int subtract(int x, int y)
{
  return (x-y);
}
int multiply(int x, int y)
{
  return (x*y);
}
int divide(int x, int y)
{
  return (x/y);
}
