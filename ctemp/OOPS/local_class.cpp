# include <iostream>
using namespace std;

int func()
{
    // local classes can be used inside a function
    // cannot contain static data mebers though can have static data methods
    class base
    {
        int a;
        public:
            base(int a){this->a = a;}
            void printdata(){cout << a;}
    };
}

int main(int argc, char const *argv[])
{
    
    return 0;
}