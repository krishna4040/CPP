# include <iostream>
using namespace std;

class A
{
    int a;
    public:
        // void setdata(int a) // we cannot have parameterized var same as private class var hence we use this keyword
        // {
        //     a = a;
        // }
        void setdata(int a)
        {
            this->a = a;    // this is a keyword which is a pointeer which points to the object which invokes the member func
        }
        A & getobj()
        {
            return *this;   // we can get the object using this keyword
        }
        void getdata()
        {
            cout << "The value of a is " << a << endl;
        }
};

int main()
{
    A a;
    a.setdata(2);
    a.getdata();

    return 0;
}