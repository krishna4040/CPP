# include <iostream>
using namespace std;

// syntax for multiple derivation
/*
class derived : visibility baseclass1 , visibility baseclass2
{class body};
*/

class base1
{
    protected:
        int data1;
    public:
        void setdata1(int d)
        {
            data1 = d;
        }
};

class base2
{
    protected:
        int data2;
    public:
        void setdata2(int d)
        {
            data2 = d;
        }
};

class derived : public base1 , public base2
{
    public:
        void show()
        {
            cout << "The value of data1 is: " << data1 << endl;
            cout << "The value of data2 is: " << data2 << endl;
            cout << "The sum of the data is: " << data1 + data2 << endl;
        }
};

int main()
{
    derived dr;
    dr.setdata1(1);
    dr.setdata2(2);
    dr.show();

    return 0;
}