//9-cubes of first n natural numbers;//
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("cubes of first n natural numbers :");
    while(i<=n)
    {

    printf("\n%d\n",i*i*i);
    i++;

    }

    return 0;
}

