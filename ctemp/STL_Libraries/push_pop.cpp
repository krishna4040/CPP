# include "bits/stdc++.h"
using namespace std;

void display(vector<int> v)
{
    for (auto e : v)
    {
        cout << e << " ";
    }
}

int main(int argc, char const *argv[])
{
    // work as FILO
    // push_back appends the container
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    display(v); // 1 2 3

    // pop_back removes last element
    v.pop_back();
    v.pop_back();
    display(v); // 1

    string s;
    // we can push and pop single char in string
    s.push_back('a');
    s.pop_back();

    return 0;
}
