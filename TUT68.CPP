#include<iostream>
using namespace std;
template <class T>
class Kushagra
{
    public:
        T data;
        Kushagra(T a)
        {
            data=a;
        }
        void display(); 
};
template<class T>
void Kushagra<T>::display()
{
    cout<<data;
}

void func(int a)
{
    cout<<"I am first func()"<<endl;
}
template<class T>
void func(T a)
{
    cout<<"I am templatised func()"<<endl;
}

template<class T>
void func1(T a)
{
    cout<<"I am templatised func()"<<endl;
}

int main()
{
    // Kushagra<int> K(5.7);
     
    // cout<<K.data;
    // cout<<"\n";
    // K.display();
    func(4);//exact match takes the highest priority
    func1(5);
    return 0;
}