/*
    Student --> Test and Sports 
    Test and Sports ---> Result 
*/


#include<iostream>
using namespace std ;
class Student 
{
    protected:
    int roll_no;
    public:
    void setroll_no(int n)
    {
        roll_no=n;
    }
    void print_number()
    {
        cout<<"Your Roll number is "<<roll_no<<endl;
    }
};
class Test : virtual public Student
{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2)
    {
        maths=m1;
        physics=m2;
    }
    void print_marks()
    {
        cout<<"Your marks obtained in Maths and Physics are "
        <<maths<<" and "<<physics<<endl; 
    }
};
class Sports : virtual public Student
{
    protected:
    float score ;
    public:
    void set_score(float x)
    {
        score=x;
    }
    void print_display()
    {
        cout<<"Your score is "<<score<<endl;
    }
};
class Result : public Test , public Sports 
{
    private :
    float Total;
    public:
    void display()
    {
        Total=maths+physics+score;
        print_marks();
        cout<<"Your Total Score is "<<Total<<endl;
    }
};
int main()
{
    Result Kushagra;
    Kushagra.setroll_no(30);
    Kushagra.print_number();
    Kushagra.set_marks(90.5,97.5);
    Kushagra.set_score(10);
    Kushagra.display();
    return 0;
}