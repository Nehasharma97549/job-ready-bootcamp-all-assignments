//swap values of two int variable without using third variable//

#include<stdio.h>
int main()
{
   int a,b;
     printf("enter two number");
     scanf("%d %d",&a,&b);
     printf("before swapping\n a=%d and b=%d\n",a,b);

     a=a+b;    //a+b=(10+20=30)//
     b=a-b;    //a-b=(30-20=10)//
     a=a-b;    //a-b=(30-10=20)//

     printf("after swapping\n");
     printf("a=%d and b=%d",a,b);
    return 0;
}
