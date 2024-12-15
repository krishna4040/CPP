# include <iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int time;
    float rate;
    float interest;
    float returnvalue;
    public:
        /******Default constructor*****/
        bankdeposit(){}
        bankdeposit(int p , int t , float r)
        {
            principal = p;
            time = t;
            rate = r;
            interest = principal * rate * time;
            returnvalue = principal + interest;
        }
        bankdeposit(int p , int t , int r)
        {
            principal = p;
            time = t;
            rate = r/100;
            interest = principal * rate * time;
            returnvalue = principal + interest;
        }
        void show()
        {
            cout << endl << "principal amount was " << principal << " return value after " << time << " years is " << returnvalue << endl;
        }
};

int main()
{
    bankdeposit bd1 , bd2 , bd3;
    int p , R , t;
    float r;

    cout << "Enter the value of p y and r" << endl;
    cin >> p >> t >> r;
    bd1 = bankdeposit(p , t , r);
    bd1.show();

    cout << "Enter the value of p t and R" << endl;
    cin >> p >> t >> R;
    bd2 = bankdeposit(p , t , R);
    bd2.show();

    return 0;
}