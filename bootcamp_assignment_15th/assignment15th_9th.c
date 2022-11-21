//-9 merge two arrays of same size sorted in descending order. (array and function)//


#include<stdio.h>
void mergearay(int a[],int b[],int merge[],int arrSize)
{
     for(int i=0;i<arrSize;i++)
      {
         merge[i]=a[i];
         merge[arrSize+i]=b[i];
      }
}
 int main()
 {
   int arrSize;
   printf("enter size of array(both array): ");
   scanf("%d",&arrSize);

   int a[arrSize],b[arrSize];

   printf("enter %d numbers in first array\n",arrSize);
   for(int i=0;i<arrSize;i++)
      scanf("%d",&a[i]);

      printf("enter %d numbers in first array\n",arrSize);
   for(int i=0;i<arrSize;i++)
      scanf("%d",&b[i]);

int merge[arrSize*2];//store merge array element

   mergearay(a,b,merge,arrSize);

   printf("\nafter mergAray:");
   for(int i=0;i<arrSize*2;i++)
   printf("%d",merge[i]);

   return 0;



 }
