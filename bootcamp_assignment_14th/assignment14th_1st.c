// sum of numbers stored in an array of size 10.take array values from user//
#include<stdio.h>
int main()
{
   int num[10];
   int i,sum=0;
      printf("\n enter 10 numbers");
      for(i=0;i<=9;i++)
      {
       scanf("%d",&num[i]);
      }
      for(i=0;i<=9;i++)
      {
          sum=sum+num[i];
      }
      printf("sum is %d\n",sum);
      return 0;
}
