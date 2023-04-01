#include<iostream>
using namespace std;
class Item
{
    int id;
    float price;
    public:
    void setdata(int a,float b)
    {
        id=a;
        price=b;
    }
    void display()
    {
        cout<<"Code of this Item is "<<id<<endl;
        cout<<"Price of this item is "<<price<<endl;
    }
};
int main()
{
    int size=5;
    // int *ptr=&size; 
    Item *ptr=new Item[size];
    Item *ptrtemp=ptr;// Since at the end of first loop , ptr points to the last blog 
    // we cannot use ptr in the next loop , so we created anoted pointer which points to the starting block
    int p;
    float q;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the Id and Price of item : "<<i+1<<endl;
        cin>>p>>q;
        //(*ptr).setdata(p,q);
        ptr->setdata(p,q);
        ptr++;
    }
    for(int j=0;j<size;j++)
    {
        cout<<"Item Number : "<<j+1;
        ptrtemp->display();
        ptrtemp++;
    }
    return 0;
}