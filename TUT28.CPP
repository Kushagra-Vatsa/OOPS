#include<iostream>
using namespace std;
class Y;//here class Y is declared before, because class X contains object and details of class Y 
class X
{
    int data;
    public:
        void setvalue(int value)
        {
            data=value;
        }
        friend void add(X,Y);
};
class Y
{
    int num;
    public:
        void setvalue(int value)
        {
            num=value;
        }
        friend void add(X,Y);
};
void add(X o1, Y o2)
{
    cout<<"Sum is "<<o1.data+o2.num<<endl;
}
int main()
{
    X a;
    Y b;
    a.setvalue(3);
    b.setvalue(5);
    add(a,b);
    return 0;
}