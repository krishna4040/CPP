# include <iostream>
using namespace std;

class complex
{
    int a , b;
    public:
        // constructor overloading ----> function overloading
        complex()
        {
            cin >> a >> b;
        }
        complex(int x)
        {
            a = x;
            cin >> b;
        }
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
    complex c1(4,6);
    c1.printnumber();

    complex c2(5);
    c2.printnumber();

    complex c3;
    c3.printnumber();

    return 0;
}