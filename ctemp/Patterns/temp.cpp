# include <iostream>
using namespace std;

void greet(){cout << "Hello!" << endl;}

int main(int argc, char const *argv[])
{
    greet();
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
            cout << " ";
        for (int j = 1; j <= 2*i-1; j++)
            cout << "*";
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = n-i; j >= 1; j--)
            cout << " ";
        for (int j = 2*i-1; j >= 1; j--)
            cout << "*";
        cout << endl;
    }
    return 0;
}