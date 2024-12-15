# include <iostream>
using namespace std;

class base
{
    public:
        void say()
        {
            cout << "Hello world" << endl;
        }
};

class derived : public base
{
    public:
        // Derived new say method will overwrite base class say method
        void say()
        {
            cout << "hello my beutiful people" << endl;
        }
};

int main()
{
    base b;
    b.say();

    derived d;
    d.say();

    return 0;
}