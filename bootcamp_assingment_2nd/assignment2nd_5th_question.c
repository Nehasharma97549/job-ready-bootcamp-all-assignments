//input three digit number and display the sum of the digits.//
#include<stdio.h>
int main()
{
   int num,digitsum;
     printf("enter a number number\n");
     scanf("%d",&num);


     digitsum = num%10;

     num = num/10;

     digitsum+=num%10;//digitsum=digitsum+num%10;//

     num = num/10;

     digitsum+=num%10;


     printf(" sum of digit is :%d",digitsum);

    return 0;
}
