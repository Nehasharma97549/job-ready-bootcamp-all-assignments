

// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
int main()
{
    char *a[20],*b[20];
    printf("Enter a 2 String: ");
    gets(a);
    gets(b);
    swap(&a,&b);
    printf("%s %s",a,b);
    return 0;
}
void swap(char **p,char **q)
{
    char *temp;
    temp  = *p;
    *p = *q;
    *q = temp;
}
