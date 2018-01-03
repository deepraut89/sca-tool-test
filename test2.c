#include<stdio.h>
void test_func(int a, int b, int *x)
{
  printf("Values of a and b: ");
  printf("%d %d\n",a,b);
  printf("Value of i in structure: %d\n",*x);
}

struct test_struct {
  int i;
  int j;
};

int main()
{
int a=5;
int b=10;
int *z;
struct test_struct y;
struct test_struct *pt1=NULL;
struct test_struct *pt2=NULL;
printf("Inside main\n");
y.i=15;
printf("%d\n",y.i);
test_func(a,b,&pt1->i);
printf("%d\n",pt2->i);
return 0;
}
