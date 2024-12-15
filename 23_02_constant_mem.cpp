# include <iostream>
using namespace std;

class base
{
    const int x = 10; // value of x is immutable
    int a = 5;
public:
    int fun() const
    {
        // is not allowed to change or modify class var
        return 0;
    }
};

int main(int argc, char const *argv[])
{
    
    return 0;
}