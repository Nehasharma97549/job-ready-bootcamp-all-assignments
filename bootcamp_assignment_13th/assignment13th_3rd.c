//3-sum of odd natural numbers(recursive function)

#include <stdio.h>
int fun(int n)
{
    if (n == 1)
        return 1;
    return (n*2-1) + fun(n - 1);
}
int main()
{
    int n;
    printf("Enter the value: ");
    scanf("%d", &n);
    printf("Sum is: %d", fun(n));
    return 0;
}
