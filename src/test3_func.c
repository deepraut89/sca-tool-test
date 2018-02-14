#include<stdio.h>
#include <stdarg.h>

void test_func(int a, int b, int num, ...)
{
  va_list args;
  va_start(args, num);
  printf("Values of a and b: %d and %d\n",a,b);
  printf("Through pt1 value of y.i in function: %d\n",*(va_arg(args, int *)));
  va_end(args);
}
