/* 8- define a class bank and define member functions to read principal,rate of interest and year
 .another member functions to calculate simple interest and display it initilise all details using constructor.*/

#include <iostream>
using namespace std;
class Bank
{
private:
    int principal, roi, year;

public:
    Bank(int x, int y, int z)
    {
        principal = x;
        roi = y;
        year = z;
    }
    int simpleIntrest()
    {
        return (principal * roi * year) / 100;
    }
};
int main()
{
    Bank b(2000, 3, 4);
    cout << "simple intrest is: $" << b.simpleIntrest() << endl;
    return 0;
}
