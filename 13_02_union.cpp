# include <iostream>
using namespace std;

int main()
{
    /******************Union*****************/
    //Union: similar to structure but provide better memory management
    //for one obj we can use one attribute_var of union_var at a time. hence occupy less memory then structure
    union money
    {
        int rice;
        char car;
        float pounds;
    };
    money m1;
    m1.rice = 34;
    m1.car = 'c'; 
    // cout << m1.rice;  //gives a garbage value but not an error because we have assigned m1.car at last

    return 0;
}