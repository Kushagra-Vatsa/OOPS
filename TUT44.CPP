/* 
    Suppose if class B and C are Derived from class A , and class D is Derived from both B and C 
    If class A contains a member "a" , which is inherited by both B and C , and then passed by B and C to D
    then it produces ambiguity . To avoid this we use Virtual Base class .
    So if we declare class A as a virtual Base class , its members will be inherited only once .
    Syntax :
    class B : virtual public A 
    {
        Data members ;
    };
    class C : virtual public B
    {
        Data members ;
    };
*/

