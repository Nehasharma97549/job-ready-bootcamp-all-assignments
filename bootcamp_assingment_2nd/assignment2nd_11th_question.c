//234 to make 2349 append a digit//

#include<stdio.h>
int main()
{ int num,newnumber;
int digit=9;

printf("enter a number ");
scanf("%d",&num);

     num=num*10;
     newnumber=num+digit;

     printf("%d ",newnumber);


    return 0;
}


