# include <iostream>
# include <iomanip>
using namespace std;

// User Defiened literals (UDL)
/*
    * With UDL, we attach units to the values which has
    * following advantages
        1) The code becomes readable.
        2) Conversion computations are done at compile time. 
    * syntax: return-type operator "" identifier(argument){//body}
*/
// kg
long double operator "" _kg(long double x) {return x * 1000;}
// g
long double operator "" _g(long double x) {return x;}
//mg
long double operator "" _mg(long double x) {return x/1000;}

int main(int argc, char const *argv[])
{
    //todo Literals: are raw values or data that are stored in a variable or constant. 
    // Built in Literals in C++:
    /*
        * Integer ----> 1.Prefixes(i.Decimal  ii.octal(0)  iii.hexa(0x/0X)  iv.binary(0b/0B))    2.Suffixes(i.u/U  ii.l/L  iii.ul/UL  iv.ll/LL  v.ull/ULL)
        * float ----> 1.decimal(i.with suffix   ii.without suffix)   2.Exponential(i.with suffix   ii.without suffix)
        * character ----> 1.char   2.wchar_t(wide-character): it is a char followed by L   3.char16_t(w_char of 16 bit)   4.char32_t(w_char of 32 bit)
        * string ----> 1.char_arr    2.string obj
        * boolean ---> 1.True   2.False
    */


    // Integers
    int i1 = 1;
    int i2 = 023;
    int i3 = 0x1A3;
    int i4 = 0b1011;

    int i5 = 123u;
    int i6 = 123l;
    int i7 = 123ul;
    int i8 = 123ll;
    int i9 = 123ull;

    // float
    float f1 = 1.23;
    float f2 = 1.23f;
    float f3 = 12E3;
    float f3 = 12E3f;

    // char
    char c1 = 'a';
    char c2 = L'a';
    wchar_t c3 = 'a';
    char16_t c4 = 'a';
    char32_t c5 = 'b';

    // Strings
    char str1[] = "krishna";
    char *str2 = "krishna";
    string str3 = "krishna";

    // Raw strings: these are normal strings in which escape sequences are not processed
    string str5 = "hello \n this is normal string";
    string str4 = R"(hello \n this is a raw string)";

    // Bool
    bool b1 = 1;    
    bool b2 = 0;
    bool b3 = true;  // True will not work
    bool b4 = false; // False will not work

    // Udl
    long double weight = 3.6_kg;
    cout << weight << endl;
    cout << setprecision(8) << (weight + 2.3_mg) << endl;
    cout << (32.3_kg / 2.0_g) << endl;
    cout << (32.3_mg * 2.0_g) << endl;

    return 0;
}