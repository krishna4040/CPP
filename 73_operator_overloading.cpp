# include <iostream>
using namespace std;

// operators that cannot be overloaded
// :: sizeof typeid . ?:

class complex
{
private:
    int re;
    int im;
public:
    complex(int r , int i)
    {
        re = r;
        im = i;
    }
    // operator overloading
    complex operator+(complex c)
    {
        complex temp(0,0);
        temp.re = this->re + c.re;
        temp.im = this->im + c.im;
        return temp;
    }
    void display()
    {
        cout << this->re << "+i" << this->im << endl;
    }
};

int main()
{
    complex c1(1,2);
    complex c2(3,4);
    complex c3(0,0);

    // need for operator overloading
    //* operations on object are invalid
    //! c3 = c1 + c2 ----> invalid
    //* hence we need to specify use of operators for obj in class

    c3 = c1 + c2;
    // c3 = c1.operator+(c2);
    c3.display();

    return 0;
}