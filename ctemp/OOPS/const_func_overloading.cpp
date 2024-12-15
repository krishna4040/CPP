# include <iostream>
using namespace std;

class test
{
    int x;
public:
    test(int i){x = i;}
    void func() const{cout << "const func is called";}
    void func(){cout << "func is called";}
};

int main(int argc, char const *argv[])
{
    test t1(1);
    t1.func();  // non-const func is called

    const test t2(2);
    t2.func();  // const func is called

    return 0;
}
