#include <iostream>
using namespace std;
class Complex
{
        int a;
        int b;
    public:
        void setvalue(int v1,int v2)
        {
            //THIS FUNCTION SETS THE VALUE OF PRIVATE MEMBERS a AND b 
            a=v1;
            b=v2;
        }
        void addcomplex(Complex c1,Complex c2)
        {
            //This function uses 2 complex class as its parameter and adds the real and imaginary 
            //paet of the complex number
            a=c1.a+c2.a;
            b=c1.b+c2.b;
        }
        void display()
        {
            cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main() {
    Complex c1,c2,sum;
    c1.setvalue(1,3);
    c1.display();
    c2.setvalue(2,4);
    c2.display();
    sum.addcomplex(c1,c2);
    sum.display();
    return 0;
}