#include<iostream>
using namespace std;
/*
    Case 1:
    class B:public A
    {
        Order of Execution of constructor : first A() then B()
        since Base class Constructor is executed first 
    };
    Case 2:
    class A:public B:public C
    {
        Order of Execution of Constructor : First B(),then C() and lastly A()
    };
    Case 3:
    class A:public B:virtual public C 
    {
        Order of Execution of Constructor : First C() , then B() and lastly A()
            Since Constructor of Virtual Base class are executed first .
    }
*/
class Base1
{
    int Data1;
    public:
    Base1(int i)
    {
        Data1=i;
        cout<<" Base1 class Constructor called "<<endl;
    }
    void PrintData1()
    {
        cout<<" The Value of Data is "<<Data1<<endl;
    }
};
class Base2
{
    int Data2;
    public:
    Base2(int j)
    {
        Data2=j;
        cout<<" Base2 class Constructor called "<<endl;
    }
    void PrintData2()
    {
        cout<<" The Value of Data is "<<Data2<<endl;
    }
};
class Derived:public Base1,public Base2
{
    int derived1,derived2;
    public:
    Derived(int a,int b,int c,int d):Base1(a),Base2(b)//Even if we write Base2(b) first and then Base1(a)
    // still the output will be same , as Order of Execution depends on Derived class Defination line .
    {
        derived1=c;
        derived2=d;
        cout<<" Derived class Constructor called "<<endl;
    }
    void PrintData_Derived()
    {
        cout<<" The Value of derived1 is "<<derived1<<endl;
        cout<<" The Value of derived2 is "<<derived2<<endl;

    }
};
int main()
{
    Derived Kushagra(1,2,3,4);
    Kushagra.PrintData1();
    Kushagra.PrintData2();
    Kushagra.PrintData_Derived();
    return 0;
}