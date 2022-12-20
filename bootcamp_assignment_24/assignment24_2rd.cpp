//3-write a function x raised to the power y.

#include <iostream>
using namespace std;
int power(int x, int y)
{
    int ans = 1;
    for (int i = 1; i <= y; i++)
        ans *= x;

    return ans;
}
int main()
{
    cout << power(3, 3);
    return 0;
}
