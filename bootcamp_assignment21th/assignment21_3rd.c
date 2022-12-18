//3- function to display employee data(refer structure from question1)

#include <stdio.h>
struct Employee
{
    int id;
    float salary;
    char name[20];
};
void displayUserData(struct Employee user1)
{
    printf("\nUser id - %d", user1.id);
    printf("\nUser name: %s", user1.name);
    printf("User Salary: %.2f", user1.salary);
}
void inputUserData(struct Employee *user1)
{
    printf("Enter Id: ");
    scanf("%d", &user1->id);
    fflush(stdin); // because buffer is full so next fgets function not take name to we use fflush function
    printf("Enter User Name: ");
    fgets(user1->name, sizeof(user1->name), stdin);
    printf("Enter User salary: ");
    scanf("%f", &user1->salary);
}
int main()
{
    struct Employee user1;
    inputUserData(&user1);
    displayUserData(user1);
    return 0;
}
