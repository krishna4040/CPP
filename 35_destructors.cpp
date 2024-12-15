# include <iostream>
using namespace std;

/******Destructor*******/
// it is used to free the dynamic extra memory allocated to object which is given by the constructor 
// as soon as the compiler feels there is no need of object it destroys the object
// destrctor neither takes a argument nor return any value and it runs implicity by the compiler
// Destructor cannot be declared as static and const
// always declared in public section
// can be virtual
// can be inline
// cannot be const
// cannot be static

class num
{
    static int count;
    public:
        num()
        {
            count++;
            cout << "This is the time when constructor is called for object number " << count << endl;
        }
        /****Destructor initialisation******/
        ~num()
        {
            cout << "This is the time  when my destructor is called for object number " << count << endl;
            count--; 
        }
};
int num :: count;

int main()
{
    cout << "we are inside our main function" << endl;

    cout << "Creating first object n1" << endl;
    num n1;

    // Block: The variables created in a block have scope of that block
    // when exiting from a block all var dec are finished
    {
        cout << "Entering this block" << endl;
        cout << "creating two more objects" << endl;
        num n2 , n3;
        cout << "Exiting this block" << endl;
    }

    cout << "back to main" << endl;

    return 0;
}