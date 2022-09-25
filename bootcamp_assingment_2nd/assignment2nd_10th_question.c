//to make last digit of a number stored in a variable as zero if x=2345 then make it 2340//
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a number");
    scanf("%d",&a);

     b=a/10;
     c=b*10;               //newnumber=num/10//
                                             //newnumber=newnumber*10//

    printf("new number is %d ",c);

    return 0;
}


