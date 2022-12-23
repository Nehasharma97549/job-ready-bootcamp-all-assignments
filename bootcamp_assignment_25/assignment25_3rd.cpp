//3- define a class factorial and define an instance member function to find the factorial of a number using class.//

#include <iostream>
using namespace std;
class Factorial
{
public:
    int findFactorial(int f)
    {
        int fact = 1;
        for (int i = 2; i <= f; i++)
            fact = fact * i;
        return fact;
    }
};
int main()
{
    Factorial f;
    int x;
    cout << "Enter a numebr: ";
    cin >> x;
    cout << "Factorial is: " << f.findFactorial(x);
    return 0;
}
