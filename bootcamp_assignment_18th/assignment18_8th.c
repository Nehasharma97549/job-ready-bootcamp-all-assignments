// 8-WA function count word in a given string (function and string)..//
#include<stdio.h>
#include<string.h>
int strcountword(char str[])
{
     int countspace=1;
    for(int i=0;str[i];i++)

      if(str[i]==' ')
           countspace++;

          return  countspace;

}
  int main()
{
  char str[100];
  printf("enter first string: ");
  fgets(str,100,stdin);


       printf("\n total word in given string %d" ,strcountword(str));

       return 0;

}
