#include<stdio.h>

int main()
{
  int x,y,sum=0,r;
  printf("enter the number");
  scanf("%d",&x);
  while(x)
  {
     y=x%10;
     r=x/10;
     x=r;
     sum=sum+y;
  }
  printf("%d",sum);
}
