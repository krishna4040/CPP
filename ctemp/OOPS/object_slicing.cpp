# include <iostream>
using namespace std;

class base
{
    int a;
public:
    base(){cout << "Base";}
};

class derieved : public base
{
    int x;
public:
    derieved(){cout << "Derieved";}
};

int main(int argc, char const *argv[])
{
    derieved d;
    base b = d; // object slicing

    return 0;
}