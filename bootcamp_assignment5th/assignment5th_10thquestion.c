//10-print table of N;//
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("table of N:");
    while(i<=n)
    {

    printf("\n%d\n",n*i);
    i++;

    }

    return 0;
}

