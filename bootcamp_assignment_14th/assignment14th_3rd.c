// calculate the sum of all even and all odd numbers stored in an array of size 10.take array values from user//
#include<stdio.h>
int main()
{
   int num[10];
   int i,se=0,so=0;
      printf("\n enter 10 numbers\n");
      for(i=0;i<=9;i++)
      {
       scanf("%d",&num[i]);
      }
      for(i=0;i<=9;i++)
      {
          if(num[i]%2==0)
            se=se+num[i];
          else
            so=so+num[i];
      }
      printf("\nsum of all even numbers:%d",se);
      printf("\nsum of all odd numbers:%d",so);
      return 0;
}
