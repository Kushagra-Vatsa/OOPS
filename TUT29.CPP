#include<iostream>
using namespace std;
// Constructor is a special member function function with same name as of the class .
// It is used to initialise the object of its class .
class Complex
{
    int a,b;
    public:
        Complex();//Constructor declaration . It is automatically invoked whenever an object is created.
        void disp()
        {
            cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
Complex:: Complex() // ---> This is a defualt Constructor as it takes no parameters
{
    a=10;
    b=4;
}
int main()
{
    Complex c;
    c.disp();
    return 0;
}
/* 
Properties of Constructor 
1)It should always be declared in the public section of the class .
2)They are automatically invoked when the object is created .
3)Do not have return type . They cannot return value and do not have return types .
4)It can have default arguments.
5)We cannot refer to their address .
*/