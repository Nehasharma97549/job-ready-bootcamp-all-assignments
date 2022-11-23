//2-first N natural numbers in reverse order using recursion//1-first n natural numbers using recursion



#include <stdio.h>
void naturalNum(int n)
{
    if (n > 0)
    {   printf("%d ", n);
        naturalNum(n - 1);

    }
}
int main()
{
    int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    naturalNum(n);
    return 0;
}

