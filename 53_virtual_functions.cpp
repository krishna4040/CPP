# include <iostream>
using namespace std;

class baseclass
{
    public:
        int var_base = 1;
        virtual void display()
        {
            cout << "Displaying Base class Var var_base " << var_base << endl;
        }
};

class derievedclass : public baseclass
{
    public:
        int var_derieved = 0;
        void display()
        {
            cout << "Displaying Base class var var_base " << var_base << endl;
            cout << "Displaying derieved class var var_derieved " << var_derieved << endl;
        }
};

int main()
{
    baseclass *base_class_pointer;
    derievedclass obj_derieved;

    base_class_pointer = &obj_derieved;
    base_class_pointer -> display();  // this will run diplay func of base class func if virtual not present

    // To change this default behavious we use virtual functions
    // as we write virtual it directs the use of derieved class function when base class func is used

    // If no display func found in derieved class then base class display will run

    // Rules for virtual functions
    //* They cannot be static
    //* They are accesed by object pointers
    //* virtual function can be a friend of other class
    //* a virtual function in base class might not be used
    //* if a virtual function is defiened in base class then there is no necesity to define it in derieved class
    //* can be inlined
}