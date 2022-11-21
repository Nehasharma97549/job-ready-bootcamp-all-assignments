//-6 display it in reverse order. (array and function)//


#include<stdio.h>
void reverse(int arr[],int arrsize)
{
   printf("\nreverse order array display:");
   for(int i=arrsize-1;i>=0;i--)
      printf("%d ",arr[i]);

}
int main()
{
  int arrsize;
  printf("enter array size:");
  scanf("%d",&arrsize);

  int arr[arrsize];

  printf("enter %d element in array:\n",arrsize);
  for(int i=0;i<arrsize;i++)
        scanf("%d",&arr[i]);

  reverse(arr,arrsize);

     return 0;

}
