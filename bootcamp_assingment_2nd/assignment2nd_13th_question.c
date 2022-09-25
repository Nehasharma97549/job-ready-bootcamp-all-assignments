//to take three digit number and rotate its digit by one position towards the right//
#include<stdio.h>
int main()
{
    int x,q,r;
    printf("enter a number %d",x);
     scanf("%d",&x);
    q=x/10;
    r=x%10;
    x=r*100+q;

    printf("after rotate one position toward the right :%d",x);
    return 0;

}
