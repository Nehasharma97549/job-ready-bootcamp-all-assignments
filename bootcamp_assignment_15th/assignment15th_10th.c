// count the frequency of each elements(function and array)//
#include<stdio.h>
int main()
{
  int arr[10];
  printf("\n enter array:");
  for(int i=0;i<10;i++)
  {
  scanf("%d",&arr[i]);

  }
     frequency(arr,10);
     return 0;

}

void frequency(int a[],int si)
   {
     int b[si],i,j;
     for(i=0;i<si;i++)
       b[i]=0;
    for(i=0;i<si;i++)
    {
       for(j=0;j<si;j++)
        {
           if(a[i]==a[j])
              b[j]++;
        }
    }
       printf("\n\nelement\t\tfrequency");
       for(i=0;i<si;i++)
       {
         for(j=i+1;j<si;j++)
           {
             if(a[i]==a[j])
             break;

           }
           if(j==si)
             printf("\n  %d\t\t  %d", a[i],b[i]);
       }


   }
