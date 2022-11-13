// 9-n numbers of value in an array and display it in reverse order take array values from user//
#include<stdio.h>
int main()
{
   int num[10];
   int i;
      printf("\n enter 10 numbers\n");
      for(i=0;i<=9;i++)
      {
       scanf("%d",&num[i]);
      }
      printf("array elements in reverse order");

      for(i=9;i>=0;i--)
      {
         printf("sum is %d\n",num[i]);
      }
      return 0;
}
