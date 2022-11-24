//7-check whether all ip addresses are valid(multiple string)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char ip[] = "23.100.453.255";
    int countDot = 0, countVal = 0;

    char *a = strtok(ip, ".");
    while (a != NULL)
    {
        int x = atoi(a);
        if (x >= 0 && x <= 255)
            countVal++;
        a = strtok(NULL, ".");
        countDot++;
    }
    if (countDot == 4 && countVal == 4)
        printf("Valid ip address!");
    else
        printf("Invalid ip addresss!");
    return 0;
}
