//-7 count a total number of duplicate elements in an array. (array and function)//


#include<stdio.h>
int countduplicateE(int arr[],int arrsize)
{   int count=0;
   //sorting

   for(int i=0;i<arrsize;i++)
     {
       for(int j=i+1;j<arrsize;j++)
        {
          if(arr[i]<arr[j])
           {
             int temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
           }
        }
     }
       // count_duplicate_value

   for(int i=1;i<arrsize;i++)
      {
        if(arr[i]==arr[i-1])
        count++;
      }
        return count;
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

  printf("\ntotal duplicate value in array:%d",countduplicateE(arr,arrsize));

     return 0;

}
