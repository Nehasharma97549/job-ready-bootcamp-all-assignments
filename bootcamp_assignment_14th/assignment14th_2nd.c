// calculate average of numbers stored in an array of size 10.take array values from user//
#include<stdio.h>
int main()
{
   int num[10];
   int i,sum=0;
   float avg;
      printf("\n enter 10 numbers\n");
      for(i=0;i<=9;i++)
      {
       scanf("%d",&num[i]);
      }
      for(i=0;i<=9;i++)
      {
          sum=sum+num[i];
          avg=sum/100.0;
      }
      printf("average is %f",avg);
      return 0;
}
