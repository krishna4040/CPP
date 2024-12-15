# include <iostream>
using namespace std;

/***********overloading***********/
//kisi bhi ek cheez ko multiple kaam ke liye use krna
//ek hi function ka naam alag alag kaam krwa skta ha


// Rules
// atleast one parameter must have different daytatype
// different num of parameters
// different sequence

//! main function cannot be overloaded
//! func wich differ in return type cannot be overloaded
//! static func cannot be overloaded
//! func that differ only in default arg cannot be overloaded

int sum(int a , int b)
{
    cout << "two ";
    return a + b;
}
int sum(int a , int b , int c)
{
    cout << "three ";
    return a + b + c;
}

//calculate vol of cylendir
int volume(double r , int h)
{
    return 3.14 * r * r * h;
}
//calculate vol of cube
int volume(int a)
{
    return a * a * a;
}
//calculate vol of cuboid
int volume(int l , int b , int h)
{
    return l * b * h;
}


int main()
{
    //c++: ek smajhdar language
    cout << sum(2,4)   << endl;
    cout << sum(2,4,6) << endl;

    //concept by vol example
    cout << volume(1)     << endl;
    cout << volume(1,2)   << endl;
    cout << volume(1,2,3) << endl;

    return 0;
}
