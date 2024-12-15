# include "bits/stdc++.h"  // use this to include all std files
using namespace std;

// use macros
# define pi 3.14
# define rep(i,n) for ( i = 0; i < n; i++)   // using macros as loops
# define int long long int


// initialisation_list: used to acess values
template<typename T>
void display(initializer_list<T>text)
{
    // using range based for loop when no modification req
    for (auto &&i : text)
        cout << i << " ";
}

signed main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);  // fast cin cout

    int mod = 10E9+7;   // mod num

    display({"one","two","three"}); // initialsisation list

    // use auto keyword
    auto a = 5;

    // unformatted_unlocked(): non-threaded-safe 
    // speed ---> getchar_unlocked() > getchar() > scanf() > cin

    // Modular maths
    // Addition: (a + b) % m = ((a % m) + (b % m)) % m
    // Multiplication: (a x b) % m = ((a % m) x (b % m)) % m
    // Divison: (a / b) % m = (a x (inverse of b if exists)) % m
    // Modular inverse: if (a x b) % m = 1 then b is the modular inverse of a.

    return 0;
}