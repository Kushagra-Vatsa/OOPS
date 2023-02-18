#include<iostream>
using namespace std;
class binary
{
    private:
        string s;
    public:
        void read(void);
        void chk_bin(void);
        void ones_comp(void);
        void disp(void);
        int flag=0;//To print if number is binary
};
void binary::read(void)
{
    cout<<"Enter a binary number \n";
    cin>>s;
}
void binary::chk_bin(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"The number is not a binary number \n";
            flag=1;
            exit(0);
        }
    }
    if(flag==0)
    {
        cout<<"The number is Binary"<<endl;
    }
}
void binary::ones_comp(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
            s.at(i)='0';
    }
}
void binary::disp(void)
{
    cout<<"The compliments is ";
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.ones_comp();
    b.disp();
    return 0;
}