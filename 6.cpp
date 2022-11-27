/*
6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your
choice.
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
class C: public B
{
    public:
    C()
    {
        cout<<"Default Contsructor of C called."<<endl;
    }
    C(int x)
    {
        cout<<"Parameterised Constructor of C(one) called."<<endl;
    }
};

int main()
{
    B b1;
    B b2(6);
    cout<<endl<<endl;
    
    C c1;

    return 0;
}
