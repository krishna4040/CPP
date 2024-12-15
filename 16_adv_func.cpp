# include <iostream>
using namespace std;

/**************Inline functions*****************/
//The code within such functions is replaced by actual function call to cut the cost of time
//hence it is adviced to use for short coded functions
//inline func are not recommended in case of : recursion , static_var , looped_func , swicth_func , lenghty_coded
inline int product(int a , int b)
{
    return a * b;
}

/*************Static variables*****************/
int stat(int a , int b)
{
    static int c = 0;  //This will execute once
    c  += 1;           //The value of c is retained by function else func forgets all its var when it executes completely
    return a + b + c;
}

/**************Default arguments***************/
// datatype func_name(compulsory_arg , default_arg)  //always
float moneyrecieved(int currentmoney , float factor = 1.04)
{
    return currentmoney * factor;
}

/**************constant arguments**************/
int strlen(const string *p)
{
    
}

int main()
{
    int a , b;
    cin >> a >> b;

    cout << product(a,b) << endl;

    cout << stat(a,b) << endl;

    int money;
    cin >> money;
    if (money > 10000)
    {
        cout << moneyrecieved(money , 10);
    }
    else
    {
        cout << moneyrecieved(money);
    }

    return 0;
}