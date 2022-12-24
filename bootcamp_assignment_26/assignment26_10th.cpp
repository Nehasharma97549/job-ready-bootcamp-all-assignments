// 10- define a class staticCount and create a static variables.increment this variables in a function and call this 3 times and display the result.//
#include <iostream>
using namespace std;
class StaticCount
{
private:
    static int count;

public:
    static int fun()
    {
        count++;
    }
    static int getCount()
    {
        return count;
    }
};
int StaticCount::count = 0;
int main()
{
    StaticCount::fun();
    StaticCount::fun();
    StaticCount::fun();
    StaticCount::fun();
    cout << "Calling times: " << StaticCount::getCount();
    return 0;
}
