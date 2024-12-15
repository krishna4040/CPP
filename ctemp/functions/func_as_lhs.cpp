# include <iostream>
using namespace std;

int &func()
{
    static int x;
    return x;
}

int main(int argc, char const *argv[])
{
    func() = 10;
    cout << func();
    return 0;
}