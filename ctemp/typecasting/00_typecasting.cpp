# include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Typecasting -----> 1.Implicit    2.Explicit
    // Implicit
    /*
        * Automatic caste
        * Generally takes place when in an expression more than one datatype is invloved
        * All datatypes are converted to the largest one
        * sequence: bool -> char -> short int -> int -> unsigned int -> long -> unsigned -> long long -> float -> double -> long double
    */

    // Explicit
    /*
        * using assignment (cast-type)
        * using cast operator : A Cast operator is an unary operator which forces one data type to be converted into another data type.
        * There are 4 types of caste operators in c++:
            1. Static Cast: compile time cast
            2. Dynamic Cast: 
            3. Const Cast:
            4. Reinterpret Cast:
    */

    //? Note: explicit keyword is used before constructor to avoid any implicit type-casting 

    auto a = 1 + 'a' + 1.2f + 1.23l;
    cout << a;

    return 0;
}