# include <iostream>
# include <cmath>
using namespace std;

// Create two classes named calculator and scientific calculator
class calculator
{
    int num1;
    int num2;
    int opr;
    public:
        calculator()
        {
            cout << "Enter num1: ";
            cin >> num1;
            cout << "Enter num2: ";
            cin >> num2;
            cout << "--------" << endl;
        }
        void showoptions()
        {
            cout << "1.add" << endl;
            cout << "2.sub" << endl;
            cout << "3.mul" << endl;
            cout << "4.duv" << endl;
            cout << "--------" << endl;
            cout << "Enter option: ";
            cin >> opr;
            cout << "--------" << endl;
        }
        void result()
        {
            if (opr == 1)
                cout << num1 + num2 << endl;
            if (opr == 2)
                cout << num1 - num2 << endl;
            if (opr == 3)
                cout << num1 * num2 << endl;
            if (opr == 4)
                cout << num1 / num2 << endl;
        }
        ~calculator(){cout << "clc class object is finished" << endl;}
};
class scientificcalculator
{
    int num;
    int opr;
    public:
        scientificcalculator()
        {
            cout << "Enter num: ";
            cin >> num;
            cout << "---------" << endl;
        }
        void showoptions()
        {
            cout << "1.sqroot" << endl;
            cout << "2.abs"  << endl;
            cout << "3.loge"   << endl;
            cout << "---------" << endl;
            cout << "Enter option: "; 
            cin >> opr;
            cout << "---------" << endl;
        }
        void result()
        {
            if (opr == 1)
                cout << sqrt(num) << endl;
            if (opr == 2)
                cout << abs(num) << endl;
            if (opr == 3)
                cout << log(num) << endl;
        }
        ~scientificcalculator(){cout << "Scf class object is fininshed" << endl;}
};

int main()
{
    calculator c;
    c.showoptions();
    c.result();

    scientificcalculator s;
    s.showoptions();
    s.result();

    return 0;
}