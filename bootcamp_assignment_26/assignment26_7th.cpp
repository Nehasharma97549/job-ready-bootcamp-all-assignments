//7-define a class box and write a program to enter length,breadth, and hight and initilise objects using constructore also define member functions to calculate volume of the box.//


#include <iostream>

using namespace std;
class Box
{
private:
    int length, breath, height;

public:
    Box(int x, int y, int z)
    {
        length = x;
        breath = y;
        height = z;
    }
    int volOfBox()
    {
        return length * breath * height;
    }
};
int main()
{
    Box b(2, 4, 6);
    cout << "Volume of Box is: " << b.volOfBox() << endl;

    return 0;
}
