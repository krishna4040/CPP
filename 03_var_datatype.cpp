# include <iostream>
using namespace std;

int main()
{
    // variable: a var is a container to hold data. they help us use and divide memory of a system
    // Most used datatypes: keyword(size in bytes for 64 bit g++ compiler)
    /*
        1. short int(2)
        2. unsigned short int(2)
        3. unsigned int(4)
        4. int(4)
        5. long int(4)
        6. unsigned long int(4)
        7. long long int(8)
        8. unsigned long long int(8)
        9. signed char(1)
        10.unsigned char(1)
        11.float(4)
        12.double(8)
        13.long double(12)
        14.wchar_t(2/4)
    */

    // Datatype var_name = value;
    int num = 5; // var initialisation with value
    bool p = 0, q = 1;

    char var;     // var intitalisation without value
    int x , y;

    float pi = 3.14;
    cout << "the value of a is" << endl << pi << endl; // printing var

    // Rules to create name of variables
    // Keywords: There are some reserved words for c++ lang and we cannot create var with these names

    return 0;
}