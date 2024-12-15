# include <iostream>
using namespace std;

class c2;

class c1
{
    int val;
    friend void exhange(c1 &x , c2 &y);
    public:
        void indata(int a)
        {
            val = a;
        }
        void display()
        {
            cout << val << endl;
        }
};

class c2
{
    int data;
    friend void exhange(c1 &x , c2 &y);
    public:
        void indata(int a)
        {
            data = a;
        }
        void display()
        {
            cout << data << endl;
        }
};

void exchange(c1 &x , c2 &y)
{
    int temp = x.val;
    x.val = y.data;
    y.data = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(34);
    oc2.indata(67);

    exchange(oc1,oc2);
    cout << "exchanged values are";
    cout << oc1.display() << " ";

    return 0;
}