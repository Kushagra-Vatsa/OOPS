#include<iostream>
using namespace std;
class BankDeposit
{
    int principal;
    int years;
    float interestrate;
    float returnvalue;
    public:
        BankDeposit(){}
        BankDeposit(int , int , float ); // Takes value of interest such as 0.04
        BankDeposit(int , int , int );// Takes value of interest as 4
        void display();
};
BankDeposit :: BankDeposit(int p,int y,float r)
{
    principal=p;
    years=y;
    interestrate=r;
    returnvalue=principal;
    for(int i=0;i<years;i++)
    {
        returnvalue=returnvalue * (1+interestrate);
    }
}
BankDeposit :: BankDeposit(int p,int y,int r)
{
    principal=p;
    years=y;
    interestrate=(float)r/100;
    returnvalue=principal;
    for(int i=0;i<years;i++)
    {
        returnvalue=returnvalue * (1+interestrate);
    }
}
void BankDeposit::display()
{
    cout<<"The Return value after "<<years<<" is "<<returnvalue<<endl;
}

int main()
{
    BankDeposit b1,b2,b3;
    int p,y;
    float r;
    int R;
    cout<<"Enter the value of principal amount , years and rate in float "<<endl;
    cin>>p>>y>>r;
    b1=BankDeposit(p,y,r);
    b1.display();
    cout<<"Enter the value of principal amount , years and rate in int "<<endl;
    cin>>p>>y>>R;
    b2=BankDeposit(p,y,R);
    b2.display();

    return 0;
}