
// 9.Create an Integer class that contains int x as an instance variable and overloadcasting int() operator
// that will type cast your Integer class object to int data type.


#include <iostream>
using namespace std;
class Integer
{
private:
    int x;

public:
    Integer() {}
    Integer(int x) { this->x = x; }
    operator int()
    {
        return x;
    }
};
int main()
{
    Integer i1(5);
    int x = i1;
    cout << "Value of x = " << x << endl;
    return 0;
}
