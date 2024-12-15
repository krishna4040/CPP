# include "bits/stdc++.h"
# include <iostream>
# include <vector>
using namespace std;

template <class T>
void display(vector <T> &v)
{
    // printing vector elements using [] operator
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

template <class T>
void display2(vector <T> &v)
{
    // printing elements using iterator
    vector <int> :: iterator itr;
    for (itr = v.begin(); itr != v.end() ; itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}

template <class T>
void display3(vector <T> &v)
{
    // printing element using auto
    // forrange snippet
    for (auto element : v)
    {
        cout << element << " ";
    }
    cout << endl;
}

int main()
{
    // vectors
    //* resizable array
    //* dynamic array

    // initialsing vector
    vector <int> v;

    // inserting element into element
    for (int i = 0; i < 5; i++)
    {
        int element = i;
        v.push_back(element);
    }

    // deleting vec elements
    v.pop_back();    // remove last element

    // printing vector elements
    display(v);     // 0 1 2 3

    // ways to create a vector
    vector <int>  v1;       // zero length integer vector uninitialsied
    vector <char> v2(4);    // 4 length char vector unitialised
    vector <char> v3(v2);   // 4 element char vector from v2 initialised
    vector <int>  v4(6,3);  // 3 3 3 3 3 3 initialised
    display(v1);
    display(v2);
    display(v3);
    display(v4);

    // swaping vectors
    swap(v , v4);
    display(v);     // 3 3 3 3 3 3
    display(v4);    // 0 1 2 3

    // sorting vector
    sort(v4.begin() , v4.end());
    display(v4);    // 0 1 2 3

    // clearing a vector
    v4.clear();
    display(v4);    // no result

    //empty
    cout << v4.empty() << endl; // 1 // bool result

    // size
    cout << v.size() << endl;

    // maxsize
    cout << v.max_size() << endl;

    // at
    cout << v.at(3) << endl;

    // front and back
    cout << v.front() << v.back() << endl;

    return 0;
}