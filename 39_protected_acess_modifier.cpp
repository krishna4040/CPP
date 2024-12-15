# include <iostream>
using namespace std;

class base
{
    private:
        int a;
    protected:  // a private type var that can be inherited
        int b;
    public:
        int c;
};

/*
    base class members/visibility       1.private mode          2.protected mode          3.public mode
    1.private                           non inheritable         non inheritable           non inheritable
    2.protected                         inherited privately     inherited as protected    inherited as protected                                      
    3.public                            inherited privately     inherited as protected    inherited publically
*/

class derieved : protected base
{
    
};

int main()
{
    base b;
    derieved d;

    return 0;
}