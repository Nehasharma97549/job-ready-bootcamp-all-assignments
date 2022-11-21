//-3 sort an array (array and function)//


#include<stdio.h>
void sortarray(int a[],int n)
{

   for(int i=0;i<n;i++)
   {
         for(int j=i+1;j<n;j++)
        {
           if(a[i]>a[j])
          {
              int temp=a[j];
               a[j]=a[i];
               a[i]=temp;

           }
        }
   }
}
int main()
{
  int size;
  printf("enter array size:");
  scanf("%d",&size);

  int arr[size];

  printf("enter %d element in array:\n",size);
  for(int i=0;i<size;i++)
  {
        printf("enter  element:");
        scanf("%d",&arr[i]);

  }
  sortarray(arr,size);

  printf("\nafter sorted element is: ");
  for(int i=0;i<size;i++)
  printf("%d ",arr[i]);
     return 0;

}
