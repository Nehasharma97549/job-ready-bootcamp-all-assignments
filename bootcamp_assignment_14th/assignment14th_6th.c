//6- sort elements of an array of size 10.take array values from user//
#include<stdio.h>
int main()
{
   int a[10];
   int i,j,temp=0;
      printf("\n enter 10 numbers\n");
      for(i=0;i<=9;i++)
      {
       scanf("%d",&a[i]);
      }
      for(i=0;i<=9;i++)
      {
          for(j=i+1;j<10;j++)
          {
             if(a[i]>a[j])
             {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
             }
          }
      }
               printf("sorted array-\n");
              for(i=0;i<10;i++)
               {
                printf("%d\n",a[i]);
               }

      return 0;

}
