//10-wap to reverse of a given number//

#include<stdio.h>
int main()
{
    int i,n,reminder,reverse=0;
    printf("enter a number\n");
    scanf("%d",&n);

    while(n!=0)
    {
    reminder=n%10;
    n=n/10;
    reverse=reverse*10+reminder;

    }
    printf("reverse of a number is %d",reverse);

    return 0;
}

