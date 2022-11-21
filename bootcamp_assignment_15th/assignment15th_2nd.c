//-2 find smallest number in array (array and function)//

#include<stdio.h>
int smallestNum(int a[],int n)
{
   int sNum=a[0];
   for(int i=1;i<n;i++)
   {
      if(sNum>a[i])
         sNum=a[i];

   }
   return sNum;
}
int main()
{
  int size,sNumber;
  printf("enter array size:");
  scanf("%d",&size);

  int arr[size];
  printf("enter %d element in array:\n",size);
  for(int i=0;i<size;i++)
  {
        printf("enter elements:");
        scanf("%d",&arr[i]);

  }
  sNumber= smallestNum(arr,size);
  printf("\nsmallest number is:%d",sNumber);
     return 0;

}
