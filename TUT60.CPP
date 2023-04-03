/*
    The useful classes for working with files in C++ are :
    1) fstreambase
    2) ifstream (input fstream) --> Derived from fstreambase
    3) ofstream (output fstream) --> Derived from fstreambase also .


    In Order to work with files in C++ you have to open it . 
    Primarily there are 2 ways to open a file :
    1) Using the Constructor 
    2) Using the member function open() of the class .
*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string st="Kushagra Tutorial ";
    string str2;
    
    //Opening Files using Constructors and Writing it 
    ofstream out("Sample60.txt"); // Write operation 
    out<<st;
    
    
    
    //Opening files using Constructors and Reading it 
    ifstream in("Sample60_a.txt");
    getline(in,str2);
    cout<<str2;
    return 0;
}