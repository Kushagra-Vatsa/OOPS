#include<iostream>
using namespace std;
/*
    Syntax for Initialisation List in Constructor : 
    Constructor(Argument-List): Initialization-Section
    {
        Assignment + other code;
    }
*/
class Test
{
    int a,b;
    public:
    // Test(int i,int j):a(i),b(j)     ---> Correct 
    // Test(int i,int j):a(i),b(i+j)   ---> Correct
    // Test(int i,int j):a(i),b(2*j)   ---> Correct
    // Test(int i,int j):a(i),b(a+j)   ---> Correct
    // Test(int i,int j):b(j),a(i+b)   ---> 
    /* Will give an garbage value as here b is initialised first 
    but declared after a in the class .... If b was first declared then it will give the correct value 
    int b ; int a;
    */
    Test(int i,int j):a(i)
    {
        b=j;
        cout<<"Constructor Body"<<endl;
        cout<<"Value of a and b is "<<a<<" and "<<b<<endl;
    }
};
int main()
{
    Test t(4,6);
    return 0;
}