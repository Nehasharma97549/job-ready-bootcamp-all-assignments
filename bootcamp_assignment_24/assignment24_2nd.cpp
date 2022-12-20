
// 2. Define a function to find the highest value digit in a givev number.

#include <iostream>
using namespace std;
int heighestValueDigit(int digit)
{
    int maxDigit = -1;
    while (digit != 0)
    {
        if (maxDigit < digit % 10)
            maxDigit = digit % 10;
        digit /= 10;
    }

    return maxDigit;
}
int main()
{
    cout << heighestValueDigit(6910);
    return 0;
}
