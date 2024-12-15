# include <iostream>
# include <iomanip>
using namespace std;

int main()
{
    // endl
    // setw
    // flush

    //for any numeric var
    float n;
    cin >> n;
    cout << "-------" << endl;
    cout << fixed << n << endl;
    cout << scientific << n << endl;
    cout << hexfloat << n << endl;
    cout << defaultfloat << n << endl;
    cout << setprecision(10) << n << endl;

    // for int var only
    int x;
    cin >> x;
    cout << "------" << endl;
    cout << hex << x << endl;
    cout << oct << x << endl;
    cout << dec << x << endl;

    // Other maniulators
    cout << __DATE__ << endl;   // prints current Date in dd-mm-yyyy
    cout << __TIME__ << endl;   // prints current time in hh-mm-ss
    cout << __FILE__ << endl;   // prints current file name
    cout << __LINE__ << endl;   // prints line number
    cout << __STDC__ << endl;   // prints 1 if compilers compile with ANSI code
    cout << __func__ << endl;   // prints name of the function

    return 0;
}