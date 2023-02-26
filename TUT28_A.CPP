#include<iostream>
using namespace std;
class c2;
class c1
{
    int val1;
    public:
        void indata(int a)
        {
            val1=a;
        }
        void display()
        {
            cout<<val1<<endl;
        }
        friend void swap(c1 &,c2 &);
};
class c2
{
    int val2;
    public:
        void indata(int b)
        {
            val2=b;
        }
        void display()
        {
            cout<<val2<<endl;
        }
        friend void swap(c1 &,c2 &);
};
void swap(c1 &x,c2 &y)
{
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}
int main()
{
    c1 a;
    c2 b;
    a.indata(5);
    b.indata(10);
    cout<<"The value of val1 and val2 before exchange is ";
    a.display();
    cout<<" and ";
    b.display();
    swap(a,b);
    cout<<"The value of val1 and val2 after exchange is ";
    a.display();
    b.display();
    
    return 0;
}