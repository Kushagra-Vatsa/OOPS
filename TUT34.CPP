#include<iostream>
using namespace std;
class Number
{
    int a;
    public:
        Number()
        {
            a=0;
        }
        Number(int num)
        {
            a=num;
        }
        // Note - If a copy constructor is not defined by the user , the compiler itself generates 
        // a copy constructor when the user invokes a copy constructor .
        
        Number(Number &obj)
        {
            cout<<"Copy constructor called !!!!!!!"<<endl;
            a=obj.a;
        }
        
        void display()
        {
            cout<<"The number is "<<a<<endl;
        }

};


int main()
{
    Number x,y,z(6),z3;
    x.display();
    y.display();
    z.display();
    Number z1=z;
    z1.display();
    Number z2(z);
    z2.display();
    //z3=z; It will throw an error as z3 was already declared before ;
    return 0;
}