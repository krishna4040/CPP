# include <iostream>
using namespace std;

int x;
int main()
{
    // 1.Auto
    // *automatic deduction of the data type of an expression in a programming language can be done using auto keyword
    auto a = 1;
    cout << a << endl;

    // 2.Extern
    // *Extern storage class simply tells us that the variable is defined elsewhere and not within the same block where it is used
    // *diff bw usage of extern and :: is that extern var cannot be repeated in other scopes but global var can be
    // *Default initialisation vallue is 0
    extern int x;
    cout << x << endl;

    // 3.Static
    // *static variables have a property of preserving their value even after they are out of their scope
    // *so we can say that they are initialized only once and exist until the termination of the program
    // *Default initialisation vallue is 0

    // 4.Register
    // *compiler tries to store these variables in the register of the microprocessor
    // *This makes the use of register variables to be much faster than that of the variables stored in the memory

    register int y = 100;
    cout << y << endl;

    // 5.volatile
    volatile int z = 10;
    cout << z << endl;

    return 0;
}