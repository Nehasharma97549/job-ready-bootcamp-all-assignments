//1-calculate sum of two matrix 3*3(multi-dimensional array
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],sumMatrix[3][3];
    printf("enter element in first 3*3 matrix:\n");
    for(int i=0;i<3;i++)
       for(int j=0;j<3;j++)
          scanf("%d",&a[i][j]);

     printf("enter element in second 3*3 matrix:\n");
    for(int i=0;i<3;i++)
       for(int j=0;j<3;j++)
          scanf("%d",&b[i][j]);

          //    sum of matrix

      printf("enter element in first 3*3 matrix:\n");
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
          sumMatrix[i][j]=a[i][j]+b[i][j];
    }

          //  print first matrix

     printf(" first  matrix:\n");
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
          printf("[%d]\t",a[i][j]);
          printf("\n");
     }
        // print second matrix

        printf(" second  matrix:\n");
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
          printf("[%d]\t",b[i][j]);
          printf("\n");
     }

       // print sum of upper two matrix

       printf(" sum of two  matrix:\n");
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
          printf("[%d]\t",sumMatrix[i][j]);
          printf("\n");
     }

return 0;


}
