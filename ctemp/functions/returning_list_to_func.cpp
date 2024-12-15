# include "bits/stdc++.h"
using namespace std;

// Tuple and pair

tuple<int,int,char> func(int n1 , int n2){
    return make_tuple(n1,n2,'a');
}

pair<int,int> foo(int n1 , int n2){
    return make_pair(n1,n2);
}

int main(int argc, char const *argv[])
{
    int a , int b;
    char c;
    tie(a,b,c) = func(1,2);

    pair<int,int> p = foo(1,2);
    cout << p.first << " " << p.second;

    return 0;
}