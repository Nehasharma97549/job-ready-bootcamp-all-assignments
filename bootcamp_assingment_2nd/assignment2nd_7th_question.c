//find the position of first 1 in LSB//
#include<stdio.h>
int main()
{

int num,position=0,lsb;
printf("enter a number");
scanf("%d",&num);


while(num!=0)
{
lsb = num&1;
position++;

if(lsb==1)
{
    printf("%d",position);

break;
}
num =num>>1;
}

return 0;
}
