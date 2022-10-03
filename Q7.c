#include<stdio.h>

int main()
{
  int x,y,count=0;
  printf("Enter the number");
  scanf("%d",&x);
 while(y!=1)
 {
  y=x&1;
  count++;
  if(y==1)
  {
    printf("%d",count);
  }
  x=x>>1;
}
}


