#include<iostream>
using namespace std;
/*
Syntax for Multiple Inheritance :
class <Derived Class>:<Visibility mode> <Base class 1> , <Visibility mod> <Base class 2>
{
    class body of derived class 
}
*/
class Base1
{
    protected:
    int Base1int;
    public:
    void setBase1_int(int x)
    {
        Base1int=x;
    }
};
class Base2
{
    protected:
    int Base2int;
    public:
    void setBase2_int(int y)
    {
        Base2int=y;
    }
};
class Derived : public Base1,public Base2
{
    public:
    void show ()
    {
        cout<<"The value of Base 1 is "<<Base1int<<endl;
        cout<<"The value of Base 2 is "<<Base2int<<endl;
        cout<<"The Sum of these value is "<<Base1int+Base2int<<endl;
    }
};
int main()
{
    Derived Kushagra ;
    Kushagra.setBase1_int(5);
    Kushagra.setBase2_int(25);
    Kushagra.show();
    return 0;
}
/*
The inherited class will loke something like this 
Data Members - 
Base1int , Base2int --> Protected
Member Functions - setBase1_int(int x),setBase2_int(int y),show() ---> Public
*/
