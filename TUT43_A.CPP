#include<iostream>
using namespace std;
class Base
{
    public:
    void function()
    {
        cout<<"Inside Base class "<<endl;
    }
};
class Derived : public Base
{
    public:
    void function()
    {
       cout<<"Inside Derived class "<<endl;
    }
};
int main()
{
    Base b;
    Derived d;
    b.function();
    d.function();
    // However if the defination of function() was not given in Derived class then the object 
    // of Derived class when used to call function will call the function present in Base class 
    return 0;
}