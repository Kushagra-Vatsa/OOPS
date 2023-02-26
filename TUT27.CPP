#include<iostream>
using namespace std;
class Complex; //Forward declaration because Calculator contains objects and data members which are 
//declared inside Complex;
class Calculator
{
    public:
        int add(int a,int b)
        {
            return (a+b);
        }
        int sumrealComplex(Complex ,Complex ); 
        int sumcompComplex(Complex, Complex );
         
        
};
class Complex
{
    int a,b;
    //Syntax to declare a friend function of other class 
    // friend <data type> < accessed class > :: <function name(parameters); 
    friend int Calculator::sumrealComplex(Complex o1,Complex o2);//Individually declaring as friend
    friend int Calculator::sumcompComplex(Complex o1,Complex o2); //Individually declaring as friend
    // Here to use a function we have to separately make these function a friend function
    // To make the whole class as friend we can write 
    // friend class Calculator; Synatx: friend class <class name>;
    public:
        void setnumber(int v1,int v2)
        {
            a=v1;
            b=v2;
        }
        void printnumber()
        {
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int Calculator :: sumrealComplex(Complex o1,Complex o2)
{
    return (o1.a+o2.a);
}
int Calculator :: sumcompComplex(Complex o1,Complex o2)
{
    return(o1.b+o2.b);
}
int main()
{
    Complex o1,o2;
    o1.setnumber(1,4);
    o2.setnumber(4,7);
    Calculator Calc;
    int res=Calc.sumrealComplex(o1,o2);
    cout<<"The sum of real part are "<<res<<endl;
    int resc=Calc.sumcompComplex(o1,o2);
    cout<<"The sum of imaginary parts are "<<resc<<endl;
    return 0;
}


