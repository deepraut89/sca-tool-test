#include<stdio.h>
#include <stdarg.h>
#define TEST(a,b,...) test_func(a,b, ##__VA_ARGS__)

void test_func(int a, int b, ...)
{
  va_list valist;
  int *result;
  int num=1;
  printf("Values of a and b: ");
  printf("%d %d\n",a,b);
  va_start(valist, num);
  result=va_arg(valist, int* );
  printf("Var arg: %d\n",*result);
  va_end(valist);
}

struct test_struct {
  int i;
  int j;
};

int main()
{
int a=5;
int b=10;
struct test_struct y;
struct test_struct *x=NULL;
printf("Inside main\n");
y.i=5;
printf("%d\n",y.i);
printf("%d\n",x->i);
TEST(a,b,&x->i);
return 0;
}
