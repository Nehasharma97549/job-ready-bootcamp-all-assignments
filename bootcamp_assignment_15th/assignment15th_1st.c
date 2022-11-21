#include<stdio.h>
int greatestNum(int a[],int n)
{
   int gNum=a[0];
   for(int i=1;i<n;i++)
   {
      if(gNum<a[i])
         gNum=a[i];

   }
   return gNum;
}
int main()
{
  int size,gNumber;
  printf("enter array size:");
  scanf("%d",&size);

  int arr[size];
  printf("enter %d element in array:\n",size);
  for(int i=0;i<size;i++)
  {
        printf("enter %d element:",i+1);
        scanf("%d",&arr[i]);

  }
  gNumber= greatestNum(arr,size);
  printf("\ngreatest number is:%d",gNumber);
     return 0;

}
