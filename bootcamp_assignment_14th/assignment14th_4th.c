// find the greatest number stored in an array of size 10.take array values from user//
#include<stdio.h>
int main()
{
   int num[10];
   int i,max=0;
      printf("\n enter 10 numbers\n");
      for(i=0;i<=9;i++)
      {
       scanf("%d",&num[i]);
      }
      for(i=0;i<=9;i++)
      {
          if(max<num[i])
            max=num[i];
      }

      printf("sum is %d\n",max);
      return 0;
}
