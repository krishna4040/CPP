# include <iostream>
using namespace std;

template <class T1 = int , class T2 = int>
class krishna
{
    public:
        T1 a;
        T2 b;
        krishna(T1 x , T2 y)
        {
            a = x;
            b = y;
        }
        void display()
        {
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
        }
};

int main()
{
    krishna <> me1(1,2);     // default parameter use
    me1.display();

    krishna <float> me2(1.1,1);
    me2.display();

    krishna <char , char> me3('a' , 'b');
    me3.display();

    return 0;
}