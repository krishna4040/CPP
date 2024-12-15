# include <iostream>
using namespace std;

class base
{
    int a;
    public:
    base(){// default
        cout<<"hi";
    }
    base(int x){// parameterized
        x = a;
    }
    base(base &b){// copy
        a = b.a;
    }
    ~base(){}
};

int main(int argc, char const *argv[])
{
    base b;        // implicit default

    base b1(4);  // implicit parameterized
    base b1 = 4;  // explicit parameterized
    base b1 = {4}; // explicit
    base() = NULL; // explicit parameterized

    base b2(b1);    // implicit copy
    base b2 = b1;   // explicit copy

    base b2 = base(1); // explicit copy implicit parameterized

    base b3;    // copy constructor not invoked
    b3 = b2;    // assingment operator used

    b3.~base(); // explicit destructor

    return 0;
    // imlicit destructor
}
