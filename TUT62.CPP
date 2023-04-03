#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("TUT62.txt");
    out<<"This is me "<<endl;
    out<<"This is also me "<<endl;
    out.close();

    ifstream in;
    in.open("TUT62.txt");
    // string s1,s2;
    // getline(in,s1);
    // getline(in,s2);
    // cout<<s1<<" and "<<s2<<endl;
    string st;
    while(in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }

    in.close();
    return 0;
}