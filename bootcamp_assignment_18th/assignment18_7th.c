// 7-WA function  string is palindrom or not (function and string)..//
#include<stdio.h>
#include<string.h>
int strpalindrome(char str[])
{

    for(int i=0;i<strlen(str)/2;i++)

      if(str[i]!=str[strlen(str)-2-i])
           return 0;

          return 1;

}
  int main()
{
  char str[100];
  printf("enter first string: ");
  fgets(str,100,stdin);

  if(strpalindrome(str))
       printf("\nstring is palindrome : ");

   else
      printf("\nstring is not palindrome :");

  return 0;

}
