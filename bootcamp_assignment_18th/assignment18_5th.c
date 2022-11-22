//WA function  transform into lowercase (function and string)..//
#include<stdio.h>
#include<string.h>
void strlowercase(char str[])
{

    for(int i=0;str[i];i++)
    {
      if(str[i]>='A' && str[i<='Z'])
         str[i]+=32;


    }
}
  int main()
{
  char str[100];
  printf("enter first string: ");
  fgets(str,100,stdin);
  strlowercase(str);
  printf("\nlowercase string : %s",str);

  return 0;

}
