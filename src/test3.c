#include<stdio.h>
#include<test3_func.h>

int main()
{
   int a = 5;
   int b = 10;
   struct test_struct y;
   struct test_struct *pt1=NULL;
   struct test_struct *pt2=NULL;
   y.i=15;
   printf("Inside main value of y.i :%d\n",y.i);
   TEST_FUNC(a,b,1,&pt1->i);
   printf("Through pt2 value of y.i in main: %d\n",pt2->i);
   return 0;
}
