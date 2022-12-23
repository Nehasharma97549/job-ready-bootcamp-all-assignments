//2- define a class time to represent time (like 3hr 45 min 20sec.)declare appropriate number of instance number variables and also define instance member functions to set values for time and display value of time.//

#include <iostream>
using namespace std;
class Time
{
private:
    int hrs, min, sec;

public:
    void setTime(int h, int m, int s)
    {
        hrs = h;
        min = m;
        sec = s;
    }
    void showTime()
    {
        cout << "Time: " << hrs << " Hours " << min << " Minute " << sec << " Second ";
    }
};
int main()
{
    Time t;
    t.setTime(5, 44, 34);
    t.showTime();
    return 0;
}
