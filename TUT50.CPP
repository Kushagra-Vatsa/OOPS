#include<iostream>
using namespace std;
int main()
{
    // Basic Example 
    int a=4;
    int* ptr=&a;
    cout<<"Address of a is "<<ptr<<endl;
    cout<<"The value at ptr is "<<*(ptr)<<endl;

    // new operator---> The new operator denotes a request for memory allocation on the Free Store.
    int *p=new int(40);
    float *P=new float(1.69);
    cout<<"Address of integer 40 is "<<p<<endl;
    cout<<"The value at address p is "<<*(p)<<endl;
    cout<<"Address of float 1.69 is "<<P<<endl;
    cout<<"The value at address P is "<<*(P)<<endl;
    

    int *arr=new int[3];
    arr[0]=10;
    arr[1]=20; // Can also write as *(arr+1)=20;
    arr[2]=30; // Can also write as *(arr+2)=30
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    // delete operator ---> The delete operator is used to deallocate the memory.
    // User has privilege to deallocate the created pointer variable by this delete operator
    delete[] arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    return 0;
}