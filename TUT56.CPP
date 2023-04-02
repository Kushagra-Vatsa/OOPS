
/*
    In the previous tutorial , we saw that a Base class pointer which points to Derived class Object 
    cannot access the member functions of Derived class , to counter this we use Virtual function .
*/
#include<iostream>
using namespace std;
class Base
{
    public:
    int var_Base=1;
    virtual void display()
    {
        cout<<"1) Displaying Base class Variable : "<<var_Base<<endl;
    }
};
class Derived : public Base
{
    public:
    int var_Derived=2;
    void display()
    {
        cout<<"2) Displaying Base class Variavle : "<<var_Base<<endl;
        cout<<"2) Displaying Derived class Variable : "<<var_Derived<<endl;
    }
};
int main()
{
    Base obj_Base;
    Derived obj_Derived;
    Base *Base_class_Pointer;
    Derived *Derived_class_Pointer;

    Base_class_Pointer=&obj_Derived;
    Base_class_Pointer->display();
    return 0;
}