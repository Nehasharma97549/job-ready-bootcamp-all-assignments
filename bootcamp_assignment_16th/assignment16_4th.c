//3-transepose of a given matrix(multi-dimensional array)
#include<stdio.h>
int main()
{
    int row,rightDiagosum=0;

    printf("enter row  of matrix:");
    scanf("%d",&row);

    int matrix[row][row];

    printf("enter elements in [%d]*[%d]\t ",row,row);
    for(int i=0;i<row;i++)
       {
       for(int j=0;j<row;j++)
          {
           printf("enter elements in [%d]*[%d]\t ",row,row);
          scanf("%d",&matrix[i][j]);

          if(i==j)
                rightDiagosum+=matrix[i][j];

          }
       }
          //print Matrix

     printf(" given matrix :\n");
    for(int i=0;i<row;i++)
    {
       for(int j=0;j<row;j++)
       {
          printf("%d\t",matrix[i][j]);
       }
          printf("\n");
    }
          //right diagonals sum

          printf("right diagonals of matrix sum is: %d\n",rightDiagosum);

return 0;


}
