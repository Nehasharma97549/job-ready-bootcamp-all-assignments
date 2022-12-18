//2- function to take input employee data from the user

#include <stdio.h>
struct Employee
{
    int id;
    float salary;
    char name[20];
};
void inputUserData(struct Employee user1)
{
    printf("Enter Id: ");
    scanf("%d", &user1.id);
    fflush(stdin); // because buffer is full so next fgets function not take name to we use fflush function
    printf("Enter User Name: ");
    fgets(user1.name, sizeof(user1.name), stdin);
    printf("Enter User salary: ");
    scanf("%f", &user1.salary);


}
int main()
{
    struct Employee user1;
    inputUserData(user1);
    printf("name=%s, id=%d ,salary=%d");
    return 0;
}
