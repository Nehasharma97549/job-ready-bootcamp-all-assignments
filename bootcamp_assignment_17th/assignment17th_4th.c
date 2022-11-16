/*WAP to convert a given string into uppercase*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
         int i=0;
          printf("enter a string:");
          gets(str);

          while(str[i]!='\0')
          {
          if(str[i]>='a'&& str[i]<='z')
          {
          str[i]=str[i]-32;

          }
          i++;
          }
          printf("%s",str);
          return 0;
}
