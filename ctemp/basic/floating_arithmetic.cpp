# include <iostream>
using namespace std;

int main()
{
    float sum = 0;
    for (float i = 0; i < 2; i += 0.1f)
    {
        sum += i;
    }
    cout << sum << endl;   // 19

    //! Does not work
    // float total = 0;
    // for (float i = 0; i != 2; i += 0.1)
    // {
    //     total += i;
    // }
    // cout << total << endl;

    float a = 0.1;
    float b = 0.2;
    float c = 0.3;
    if (a + b == c)
        cout << "This computer is magic" << endl;
    else
        cout << "This computer is normal" << endl;

    return 0;
}