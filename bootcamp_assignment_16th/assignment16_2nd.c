//2-calculate product of two matrix 3*3(multi-dimensional array)
#include<stdio.h>
int main()
{
    int i,j,k,sum=0;
    int a[3][3],b[3][3],c[3][3]={0};
    printf("enter element in first 3*3 matrix:\n");
    for(int i=0;i<3;i++)
       for(int j=0;j<3;j++)
          scanf("%d\t",&a[i][j]);

     printf("enter element in second 3*3 matrix:\n");
    for(int i=0;i<3;i++)
       for(int j=0;j<3;j++)
          scanf("%d\t",&b[i][j]);

          //    product of matrix


    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
          {
           for(k=0;k<3;k++)
            {
              sum=sum+(a[i][k]*b[k][j]);
            }
             c[i][j]=sum;
             sum=0;

          }
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

       // product of two matrix

       printf("product of two matrix:\n");
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
          printf("[%d]\t",c[i][j]);
          printf("\n");
     }

return 0;


}
