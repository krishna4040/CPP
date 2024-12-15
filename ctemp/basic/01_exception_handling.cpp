# include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //* Exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution. 
    //? Tpes of Exception ----> 1.Synchronous    2.Non-synchronous
    /*
    !kewords c++ provide foe exception handling:
        * try: The try statement allows you to define a block of code to be tested for errors while it is being executed. 
        * catch: The catch statement allows you to define a block of code to be executed if an error occurs in the try block
        * catch(...): cacth all block
        * throw: The throw keyword throws an exception when a problem is detected, which lets us create a custom error.
    */

    int age = 10;
    try
    {
        if (age >= 18)
            cout << "You are adult! since your age is " << age;
        else
            throw(age);
    }
    catch(...)
    {
        clog << "you are not an adult! since your age is " << age;
    }

    return 0;
}