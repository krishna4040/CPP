# include <iostream>
using namespace std;

// In case of combined herirchial and multiple derivation there is ambiguity 
// a single quatity is inherited to the last derieved class twice hence making it ambiguous
// hence we tell the herirchial derieved class to check the instance before passing them to any other class
// here comes the concept of virtual base class

// class A
// {
//     int a;
// };

// class B : public A
// {
//      a is inherited
// };

// class C : public A
// {
//      a is inherited
// };

// class D : public B , public C
// {
//      a is inherited twice
// };

int main()
{

}