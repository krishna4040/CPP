// Function overriding
# include <iostream>
using namespace std;

class base
{
    public:
        int var_base;
        void display()
        {
            cout << "Displaying Base class Var var_base " << var_base << endl;
        }
};

class derieved : public base
{
    public:
        int var_derieved;
        void display()
        {
            cout << "Displaying Base class var var_base " << var_base << endl;
            cout << "Displaying derieved class var var_derieved " << var_derieved << endl;
        }
};

int main()
{
    base *bptr;
    base base;

    derieved *dptr;
    derieved derieved;

    // base class pointer pointing to derieved class object
    bptr = &derieved;

    // but bptr will have properties of base class not the derieved class
    // we cannot access derieved class members using base class pointer
    bptr -> var_base = 34;
    bptr -> display();

    // derieved class pointer pointing to base class obj gives error
    // dptr = & base;

    // derieved class pointer pointing to derieved class pointer
    dptr = &derieved;

    // It can acess all members of derived class and inherited members of base class
    dptr -> var_derieved = 98;
    dptr -> var_base = 45;
    dptr -> display();

    return 0;
}