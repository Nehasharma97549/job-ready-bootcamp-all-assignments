//3-transepose of a given matrix(multi-dimensional array)
#include<stdio.h>
int main()
{
    int row,col;

    printf("enter row and columm of matrix:");
    scanf("%d%d",&row,&col);

    int matrix[row][col];
    int trans[row][col];
    printf("enter elements in [%d]*[%d]\t ",row,col);
    for(int i=0;i<row;i++)
       {
       for(int j=0;j<col;j++)
          {
           printf("enter elements in [%d]*[%d]\t ",row,col);
          scanf("%d",&matrix[i][j]);
          }
       }
          //print Matrix

     printf("matrix elements:\n");
    for(int i=0;i<3;i++)
    {
       for(int j=0;j<3;j++)
       {
          printf("%d\t",matrix[i][j]);
       }
          printf("\n");
    }
          // transpose matrix

    for(int i=0;i<row;i++)
    {
       for(int j=0;j<col;j++)
        {
          trans[j][i]=matrix[i][j];

        }
        printf("\n");
    }

    printf("matrix elements\n");
     for(int i=0;i<row;i++)
    {
       for(int j=0;j<col;j++)
        {
          printf("%d\t",trans[i][j]);
        }
        printf("\n");
    }
return 0;


}
