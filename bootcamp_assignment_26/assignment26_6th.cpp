//6- define a class student and write a program to enter student details using constructor and define member function to display all the details.//
#include <iostream>
#include <string.h>
using namespace std;
class Student
{
private:
    int rollNo, age;
    long int mobileNo;
    char name[20];

public:
    Student(int x, char studentName[], int y, int z)
    {
        rollNo = x;
        strcpy(name, studentName);
        age = y;
        mobileNo = z;
    }
    void displayStudentData()
    {
        cout << "Roll No. - " << rollNo << ", Name - " << name << ", Age - " << age << ", Mobile No. - " << mobileNo << endl;
    }
};
int main()
{
    Student st(32, "nehaa", 20, 1234567894);
    st.displayStudentData();
    return 0;
}
