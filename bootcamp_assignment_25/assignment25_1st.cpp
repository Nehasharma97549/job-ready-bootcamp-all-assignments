
 //define a class complex to represent a complex number.declare instance member variables to store real and imaginary part of a complex number,also define instance member functions to set values of complex number and print values of complex number//

#include <iostream>
using namespace std;
class Complext
{
private:
    int real, img;

public:
    void setValue(int x, int y)
    {
        real = x;
        img = y;
    }
    void showValue()
    {
        cout << "Complext number: " << real << "+" << img << "i";
    }
};
int main()
{
    Complext c;
    c.setValue(5, 4);
    c.showValue();
    return 0;
}
