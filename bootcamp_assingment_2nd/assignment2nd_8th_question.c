//given number is even or odd using a bitwise operator//
#include<stdio.h>

int main()
{
   int x;
   printf("enter a number\n");
   scanf("%d",&x);
if(x&1==1)
    printf("odd\n");
else
    printf("even\n");

   return 0;
}
