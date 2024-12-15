# include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // perform same function 
    // but endl flushes the buffer
    cout << endl;
    cout << '\n';

    // these are equivalent
    cout << endl;
    cout << '\n' << flush;

    return 0;
}
