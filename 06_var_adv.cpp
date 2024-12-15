# include <iostream>
# include <iomanip>
using namespace std;

// scope of var: 1.local  2.global
// local and global var can have same name
int c = 45; // global scope var

int main()
{
    //******************scope resolution*************************
    int a , b , c;
    cout << "Enter the value of a: ";
    cin >> b;

    cout << "Enter the value of b: ";
    cin >> b;

    c = a + b; // local scope var
    cout << "The local c is " << c;
    cout << "The global c is" << ::c;  /*:: scope resolution operator*/

    /*********************Build in datattypes*********************/
    float d = 34.4;
    double e = 34.4;
    cout << "The value of d is " << d << endl;
    cout << "The value of e is " << e << endl;

    cout << (34.4 == 34.40)  << endl; //true  
    cout << (34.4f == 34.40) << endl; //false
    cout << (34.4L == 34.40) << endl; //false

    //*******************reference variable*************************
    //Rohan ---> monty ---> Rohu ---> dangerous coder
    float x = 455;
    float &y = x;  //reference variable
    cout << x << endl;
    cout << y << endl;

    //*******************Type casting*******************************
    float num = 5.67;
    cout << "The value of int num is "   << (int)num   << endl;
    cout << "The value of float num is " << (float)num << endl;
    cout << "The value of char num is "  << (char)num  << endl;
    int newnum = (int)num; //valid

    //*******************constants***********************************
    int var = 5; // we can change value of var
    var = 7;

    //const datatype var_name = value;
    const int newvar = 56;
    // newvar = 35;  /*gives error*/

    //********************manipulators*********************************
    //manipulators: operators which helps in formatting data display
    //comonlly used manipulators are endl and setw(val) <iomanip>

    int p = 3 , q = 78 , r = 1234;
    //without setw
    cout << "The value of p is " << p << endl;
    cout << "The value of q is " << q << endl;
    cout << "The value of r is " << r << endl;
    //with setw
    cout << "The value of p is " << setw(4) << p << endl;
    cout << "The value of q is " << setw(4) << q << endl;
    cout << "The value of r is " << setw(4) << r << endl;


    /********non parameterized manipulators*******/
        // • endl – Gives a new line
        // • ends – Adds null character to close an output string
        // • flush – Flushes the buffer stream
        // • ws – Omits the leading white spaces present before the first field
        // • hex, oct, dec – Displays the number in hexadecimal or octal or in decimal format

    /******parameterzied manipulators ---> uses library iomap *********/
        // setw (int n)           -   To set field width to n
        // setprecision (int p)   -   The precision is fixed to p
        // setfill (Char f)       -   To set the character to be filled
        // setiosflags (long l)   -   Format flag is set to l
        // resetiosflags (long l) -   Removes the flags indicated by l
        // Setbase(int b)         -   To set the base of the number to b

    /*********some other manipulators************/
    /*
    1.Fixed:write floating-point values in fixed-point notation.
    2.scientific:write floating-point values in scientific notation.
    3.hexfloat:	write floating-point values in hexadecimal format.the value of this is the same as (scientific|fixed)
    4.defaultfloat:	write floating-point values in default floating-point notation.
    */

    return 0;
}