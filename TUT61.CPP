#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //Connecting file with out stream 
    ofstream out("Sample60.txt");
    cout<<"Enter your Name : ";
    string name;
    cin>>name;
    out<<"My name is "<<name; // Writing a String to a file .
    out.close(); // Removes the link between the file and out

    // Connecting file with in stream  
    ifstream in("Sample60.txt");
    string str;
    getline(in,str);
    cout<<"The Content in the file is "<<str<<endl;

    return 0;
}