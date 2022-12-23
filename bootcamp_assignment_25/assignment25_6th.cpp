//6- find the square of a number and write a c++ program to count number of times a fuction is called.//
#include<iostream>
using namespace std;
class square
{
public:
    int s;
    int sqr;
public:
   void setsquare(int r)
   {s=r;}
   void getsquare()
   {sqr=s*s;
    cout<<sqr;}
};
int main()
{
    square s1;
    cout<<"Enter Number to calculate square:";
    cin>>s1.s;
    s1.getsquare();
    return 0;
}

