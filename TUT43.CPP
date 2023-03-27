/* 
    Ambiguity - For example It arises in multiple inheritance if there are functions with same name 
    in the BASE classes , and when the function is called in Derived class it produces ambiguity
    */
#include<iostream>
using namespace std;
class Base1
{
    public:
    void greet()
    {
        cout<<"How are you ?"<<endl;
    }
};
class Base2
{
    public:
    void greet()
    {
        cout<<"Aap kaise ho ?"<<endl;
    }
};
class Derived1:public Base1 , public Base2
{
    public:
    void greet()
    {
        Base1::greet();
    }
};
class Derived2:public Base1 , public Base2
{
    public:
    void greet()
    {
        Base2::greet();
    }
};
int main()
{
    Base1 obj;
    Base2 OBJ;
    Derived1 d;
    Derived2 D;
    obj.greet();
    OBJ.greet();
    d.greet();
    D.greet();
    return 0;
}