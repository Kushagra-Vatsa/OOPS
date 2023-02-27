#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
        Complex(int x,int y);//Constructor declaration --> This is a parameterized Constructor.
        void display()
        {
            cout<<" Your Complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
Complex::Complex(int x,int y)
{
    a=x;
    b=y;
}
int main()
{
    //Implicit call
    Complex a(5,10);//This is a parameterized constructor as it takes 2 parameters
    a.display();
    //Explicit call
    Complex b=Complex(5,7);//This is a parameterized constructor as it takes 2 parameters
    b.display();
    return 0;
}