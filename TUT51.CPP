#include<iostream>
using namespace std ;
class Complex
{
    int real,imaginary;
    public:
    void setdata(int a,int b)
    {
        real=a;
        imaginary=b;
    }
    void getdata()
    {
        cout<<"The value of real part is "<<real<<endl;
        cout<<"The value of imaginary part is "<<imaginary<<endl;
    }
};
int main()
{
    //Complex c1,c2;
    //c1.setdata(1,2);
    //c1.getdata();
    //Complex *ptr=&c2; // Pointer to an Object // Can also be written as 
    Complex *ptr=new Complex ;
    (*ptr).setdata(2,4);
    (*ptr).getdata();
    ptr->setdata(2,4);
    ptr->getdata();

    
    /*
    Arrow Operator 
    (*ptr).setdata(2,4); is same as ptr->setdata(2,4);
    (*ptr).getdata(); is same as ptr->getdata();
    */

   // Array of objects 
   Complex *ptr1=new Complex[5] ;
   ptr1->setdata(5,5);
   ptr1->getdata();
   
    return 0;
}