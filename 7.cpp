/*
7. C++ Program to illustrate the use of Constructors in single inheritance of your choice.
*/
#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"Default Contsructor of A called."<<endl;
    }
    A(int x)
    {
        cout<<"Parameterised Constructor of A(one) called. "<<x<<endl;
    }
    A(int x,int y)
    {
        cout<<"Parameterised Constructor of A(two) called."<<endl;
    }
};
class B:public A
{
    public:
    B():A(5)
    {
        cout<<"Default Contsructor of B called."<<endl;
    }
    B(int x)
    {
        cout<<"Parameterised Constructor of B(one) called."<<endl;
    }
};

int main()
{
    A(5,6);
    B b1;
    B b2(6);
    

    return 0;
}
