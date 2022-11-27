/*
1. Create a class FLOAT that contains one float data member. Overload all the four
arithmetic operators so that they can operate on the objects of FLOAT.
*/
#include<iostream>
using namespace std;
class Float
{
      float a;
    public:
      Float()
      {}
      Float(float x)
      {
        a=x;
      }
      Float operator+(Float F)
      {
        Float temp;
        temp.a=a+F.a;
        return temp;
      }
      Float operator-(Float F)
      {
        Float temp;
        temp.a=a-F.a;
        return temp;
      }
      Float operator*(Float F)
      {
        Float temp;
        temp.a=a*F.a;
        return temp;
      }
      Float operator/(Float F)
      {
        Float temp;
        temp.a=a/F.a;
        return temp;
      }
      
      float getA()
      {
        return a;
      }
};
int main()
{
    Float f1(11.1),f2(20.2),f3;
    f3=f1+f2;
    cout<<"Sum is: "<<f3.getA()<<endl;
    f3=f1-f2;
    cout<<"Subtraction is: "<<f3.getA()<<endl;
    f3=f1*f2;
    cout<<"Multiplication is: "<<f3.getA()<<endl;
    f3=f1/f2;
    cout<<"Division is: "<<f3.getA()<<endl;

    return 0;
}