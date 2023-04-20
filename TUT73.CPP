/*
    Map is an associative array
*/
#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string,int> marksMap;
    marksMap["Kushagra"]=100;
    marksMap["Harry"]=98;
    marksMap["Noddy"]=96;
    marksMap.insert({{"Naruto",169},{"Sasuke",175}});
    map<string,int>::iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<"The size is "<<marksMap.size()<<endl;
    return 0;
}
