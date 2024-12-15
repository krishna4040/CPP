# include <iostream>
using namespace std;

void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am second func() " << a << endl;
}

int main()
{
    func(1);      // Exact macth takes higher priority
    func('a');    // first func() will not be called

    return 0;
}
