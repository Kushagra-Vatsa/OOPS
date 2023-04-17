#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> vec1;//zero length vector 
    display(vec1);

    vector<char> vec2;//4-element character vector
    vec2.push_back('a');
    display(vec2);

    vector<char> vec3(vec2);//4-element vector from vec2
    display(vec3);

    vector<int> vec4(5,13);// 5 element vector of 13s
    display(vec4);
    //cout<<vec4.size();

    

    return 0;
}