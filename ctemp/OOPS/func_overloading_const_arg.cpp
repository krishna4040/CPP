# include <iostream>
using namespace std;

// Rule
// c++ allow func overloading on basis of constantness of arg only if parameter is a ref or pointer
// otherwise it is a redef of the same func

void func(const int i){cout << "constant arguments";}
void func(int i){cout << "non_constant arguments";}

int main(int argc, char const *argv[])
{
    const int i = 1;
    // func(i);    // error
    // for this we need to change our func arg to pointer also and then directly pass pointer
    const int *p = &i;
    return 0;
}