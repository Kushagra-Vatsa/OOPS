#include<iostream>
using namespace std;
class Base
{
    protected: // It can be inherited 
    int a;
    private:
    int b;

};
/*
For a Protected member
                       Public            Private            Protected 

1.Private members-    Not Inherited     Not Inherited      Not Inherited 

2.Protected members-    Protected         Private           Protected 

3.Public members-       Public             Private          Protected  

*/
class Derived : protected Base
{

};
int main()
{
    Base b;
    Derived d;
    //cout<<d.a; Will produce an error as a is a protected members in both Base and Derived class 
    return 0;
}