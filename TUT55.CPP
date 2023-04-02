/*
    This Program shows that a BASE class POINTER can point to the Derived class OBJECT .
    Even if we point a Base class pointer to a Derived class object and call a member function 
    present in both , the Base class Function will be called .
*/
#include<iostream>
using namespace std;
class Base
{
    public:
    int var_Base;
    void display()
    {
        cout<<"Displaying Base class Variable : "<<var_Base<<endl;
    }
};
class Derived : public Base
{
    public:
    int var_Derived;
    void display()
    {
        cout<<"Displaying Derived class Variable : "<<var_Derived<<endl;
    }
};

int main()
{
    Base obj_Base;
    Derived obj_Derived;
    Base *Base_class_Pointer;
    Base_class_Pointer = &obj_Derived; // Base class pointer points to the Derived class object .
    Base_class_Pointer->var_Base=1;  // We can access members of Base class using Pointer. 
    // Base_class_Pointer->var_Derived=2; This will give an Error !!!
    Base_class_Pointer->display(); // However when we call a function that is present in both 
    // Base class and Derived class , the Base class function will be called , since it is a pointer of Base class .
    // This is called LATE BINDING
    Derived *Derived_class_Pointer;
    Derived_class_Pointer=&obj_Derived;
    Derived_class_Pointer->var_Derived=5;
    Derived_class_Pointer->display();
    return 0;
}