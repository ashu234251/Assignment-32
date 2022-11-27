/*
4. Define a class Addition that can add 2 or 3 numbers of different data types using
function overloading.
*/
#include<iostream>
using namespace std;
class Addition
{
    public:
      void add(float a,float b,float c=0)
      {
        cout<<"Sum is: "<<a+b+c<<endl;
      }
};
int main()
{
    Addition a1,a2,a3;
    a1.add(5,4,3);
    a1.add(5.4,6.3,4.6);
    a1.add(2.3,4.8);

    return 0;
}