# include <iostream>
using namespace std;

// We can write a template for function parameters

template <class T1 , class T2>
float avg(T1 n1 , T2 n2)
{
    float avg = (n1+n2)/2;
    return avg;
}

template <class T>
void swapt(T &a , T &b)
{
    T temp = a;
    a = b;
    b = a;
}

int main()
{
    float a = avg(2,3);
    cout << "Avg of 2 and 3 is " << a << endl;

    int x = 1 , y = 2;
    swapt(x,y);
    cout << x << " " << y;

    return 0;
}