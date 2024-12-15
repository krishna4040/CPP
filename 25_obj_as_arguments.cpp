# include <iostream>
using namespace std;

class complex
{
    private:
        int a;
        int b;
        int c , d;
    public:
        void setdata(int re , int im)
        {
            a = re;
            b = im;
        }
        void setdatabysum(complex o1 , complex o2)
        {
            c = o1.a + o2.a;
            d = o1.b + o2.b;
        }
        void printnumber()
        {
            cout << "complex number is " << c << "+i" << d << endl;
        }
};

int main()
{
    complex c1 , c2 , c3;
    c1.setdata(1,2);
    c2.setdata(3,4);

    c3.setdatabysum(c1,c2);
    c3.printnumber();

    return 0;
}