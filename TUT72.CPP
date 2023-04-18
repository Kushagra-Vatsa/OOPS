/*
    Lists are sequence containers that allow non-contiguous memory allocation.
    As compared to the vector, the list has slow traversal, but once a position has been found,
    insertion and deletion are quick (constant time)
*/
#include<iostream>
#include<list>
using namespace std;
void display(list<int>&lst)
{
    list<int>::iterator it;
    for(it=lst.begin();it!=lst.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1;//List of zero length
    
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);

    //list<int>::iterator iter;
    // iter=list1.begin();
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // To avoid this tedious work we use display function .
    display(list1);
    // To sort the list 
    //list1.sort();
    //display(list1);

    // To reverse the list 
    list1.reverse();
    display(list1);
    list1.pop_back();
    display(list1);
    list1.pop_front();
    display(list1);
    list1.remove(1);
    display(list1);

    list<int> list2(3);//Empty length of size 3
    list<int>::iterator iter1;
    iter1=list2.begin();
    *iter1=45;
    iter1++;
    *iter1=6;
    iter1++;
    *iter1=9;
    iter1++;
    display(list2);

    // To merge the 2 list 
    list1.merge(list2);
    display(list1);

    return 0;
}