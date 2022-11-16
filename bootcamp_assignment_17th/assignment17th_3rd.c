/*WAP to count vowels in a given string*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
         int i=0, count=0;
          printf("enter a string:");
          gets(str);

          for(i=0;str[i]!='\0';i++)
          {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='i'||str[i]=='0'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='o'||str[i]=='u')

         count++;
          }
          printf("%d",count);
          return 0;
}
