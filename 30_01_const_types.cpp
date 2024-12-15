# include <iostream>
using namespace std;

class complex
{
    int a , b;
    public:
        /*****Default constructor*****/
        // complex() = default;

        /******parameterzied constructor*****/
        complex(int x , int y)
        {
            a = x;
            b = y;
        }

        void printnumber()
        {
            cout << a << "+i" << b << endl;
        }
};

int main()
{
    // Implicit call for parameterized constructor
    complex obj(4,6);
    obj.printnumber();

    // Explicit call for parameterized constructor
    complex b = complex(3,5);
    b.printnumber();

    return 0;
}