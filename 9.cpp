/*
9. Write a C++ program to calculate the area of triangle, rectangle and circle using
constructor overloading. The program should be menu driven.
*/

/*
#include<iostream>
using namespace std;
class Area
{
    public:
      Area(float b,float h)
      {
        cout<<"Area of Triangle is: "<<(b*h)/2<<endl;
      }
       Area(float l,float b)
      {
        cout<<"Area of Rectangle is: "<<l*b<<endl;
      }
      
      Area(float r)
      {
        cout<<"Area of Circle is: "<<(3.14*r*r)<<endl;
      }
};
int main()
{
    while(1)
    {
        cout<<"1.Triangle"<<endl;
        cout<<"2.Rectangle"<<endl;
        cout<<"3.Circle"<<endl;

        int choice;
        cout<<"Enter Your Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
              cout<<"Enter Base of triangle: ";
              float b;
              cin>>b;
              cout<<"Enter Height of triangle: ";
              float h;
              cin>>h;
              Area a(b,h);
              break;
            }
            case 2:
              return 0;
            case 3:
            {
              cout<<"Enter Radius of Circle: ";
              float r;
              cin>>r;
              Area a(r);
              break;
            }
        }
    }
    return 0;
}
*/

#include<iostream>
using namespace std;
class Shape
{
    public:
      virtual void area()=0;
};
class Triangle:public Shape
{
    float base,height;
    public:
      void area()
      {
        cout<<endl;
        cout<<"Enter base of Triangle: ";
        cin>>base;
        cout<<"Enter height of Triangle: ";
        cin>>height;
        cout<<"Area of Triangle is: "<<(base*height)/2<<endl;
      }
};
class Rectangle:public Shape
{
      float length,breadth;
    public:
      void area()
      {
        cout<<endl;
        cout<<"Enter length of Rectangle: ";
        cin>>length;
        cout<<"Enter breadth of Rectangle: ";
        cin>>breadth;
        cout<<"Area of Rectangle is: "<<length*breadth<<endl; 
      }
};
class Circle:public Shape
{
      float radius;
    public:
      void area()
      {
        cout<<endl;
        cout<<"Enter radius of Circle: ";
        cin>>radius;
        cout<<"Area of Circle is: "<<3.14*radius*radius<<endl;
      }
};
int main()
{
    while(1)
    {
        cout<<"1.Triangle"<<endl;
        cout<<"2.Rectangle"<<endl;
        cout<<"3.Circle"<<endl;

        int choice;
        cout<<"Enter Your Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
              Triangle t;
              t.area();
              cout<<endl<<endl;
              break;
            }
            case 2:
            {
              Rectangle r;
              r.area();
              cout<<endl<<endl;
              break;
            }
            case 3:
            {
              Circle c;
              c.area();
              cout<<endl<<endl;
              break;
            }
        }
    }   

    return 0;
}