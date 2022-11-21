//-8 count a total number of unique elements in an array. (array and function)//


#include<stdio.h>
int printUniqueElements(int arr[],int arrsize)
{   int i,j;


   for(int i=0;i<arrsize;i++)
     {


       for( j=0;j<i;j++)
        {
          if(arr[i]==arr[j])
             break;

        }
        if(i==j)
        {
            /*no duplicate elements found index 0 to i */
            printf("%d",arr[i]);
        }

        }

    return 0;
     }
int printUniqueElements(int [],int);
int main()
{
  int arrsize;
  printf("enter array size:");


  scanf("%d",&arrsize);


  int arr[arrsize];

  printf("enter %d element in array:\n",arrsize);
  for(int i=0;i<arrsize;i++)

        scanf("%d",&arr[i]);


  printf("\nAll unique elements: ");
  printUniqueElements(arr,arrsize);
  return 0;

}


