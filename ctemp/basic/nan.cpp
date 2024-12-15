# include <iostream>
# include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    //* NAN
    // not a number
    // excption occurs when a number cannot be represented
    // / by 0 , sqrt(<0) , log(0)

    int b = sqrt(-10);
    cout << isnan(b);

    return 0;
}