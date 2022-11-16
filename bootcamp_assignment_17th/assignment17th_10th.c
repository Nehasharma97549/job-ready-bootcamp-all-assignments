
/* -10th -WAP in c to find the frequency of character*/

#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int freq[150]={0};
    int i=0;

          printf("enter a string:");
          gets(a);

        while(a[i]!='\0')
           {
              freq[a[i++]]++;

           }
        for(i=0;i<150;i++)
        {
            {
               if(freq[i]!=0)
              printf("%c==> %d\n",i,freq[i]);

            }

        }
      return 0;

      }
