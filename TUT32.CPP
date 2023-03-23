#include<iostream>
using namespace std;
class Simple
{
    int data1,data2,data3;
    public:
        Simple(int x,int y=9,int z=10)
        {
            data1=x;
            data2=y;
            data3=z;
        }
        void display();
};
void Simple::display()
{
    cout<<"The value of data1 , data2 and data3 are "<<data1<<" , "<<data2<<" and "<<data3<<endl;
}
int main()
{
    Simple S1(1,2,3);
    Simple S2(1,2);
    Simple S3(1);
    S1.display();
    S2.display();
    S3.display();
    return 0;
}

/* Here the value of data members take default value when their corresponding arguments are not given .
 However when their corresponding values given then the default values are updated .
*/ 