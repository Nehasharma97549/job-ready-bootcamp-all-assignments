//WAP to calculate length of the string..//
#include<stdio.h>
#include<string.h>
void strRev(char str[])
{
    int strlength=strlen(str);
    for(int i=0;i<strlength/2;i++)
    {
      int temp=str[i];
      str[i]=str[strlength-2-i];
      str[strlength-2-i]=temp;
    }
}
  int main()
{
  char str[100];
  printf("enter a string: ");
  fgets(str,100,stdin);
  strRev(str);
  printf("reverse string : %s",str);

  return 0;

}
