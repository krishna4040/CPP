#include <iostream>
using namespace std;

class base
{
    int data1; // non inheritable data
public:        // inheritable as public member or private member depends upon visibility
    int data2;
    void setadata()
    {
        cin >> data1;
        cin >> data2;
    }
    int getdata1() // to inherit private members of base class we need to create a public func that store or return that private member
    {
        return data1;
    }
    int getdata2()
    {
        return data2;
    }
};

class derived : public base
{
    int data3;
public:
    void process()
    {
        data3 = data2 * getdata1();
    }
    void display()
    {
        cout << "value of data1 is " << getdata1() << endl;
        cout << "value of data2 is " << data2 << endl;
        cout << "value of data3 is " << data3 << endl;
    }
};

int main()
{
    derived der;

    der.setadata();
    der.process();
    der.display();

    return 0;
}