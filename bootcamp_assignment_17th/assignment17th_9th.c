
/* -9th -WAP to sort a string array in accending order*/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    char temp;

          printf("enter a string:");
          gets(a);

        int i,j;
        int n=strlen(a);
        for(i=0;i<n-1;i++)
        {
          for(j=i+1;j<n;j++)
          {
           if(a[i]>a[j])
           {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
           }
         }
      }

      printf("string after sorting-%s\n",a);
      return 0;

      }
