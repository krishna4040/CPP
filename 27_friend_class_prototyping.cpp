# include <iostream>
using namespace std;

// class prototyping
class complex;

class calculator
{
    // class prototyping allows using class before its def
    // but we cannot use its members before defination
    // hence we have to use func prototypiing here as well 
    public:
        int sumreal(complex o1 , complex o2);
        int sumcomp(complex o1 , complex o2);
};

class complex
{
    private:
        int re , im;
    public:
        /****friend func of other class******/
        friend int calculator :: sumreal(complex o1 , complex o2);
        friend int calculator :: sumcomp(complex o1 , complex o2);

        /*****friend class*****/
        // if there are many func in one class and all are req to be friends then we make the entire class friend
        // freind class class_name
        friend class calculator; 

        void setdata(int n1 , int n2)
        {
            re = n1;
            im = n2;
        }
        void printdata()
        {
            cout << re << "+i" << im << endl;
        }
};

int calculator :: sumreal(complex o1 , complex o2)
{
    return (o1.re + o2.re);
}

int calculator :: sumcomp(complex o1 , complex o2)
{
    return (o1.im + o2.im);
}

int main()
{
    complex c1 , c2;

    c1.setdata(1,4);
    c2.setdata(5,6);

    c1.printdata();
    c2.printdata();

    return 0;
}
// noteworthy
//* fiendship is not mutual
//* friendship is not inherited