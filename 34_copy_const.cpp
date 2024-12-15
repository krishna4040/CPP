# include <iostream>
using namespace std;

class number
{
    int a;
    public:
        number()
        {
            a = 0;
        }
        number(int num)
        {
            a = num;
        }
        /******copy constructor*****/
        // to make a copy of an object we use copy constructor
        // this is a manual copy conostructor
        // but c++ compiler is smart enough
        // it provides a same default copy constructor to each class and it is free to use
        // when no copy constructor is found , compiler supplies its own copy constructor
        number(const number &obj)
        {
            a = obj.a;
        }
        void display()
        {
            cout << "the number for this object is " << a << endl;
        }
};

int main()
{
    number x;
    x = number(45);
    x.display();

    // copy constructor invoked
    number X(x);
    X.display();

    // copy constructor not invoked
    number x1;
    x1 = x;
    x1.display();

    // copy constructor invoked
    number x2 = x;
    x2.display();

    return 0;
}