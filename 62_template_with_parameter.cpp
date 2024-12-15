# include <iostream>
using namespace std;

template<class T1 , class T2>
class myclass
{
    public:
        T1 data1;
        T2 data2;
        myclass(T1 a , T2 b)
        {
            data1 = a;
            data2 = b;
        }
        void display(){cout << this->data1 << this->data2 << endl;}
};

int main()
{
    myclass <int , char> obj1(1,'a');
    obj1.display();

    myclass <char , char> obj2('a','b');
    obj2.display();

    myclass <int , float> obj3(1,2.1);
    obj3.display();

    return 0;
}