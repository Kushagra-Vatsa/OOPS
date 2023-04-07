#include<iostream>
using namespace std;

// float avg(int x,int y)
// {
//     float average=(x+y)/2.0;
//     return average;
// }
template<class T1,class T2>

float funcavg(T1 a,T2 b)
{
    float avg=(a+b)/2.0;
    return avg;
}
template<class T>
void swapp(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
int main()
{
    // float a=avg(2,3);
    // printf("The average of these numbers is %.3f",a);
    float a,b,c;
    a=funcavg(2,2);
    b=funcavg(2.1,2.9);
    c=funcavg(1,5.8);
    cout<<a<<endl<<b<<endl<<c<<endl;

    int x=2;
    int y=3;
    swapp(x,y);
    cout<<x<<" and "<<y<<endl;
    return 0;
}