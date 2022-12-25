
//2.Define a class Complex with appropriate instance variables and member functions.
//  One of the functions should be setData() to set the properties of the object.
//  Makesure the names of formal arguments are the same as names of instance variables


#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex(int x, int y)
    {
        real = x;
        img = y;
    }
    Complex() {}
    void setData(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    friend ostream &operator<<(ostream &output, Complex c);
    friend istream &operator>>(istream &input, Complex c);
};
ostream &operator<<(ostream &output, Complex c)
{
    output << "Real = " << c.real << " Imag = " << c.img << endl;
    return output;
}
istream &operator>>(istream &input, Complex c)
{
    input >> c.real >> c.img;
    return input;
}
int main()
{
    Complex c1, c2;
    c1.setData(3, 4);
    c2.setData(5, 3);
    cout << c1 << c2;
    return 0;
}
