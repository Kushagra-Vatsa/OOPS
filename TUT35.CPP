/* Destructors are used to free the memory which is used by the constructors .
   Destructors doesn't take any argument or return any value .

*/
#include<iostream>
using namespace std;
int count=0;
class num
{
    public:
        num()
        {
            count++;
            cout<<"This is the time when constructor is called for the object number "<<count<<endl;
        }
        ~num()
        {
            cout<<"This is the time when destructor is called for object number "<<count<<endl;
            count--;
        }
};
int main()
{
    cout<<"Enter main function "<<endl;
    cout<<"Creating object number 1"<<endl;
    num n1;
    {
        cout<<"    Inside the block of code     "<<endl;
        cout<<"     Creating 2 more objects     "<<endl;
        num n2,n3;
        cout<<"Exiting this block "<<endl;
    }
    // As soon as the control is out of the block the destructor for objects created inside the block is
    // automatically called . 
    cout<<"Back to main "<<endl;
    return 0;
}