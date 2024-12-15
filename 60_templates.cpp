# include <iostream>
using namespace std;

// Templates
//* aka parameterized classes
//* Template ----> Class ----> Objecct
//* class is the template for object and templates are template for a class

// Why templates?
//* to follow DRY
//* Generic programming

// Syntax
template <class T>  // T can be any of the basic datatype
class cls
{
    T var;
    public:
        cls(T v){var = v;}
        void printdata(){cout << var << endl;}
};

int main()
{
    cls <int>   obj1(1);
    cls <float> obj2(2);
    cls <char>  obj3('a');
    cls <string> obj4("hello my name is krishna");

    return 0;
}