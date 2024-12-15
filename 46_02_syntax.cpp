# include <iostream>
using namespace std;

/*
case1:
    class B : public A
    {
        # order of executioon of const ---> A() than B()
    };

case2:
    class A : public B , public C
    {
        # order of execution of const ---> B() then C() than A()
    }

case3:
    class A : public B , virtual public C
    {
        # order of execution of const ---> C() then B() than A()
    }

*/

int main()
{

}