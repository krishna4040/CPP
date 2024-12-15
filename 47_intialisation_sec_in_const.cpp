# include <iostream>
using namespace std;

/*
syntax for initialisation list in const:
constructor (argument-list) : intialisation-section (bss value dene ka ek trika jb hmara const section heavy ho jata hai)
{
    body
}
*/

class test
{
    int a , b;
    public:
        // test(int i , int j) : a(i) , b(j)
        // test(int i , int j) : a(j) , b(i)
        // test(int i , int j) : a(i) , b(i+j)
        // test(int i , int j) : a(i) , b(2*j)
        // test(int i , int j) : a(i) , b(a)  ----> valid
        // test(int i , int j) : b(i) , a(j)
        // test(int i , int j) : b(i) , a(b)  ---->compiled with garbage value cause a was initiaised before b
        test(int i , int j) : b(i) , a(b)
        {
            cout << "value of a is " << a << endl;
            cout << "value of b is " << b << endl; 
        }
};


int main()
{
    test t(4,6);

    return 0;
}