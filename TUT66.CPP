#include<iostream>
using namespace std;
template<class T1=int,class T2=float,class T3=char>
class Kushagra
{
        T1 a;
        T2 b;
        T3 c;
    public:
        //T1 a;
        //T2 b;
        Kushagra(T1 x,T2 y,T3 z)
        {
            a=x;
            b=y;
            c=z;
        }
        void display()
        {
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};
int main()
{
    Kushagra <> K(1,4.5,'c'); // Since we have not passed any argument , default argument is used .
    K.display();
    Kushagra <float,char,char> Ku(1.4,'f','d');
    Ku.display();
    return 0;
}