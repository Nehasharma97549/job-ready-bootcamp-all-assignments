//4-print  n odd natural numbers;//
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter a number\n");
    scanf("%d",&n);
    printf(" N  odd natural numbers are:");
    while(i<=n)
    {

    printf("\n%d\n",2*i-1);
    i++;

    }

    return 0;
}

