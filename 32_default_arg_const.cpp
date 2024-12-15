# include <iostream>
using namespace std;

class simple
{
    int data1 , data2;
    public:
        simple(int a , int b = 9)
        {
            data1 = a;
            data2 = b;
        }
        void printdata()
        {
            cout << data1 << endl;
            cout << data2 << endl;
        }
};

int main()
{
    simple s(1,4);
    s.printdata();

    simple t(3);
    t.printdata();

    return 0;
}