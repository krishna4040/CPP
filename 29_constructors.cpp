# include <iostream>
using namespace std;

/*******constructors*********/
// it is more convinient to store data in objects while initialising it 
// so there is a req of special functions that automate this
// hence comes the constructors
// constructor cut down the effort to create extra functions to input such as setdata setnumber
// it is used to initialise obj of its class
// it is automatically invoked whenever an object is created

class complex
{
    int a , b;
    public:
    /*****creating constructor*****/
    // constructor is a special member function
    // same name of class
    // they do not have any return type
    complex();  // constructor declaration
    void printdata();
    
};

complex :: complex()
{
    cin >> a >> b;
}

void complex :: printdata()
{
    cout << a << "+i" << b;
}

/*****properties of constructors*****/
// It is mostly declared in public section of class though it can be declared in private
// we cannot refer to their address
// cannot be virtual
// cannot be static
// cannot be constant
// cannot be inherited
// can be inlined


int main()
{
    complex c;  
    // we had no need to use setdata function
    c.printdata();

    return 0;
}