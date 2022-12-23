
#include<iostream>
using namespace std;

//5. Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class.
class ReverseNumber
{
private:
    int num,Rnum=0;
public:
    void getnum()
    {
        cout<<"Enter Number:";
        cin>>num;
    }
    void ReverseNum()
    {
        while(num)
         {
          int remain;
          remain=num%10;
          Rnum*=10;
          Rnum+=remain;
          num/=10;
         }
         cout<<Rnum;
    }
};
int main()
{
    ReverseNumber R1;
    R1.getnum();
    R1.ReverseNum();
    return 0;
}



