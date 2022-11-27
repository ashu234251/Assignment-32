/*
3. Define a base class Animals having member function sound() . Define another
derived class from Animals class named Dogs. You need to override the sound
function of the base class in the derived class.
*/
#include<iostream>
using namespace std;
class Animals
{
    public:
     void sound()
      {
        cout<<"It is sound of an animal"<<endl;
      }
};
class Dogs:public Animals
{
    public:
      void sound()
      {
        cout<<"It is sound of Dog"<<endl;
      }
};
int main()
{
    Animals a1;
    Dogs d1;
    a1.sound();
    d1.sound();

    cout<<endl;
    Animals *pa1,*pa2;
    Dogs *pd1,*pd2;
    pa1=&a1;      // Animal pointer pointing to animal object(No issue)
    pd1=&d1;      // Dogs pointer pointing to dogs object(No issue)
    pa2=&d1;      // Animal pointer pointing to dogs object.Base pointer pointing to child object (Allowed)
    // pd2=&a1;   // Dog pointer pointing to animal objetc. Child pointer pointing to Base objetc (Not Allowed.)
    
    pa1->sound();
    pd1->sound();
    pa2->sound();
    return 0;
}