//convert INR amount in USD//
#include<stdio.h>
int main()
{
  int x;
  float y;
  printf("enter amount in INR");
  scanf("%d",&x);

  y=x*1/76.23;
  printf("%d INR is %f USD",x,y);

  return 0;

}
