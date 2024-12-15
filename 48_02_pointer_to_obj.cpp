# include <iostream>
using namespace std;

class complex
{
    private:
        int re , im;
    public:
        void setdata(int a , int b)
        {
            re = a;
            im = b;
        }
        void getdata()
        {
            cout << "The real part is " << re << endl;
            cout << "The imaginary part is " << im << endl;
        }
        ~complex(){}
};

int main()
{
    complex c;
    c.setdata(1,2);
    c.getdata();

    complex *ptr = new complex;
    ptr->setdata(3,4);  // as good as (*ptr).setdata(3,4);
    ptr->getdata();     // as good as (*ptr).getdata();

    // Array of objects
    complex *p = new complex[3];
    p -> setdata(1,2);
    p -> getdata();

    return 0;
}