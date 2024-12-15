# include <iostream>
using namespace std;

class base1
{
    int data1;
    public:
        base1(int i)
        {
            data1 = i;
            cout << "base1 class const is called" << endl;
        }
        void printdata()
        {
            cout << "The value of data1 is: " << data1 << endl;
        }
};

class base2
{
    int data2;
    public:
        base2(int i)
        {
            data2 = i;
            cout << "base2 class const is called" << endl;
        }
        void printdata()
        {
            cout << "The value of data2 is: " << data2 << endl;
        }
};

class derieved : public base1 , public base2
{
    int data3;
    public:
    derieved(int a , int b , int c) : base1(a) , base2(b)
    {
        data3 = c;
        cout << "Derieved class const called" << endl;
    }
    void printdata()
    {
        base1 :: printdata();
        base2 :: printdata();
        cout << "The value of data3 is: " << data3;
    }
};

int main()
{
    derieved d(1,2,4);
    d.printdata();

    return 0;
}