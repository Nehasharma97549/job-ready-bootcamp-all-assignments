//1-calculate sum of first N natural numbers//

#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("enter a number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
    s=s+i;
    printf("sum is %d",s);

    }

    return 0;
}

