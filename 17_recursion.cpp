# include <iostream>
using namespace std;

/********Recursion*********/
//When a function calls itself until a base condition is met

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int prev = sum(n-1);
    return n + prev;
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n-1);
}

//recursion is not always best approach sometimes iterative approach maube better
//e.g. fibonacci series
int fib(int n)
{
    if (n == 1 || n==2)
    {
        return 1;
    }
    int prev1 = fib(n-1);
    int prev2 = fib(n-2);
    return prev1  + prev2;
}

int main()
{
    int n;
    cin >> n;

    cout << sum(n) << endl;

    cout << factorial(n) << endl;

    cout << fib(n) << endl;

    return 0;
}