
/* -8th -WAP to copy one string into another string*/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10],i;

          printf("enter a string:");
          gets(a);

         for(i=0;a[i]!='\0';i++)
         b[i]=a[i];
         b[i]='\0';
          printf("\n string 1=%s",a);
          printf("\n string 2=%s",b);



          return 0;
}
