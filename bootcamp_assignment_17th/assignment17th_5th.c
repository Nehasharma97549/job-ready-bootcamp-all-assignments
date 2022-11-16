
/* -5th -WAP to convert a given string into lowerrcase*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
         int i=0;
          printf("enter a string:");
          gets(str);

          while(str[i]!='\0')
          {
          if(str[i]>='A'&& str[i]<='Z')
          {
          str[i]=str[i]+32;

          }
          i++;
          }
          printf("%s",str);
          return 0;
}
