# include "bits/stdc++.h"  // use this to include all std files
using namespace std;

// use macros
# define pi 3.14
# define rep(i,n) for ( i = 0; i < n; i++)   // using macros as loops


// initialisation_list: used to acess values
template<typename T>
void display(initializer_list<T>text)
{
    // using range based for loop when no modification req
    for (auto &&i : text)
        cout << i << " ";
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);  // fast cin cout

    display({"one","two","three"}); // initialsisation list

    // use auto keyword
    auto a = 5;

    // unformatted_unlocked(): non-threaded-safe 
    // speed ---> getchar_unlocked() > getchar() > scanf() > cin

    return 0;
}