//WAP to calculate length of the string..//
#include<stdio.h>
#include<string.h>
int strlength(char str[])
{
    int i,length=0;
    for(i=0;str[i];i++)

      length++;
    return length;
}
  int main()
{
  char str[100];
  printf("enter a string: ");
  fgets(str,100,stdin);
  printf("length of given string is: %d",strlength(str));

  return 0;

}
