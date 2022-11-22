//WA function  transform into lowercase (function and string)..//
#include<stdio.h>
#include<string.h>
int strAlphanumeric(char str[])
{
     int digit=0,alphabet=0;
    for(int i=0;str[i];i++)

      if(str[i]>='0' && str[i<='9'])
         digit=1;


     else if(str[i]>='A' && str[i<='Z'])
         alphabet=1;

      if(digit && alphabet)
          return 1;
     else
       return 0;



}
  int main()
{
  char str[100];
  printf("enter first string: ");
  fgets(str,100,stdin);

  if(strAlphanumeric(str))
       printf("\nstring is alphanumeric : ");

   else
      printf("\nstring is not alphanumeric :");

  return 0;

}
