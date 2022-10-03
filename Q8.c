#include<stdio.h>

int main()
{
  int x,y;
  printf("Enter the number");
  scanf("%d",&x);
  if((x&1)==0)
  {
     printf("number is even");
  }
  else
  {
    printf("Number is odd");
  }
  return 0;
}
