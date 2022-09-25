//write a program to swap values of two int variables//
#include <stdio.h>
int main()
{
   int a,b,c;
     printf("enter two number");
     scanf("%d %d",&a,&b);
     printf("before swapping\n a=%d and b=%d\n",a,b);

     c=a;
     a=b;
     b=c;
     printf("after swapping\n");
     printf("a=%d and b=%d",a,b);
    return 0;
}
