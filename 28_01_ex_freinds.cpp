# include <iostream>
using namespace std;

class Y;

class X
{
    int data;
    friend void add(X o1 , Y o2);
    public:
        void setvalue(int value)
        {
            data = value;
        }
};

class Y
{
    int num;
    friend void add(X o1 , Y o2);
    public:
        void setvalue(int value)
        {
            num = value;
        }
};

void add(X o1 , Y o2)
{
    cout << "summing data of x and y gives " << o1.data + o2.num;
}

int main()
{
    X a;
    a.setvalue(3);

    Y b;
    b.setvalue(5);

    add(a,b);

    return 0;
}