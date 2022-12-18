

// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int *ptr,int size)
{
    int i,j,temp;
    for (i = 0; i < size-1; i++)
    {
        for (j = i; j < size; j++)
        {
            if (ptr[i] > ptr[j])
            {
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
}
int main()
{
    int a[] = {2,4,62,1,5,56,8,4,23,6},i;
    sort(a,10);

    for ( i = 0; i < 10; i++)
        printf("%d ",a[i]);
    return 0;

}
