#include<iostream>
using namespace std ;
class Student
{
    protected:
    int roll_no;
    public:
    void setroll_no(int n);
    void getroll_no();
};
void Student::setroll_no(int n)
{
    roll_no=n;
}
void Student::getroll_no()
{
    cout<<"The roll number is "<<roll_no<<endl;
}

class Exam : public Student
{
    protected:
    float maths,physics;
    public:
    void set_marks(float,float);
    void get_marks();
};
void Exam::set_marks(float m1,float m2)
{
    maths=m1;
    physics=m2;
}
void Exam::get_marks()
{
    cout<<"The marks obtained in Maths and Physics are "<<maths<<" and "<<physics<<endl;
}
class Result:public Exam
{
    float percentage;
    public:
    void display()
    {
        getroll_no();
        get_marks();
        cout<<"Your %age is "<<(maths+physics)/2<<"%"<<endl;
    }
};
int main()
{
    Result Kushagra;
    Kushagra.setroll_no(29);
    Kushagra.set_marks(90,94);
    Kushagra.display();
    return 0;
}
/*                              Notes
1) If we are inheriting B from A and C from B [A--->B--->C]
2) Then A is base class for B and B is base class for C . 
3) ABC is called inheritance path . 

*/