/*WAP to calculate the occurrence of a given character in a given string*/

#include<stdio.h>
#include<string.h>
int main()
{
char str[100],ch;
int count=0;
printf("enter a string:");
fgets(str,sizeof(str),stdin);

printf("enter a character to find its occurance:");
scanf("%c",&ch);

for(int i=0;str[i]!='\0';++i)
{
if(ch==str[i])
++count;

}

printf(" occurance of %c=%d",ch,count);
return 0;
}
