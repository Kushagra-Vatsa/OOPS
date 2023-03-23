#include<iostream>
#include<cmath>
using namespace std;
class Point
{
    int a,b;
    friend void distance(Point,Point);
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
void distance(Point P, Point Q)
{
    int x_diff=(Q.a-P.a);
    int y_diff=(Q.b-P.b);
    int diff = sqrt(pow(x_diff,2)+pow(y_diff,2));
    cout<<"The distance between these points are "<<diff<<endl;
}

int main()
{
    Point P(1,3);
    Point Q=Point(1,2);
    P.dispPoint();
    Q.dispPoint();
    distance(P,Q);
    Point R(5,9);
    Point S(10,18);
    R.dispPoint();
    S.dispPoint();
    distance(R,S);
    return 0;
}