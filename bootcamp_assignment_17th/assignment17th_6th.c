
/* -6th -WAP to reverse a string*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],t;

          printf("enter a string:");
          gets(str);
         int i=0,j=strlen(str)-1;
          while(i<=j)
    {
          t=str[i];
          str[i]=str[j];
          str[j]=t;


          i++;
          j--;
    }
          printf("%s",str);
          return 0;
}
