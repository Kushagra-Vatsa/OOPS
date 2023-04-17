#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){ 
    vector<int> vec1; // zero length vector 
    int element, size;
    cout<<"Enter the size of your vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector: ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    vec1.pop_back();//removes the last element from vector 
    display(vec1);  
    vector<int>::iterator iter=vec1.begin();
    vec1.insert(iter+1,566); // for first element , only iter , 2nd element iter+1 
    // to inser multiple copy 
    // use   vec1.insert(iter,5,566); it will insert 566 , for 5 times in the start 
    display(vec1);

    return 0;
}
