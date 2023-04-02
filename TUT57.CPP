/*
    Rules for Virtual Function : 
    1) They cannot be static .
    2) They are accessed by object pointers .
    3) Virtual function can be friend of another class .
    4) A virtual function in a base class might not be used .
    5) If a virtual function is defined in a Base class , there is no need of redefining it in base class 
       Means if we didnt defined display in Derived class and called the display function using pinter 
       it will call the virtual function present in Base class . 
*/
#include<iostream>
#include<cstring>
using namespace std;
class KWK
{
    protected:
        string title;
        float rating;
    public:
        KWK(string s,float r)
        {
            title=s;
            rating=r;
        }  
        virtual void display() // If we dont add virtual keyword it will Run when called via pointer
        {
            cout<<" False Run "<<endl;
        }  
};
class KWK_video : public KWK
{
    int videolength;
    public:
        KWK_video(string s,float r , int vl) : KWK(s,r)
        {
            videolength=vl;
        }
        void display()
        {
            cout<<"This is an Amazing Video having Title "<<title<<endl;
            cout<<"This video has an rating of "<<rating<<" out of 5 stars "<<endl;
            cout<<"This video has a Length of "<<videolength<<" seconds "<<endl;
        }
};
class KWK_text : public KWK
{
    int words;
    public:
        KWK_text(string s,float r ,int w) : KWK(s,r)
        {
            words=w;
        }
        void display()
        {
            cout<<"This is an Text Tutorial having Title "<<title<<endl;
            cout<<"This Text Tutorial has an rating of "<<rating<<" out of 5 stars "<<endl;
            cout<<"This Text Tutorial has words  "<<words<<endl;
        }
};
int main()
{
    string title;
    int words,videolength;
    float rating;

    // For KWK Video
    title="Welcome to My C++ course ";
    videolength=5;
    rating=4.2;
    KWK_video Intro_video(title,rating,videolength);
    //Intro_video.display();


    // For KWK Text Tutorial 
    title="Intro to C++ textual ";
    words=500;
    rating=4.74;
    KWK_text Intro_text(title,rating,words);
    //Intro_text.display();

    KWK *ptr[2];
    ptr[0]=&Intro_video;
    ptr[1]=&Intro_text;
    ptr[0]->display();
    ptr[1]->display();
    return 0;
}
