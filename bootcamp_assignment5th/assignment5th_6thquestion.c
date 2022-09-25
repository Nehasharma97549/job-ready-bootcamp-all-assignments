//6-print  n even  natural numbers;//
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter a number\n");
    scanf("%d",&n);
    printf(" N  even natural numbers are:");
    while(i<=n)
    {

    printf("\n%d\n",2*i);
    i++;

    }

    return 0;
}

