#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
        int x,y;
        Complex(int x,int y)
        {
            a=x;
            b=y;
        }
        Complex(int x)
        {
            a=x;
            b=0;
        }
        Complex()
        {
            a=0;
            b=0;
        }
        void printnum()
        {
            cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main()
{
    Complex A(1,2);
    Complex B(5);
    Complex C;
    A.printnum();
    B.printnum();
    C.printnum();
    return 0;
}
/* There can be multiple constructors in a program .
   There can be different constructors just by changing the types of parameters they are accepting .
*/    