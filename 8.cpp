/*
8. Write a C++ program to find the factorial of a number using copy constructor
*/
#include<iostream>
using namespace std;
class Factorial
{
    int n;
    public:
    void setValue(int x)
    {
        n=x;
    }
    Factorial()
    {}
    Factorial(Factorial &F)
    {
        cout<<"Copy Constructor Called."<<endl;
        int f=1;
        for(int i=1;i<=F.n;i++)
        {
          f=f*i;
        }
        cout<<"Factorial of "<<F.n<<" is: "<<f<<endl;
    }
};
int main()
{
    Factorial f1;
    int n;
    cout<<"Enter Value of n: ";
    cin>>n;
    f1.setValue(n);
    Factorial f2=f1;

    return 0;
}