/*
    class --> object
    template -->class
    template is also called parameterised class .
    Why use templates ? 
    1)To uphold DRY principles 
    2)Is used to make generic programs .

    Syntax :
        template<class T> // T can be int,float,char etc
        class Vector
        {
            T* arr;
            public:
                Vector(T* ar)
                {
                    //code;
                }
            Many other methods    
        };
        int main()
        {
            Vector<int>myVec1(ptr1);
            Vector<float>myVec2(ptr2);
        }
*/