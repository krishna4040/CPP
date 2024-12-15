# include <iostream>
# include <cmath>
using namespace std;

int main()
{
    // Trigonometric function
    double x = 2.3;
    cout << "Sine value of x=2.3 : " << sin(x) << endl;
    cout << "Cosine value of x=2.3 : " << cos(x) << endl;
    cout << "Tangent value of x=2.3 : " << tan(x) << endl;
    cout << "-------------" << endl;

    // ITF function
    x = 1.0;    // reslut in radians
    cout << "Arc Cosine value of x=1.0 : " << acos(x) << endl;
    cout << "Arc Sine value of x=1.0 : " << asin(x) << endl;
    cout << "Arc Tangent value of x=1.0 : " << atan(x) << endl;
    cout << "-------------" << endl;

    // Hyperbolic functions
    x = 57.3; // in radians
    cout << "Hyperbolic sine of x=57.3 : " << sinh(x) << endl;
    cout << "Hyperbolic Cosine of x=57.3 : " << cosh(x) << endl;
    cout << "Hyperbolic tangent of x=57.3 : " << tanh(x) << endl;
    cout << "-------------" << endl;

    // loge function
    double y = 100.0;  
    cout << "Log value of y=100.0 with base e  is : " << log(y)  << endl; // Natural base with 'e'
    cout << "Log value of y=100.0 with base 10 is : " << log10(y) << endl;
    cout << "-------------" << endl;

    // exponential function
    y = 2;
    cout << "value of e^y is where y=2 is: " << exp(y) << endl;
    cout << "-------------" << endl;

    // Square root function
    y = 0.25;
    cout << "Square root value of y=0.25 : " << sqrt(y) << endl;
    cout << "-------------" << endl;

    // cube root function
    y = 27;
    cout << "cube root value of y=27 : " << cbrt(y) << endl;
    cout << "-------------" << endl;

    // Absolute value function
    int z = -10;
    cout << "Absolute value of z=-10 : " << abs(z) << endl;
    x = -4.57;
    cout << "Absolute value of x=-4.57 is : " << fabs(x) << endl;
    cout << "-------------" << endl;

    // Power function
    cout << "Power value: x^y = (2.3^0.25) : " << pow(x, y) << endl;
    cout << "-------------" << endl;

    // Hypotenuse function
    x = 3.0;
    y = 4.0;
    cout << "Hypotenuse having other two sides as x=3.0 and" << " y=4.0 : " << hypot(x, y) << endl;
    cout << "-------------" << endl;

    // Floor function ----> gif
    x = 4.56;
    cout << "Floor value of x=4.56 is : " << floor(x) << endl; // result: 4
    cout << "-------------" << endl;

    // Ceiling function -----> lif
    y = 12.3;
    cout << "Ceiling value of y=12.3 : " << ceil(y) << endl;   // result: 13
    cout << "-------------" << endl;

    // decimal part of number
    x = 1.23;
    cout << trunc(x);  // result: 1
    cout << round(x);

    return 0;
}