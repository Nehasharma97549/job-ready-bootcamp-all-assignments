
/* -7th -count the total number of alphabet, digit or a special character*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[100];
         int digit=0,alphabet=0,special_c=0,i=0;
          printf("enter a string:");
          gets(a);

          while(a[i]!='\0')
          {
          if(a[i]>='A'&& a[i]<='Z'||a[i]>='a'&& a[i]<='z')
          {
          alphabet++;

          }
         else if(a[i]>='1'&& a[i]<='9')
         {
          digit++;
          }
          else
          {
          special_c++;
          }
          i++;
          }


          printf(" alphabet=%d\n",alphabet);
          printf("digit=%d\n",digit);
          printf("special character=%d\n",special_c);

          return 0;
}
