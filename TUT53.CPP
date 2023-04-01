#include<iostream>
using namespace std;
class A
{
    int a;
    public:
        void setdata(int a)
        {
            //a=a; This Wont give an error but will give us a garbage value ... To avoid this we use 
            // 'this' pointer 
            this->a=a;
        }
        void display()
        {
            cout<<"The value of a is "<<a<<endl;
        }
};
int main()
{
    //this is a keyword,which is a pointer which points to the object which invokes the member function
    A obj;
    obj.setdata(4);
    obj.display();
    return 0;
}