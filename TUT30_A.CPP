#include<iostream>
using namespace std;
class Point
{
    int a,b;
    public:
        Point(int x,int y)
        {
            a=x;
            b=y;
        }
        void dispPoint()
        {
            cout<<"The point is "<<"("<<a<<","<<b<<")"<<endl;
        }
};
int main()
{
    Point P(1,3);
    Point Q=Point(1,2);
    P.dispPoint();
    Q.dispPoint();
    return 0;
}