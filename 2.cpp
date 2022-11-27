/* 2. Define a class Rectangle and overload area function 
      for different types of data type.
*/
#include<iostream>
using namespace std;
class Rectangle
{ 
    public:
    Rectangle()
    {
    }
    public:
      void area(int l,int b)
      {
        cout<<"Area of the Rectangle is: "<<l*b<<endl;
      }
      void area(float l,float b)
      {
        cout<<"Area of Rectangle is: "<<l*b<<endl;
      }
};
int main()
{
  Rectangle r1,r2;
  int a=2,b=5;
  float x=2.5,y=10.1;
  r1.area(a,b);
  r2.area(x,y);
  r2.area(2.4,8);
  return 0;
}