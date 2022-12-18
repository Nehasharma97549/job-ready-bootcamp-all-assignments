

// 5. Write a function to sort employees according to their salaries [ refer structure from
//    question 1]
#include <stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[30];
    int salary;
};
int main()
{
    struct employee e[10],temp;
    int i, j;
    for (i = 0; i <= 9; i++)
    {
        printf("Enter a Name of Employee : ");
        fflush(stdin);
        gets(e[i].name);

        printf("Enter a Employee Id : ");
        scanf("%d", &e[i].id);

        printf("Enter a Employee salary : ");
        scanf("%d", &e[i].salary);
    }
// sort array
for ( i = 0; i <= 9; i++)
{
    for ( j = i; j <= 9; j++)
    {
        if (strcmp(e[i].name,e[j].name) > 0)
        {
            temp = e[i];
            e[i] = e[j];
            e[j] = temp;
        }

    }

}

for ( i = 0; i <= 9; i++)
{
    printf("\n Name = %s  Id = %d  Salary = %d",e[i].name,e[i].id,e[i].salary);
}

return 0;
}
