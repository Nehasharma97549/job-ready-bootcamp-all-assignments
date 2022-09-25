//print a given number without its last digit
#include <stdio.h>
int main()
{
   int n,x;
     printf("enter a number");
     scanf("%d",&n);
     x=n/10;
     printf("number without its last digit %d",x);
    return 0;
}
