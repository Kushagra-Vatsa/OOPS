/*
    We can use constructors in Derived classes in C++ . 
    If Base class does not have any arguments , there is no need of any constructors in Derived class . 
    But if there are one or more arguments in the Base class constructors , Derived class need to paas arguments to the Base class constructors .
    if both Base class and Derived class have constructors , base class constructors is executed first .


    CONSTRUCTORS IN MULTIPLE , MULTILEVEL INHERITANCE :
    In Multiple Inheritance , Base classes are constructed in the order in which they appear in class Declaration 
    in Multi-level Inheritance , constructors are executed in the order of Inheritance .



    SPECIAL SYNTAX : 
    C++ supports an special syntax for passing an arguments to multiple Base class 
    The constructors of the Derived class recieves all the arguments at once and then will pass the calls to respective base classes . 
    The body is called after all Constructors are finished executing . 

    Derived - Constructors (arg1,arg2,arg3,....):Base-1 Constructor(arg1,arg2),Base-2 Constructor(arg3,arg4)
    {
        .....
    }Base1- Constructor(arg1,arg2)



    SPECIAL CASE OF VIRTUAL BASE CLASS :
    The constructor of a virtual Base class are invoked before an non-virtual Base class .
    If there are multiple Virtual Base class , they are invoked in order of their Declarartion .
    Any non-Virtual Base class are then constructed before the Derived class constructor is Executed 
*/

