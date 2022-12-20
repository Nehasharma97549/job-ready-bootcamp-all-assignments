
/*
8. Write a C++ program to swap values of two int variables without using third variable
*/



#include <iostream>
using namespace std;
int main()
{
    int num1 = 10, num2 = 20;
    cout << "Before Swapping, a = " << num1 << " b = " << num2 << endl;
    num1 = num1 + num2; // 30
    num2 = num1 - num2; // 20
    num1 = num1 - num2; // 10


    cout << "After Swapping, a = " << num1 << " b = " << num2 << endl;
    return 0;
}
