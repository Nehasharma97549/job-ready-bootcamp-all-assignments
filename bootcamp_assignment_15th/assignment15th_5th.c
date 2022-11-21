//-5 find the first occurance of adjacent duplicate value in array. (array and function)//


#include<stdio.h>
int  firstDvalue(int a[],int size)
{

   for(int i=1;i<size;i++)
   {
           if(a[i]==a[i+1])
              return a[i];
   }
   return 0;
}

int main()
{
int i,arr[10]={4,5,3,6,7,7,6,7,8,1};
printf("\nfirst occurance of adjacent duplicate in the array");

printf("\nfirst occurance =%d\n",firstDvalue(arr,10));
     return 0;

}
