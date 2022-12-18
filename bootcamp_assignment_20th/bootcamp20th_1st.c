// 1-function to swap values of two in variables of calling function(TSRS)

#include <stdio.h>
void swap(int*, int*);
int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("After Swapping, a = %d, b = %d", a, b);
    return 0;
}
void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

