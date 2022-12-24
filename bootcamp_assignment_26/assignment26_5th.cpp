//5- define a class date and write a program to display dateand initialise date object using constructors.//
#include <iostream>
using namespace std;
class Date
{
private:
    int dd, mm, yy;

public:
    Date(int x, int y, int z)
    {
        dd = x;
        mm = y;
        yy = z;
    }
    void displayDate()
    {
        cout << "DD = " << dd << ", MM = " << mm << ", YY = " << yy << endl;
    }
};
int main()
{
    Date d(17,10,2022);
    d.displayDate();
    return 0;
}
