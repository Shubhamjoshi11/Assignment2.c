#include<stdio.h>

int main()
{
 int a,b;
 printf("enter the number");
 scanf("%d%d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("value after swap of a is %d and b is %d",a,b);
return 0;
}
