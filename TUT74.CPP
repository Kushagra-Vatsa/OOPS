/*
FUNCTION OBJECT: Function wrapped in  a class so it is available like an object 
*/
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={10,71,5,9,6,4};
    sort(arr,arr+5);//will sort only till the 5th element.
    //sort(arr,arr+5,greater<int>()); For ascending order
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}