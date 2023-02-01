//2- //3-write a c++ program to find the largest among two numbers   using a  function template .//




#include <iostream>
using namespace std;
template <typename X, typename Y>
Y largestNo(X x, Y y)
{
    return x > y ? x : y;
}
int main()
{
    cout<<largestNo(5,3.2);
    return 0;
}
