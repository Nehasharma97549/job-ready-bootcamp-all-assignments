// 10-WA function to find the repeated character in a given array  of the string..//
#include<stdio.h>
#include<string.h>

void  strsort(char str[])
{

    for(int i=0;str[i];i++)
    {

       for(int j=0;str[j];j++)
        {
           if(str[i]<str[j])
           {
             int temp=str[i];
             str[i]=str[j];
             str[j]=temp;
           }
        }
    }
}
void reapetedchar(char str[])
{
  strsort(str);
  int i=0,j,flag;
  while(i<strlen(str))
   {
     flag=1;
     for(j=i+1;str[i];j++)
     {
       if(str[i]==str[j])
          flag=0;
       else
          break;

     }
    if(flag==0)
          printf("%c",str[i]);
          i=j;
     }
}
  int main()
{
  char str[100];
  printf("enter first string: ");
  fgets(str,100,stdin);



    printf("\navailable reapted character in given string-");
    reapetedchar(str);
  return 0;

}
