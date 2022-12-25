
// 11.Create a class Marks that have one member variable marks and one member function that will print marks.
// We know that we can access member functions using(.) dot operator.
// Now you need to overload (->) arrow operator to access that function.

#include <iostream>
using namespace std;
class Marks
{
private:
    int marks;

public:
    Marks() {}
    Marks(int x) { marks = x; }
    void printMarks() { cout << "Marks: " << marks << endl; }
    Marks *operator->()
    {
        return this;
    }
};

int main()
{
    Marks m1(55), m2;
    m1->printMarks();
    return 0;
}
