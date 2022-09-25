//3-calculate sum of first N odd natural numbers//

#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("enter a number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
    s=s+2*i-1;
    }
    printf("sum is %d",s);



    return 0;
}

