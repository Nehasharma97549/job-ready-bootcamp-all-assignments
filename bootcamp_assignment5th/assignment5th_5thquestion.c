//print fist n odd natural number in reverse order//
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {

    printf("\n%d\n",i*2-1);

    }

    return 0;
}

