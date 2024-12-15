# include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // random number
    for (int i = 0; i < 10; i++)
    {
        cout << rand() << " ";
    }
    cout << endl;

    // rnadom num in range
    int lb = 10 , ub = 100;
    for (int i = 0; i < 10; i++)
    {
        cout << (rand() % (ub - lb + 1)) + lb << " ";
    }
    
    return 0;
}