/* 
Properties of Friend Function :
    Not in scope of class
    It cannot be called from object of the class like o1.sumComplex
    Can be invoked directly without the help of any object 
    Usually contains objects as arguments 
    Can be declared inside public or private parts
    It cannot access the members directly by their names and need need objects  
 */   
#include<iostream>
using namespace std;
class complex
{
    int a;
    int b;
    friend complex sumcomplex(complex o1,complex o2);//Since sumcomplex function is defined outside 
    //the class , we use friend function to give access of private members to the function outside the 
    //class
    public:
        void getdata(int v1,int v2)
        {
            a=v1;
            b=v2;
        }
        
        void displaynum()
        {
            cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};
complex sumcomplex(complex o1,complex o2)
{
    complex o3;
    o3.getdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    complex o1,o2,sum;
    o1.getdata(1,2);
    o1.displaynum();
    o2.getdata(3,4);
    o2.displaynum();
    sum=sumcomplex(o1,o2);
    sum.displaynum();
    return 0;
}
