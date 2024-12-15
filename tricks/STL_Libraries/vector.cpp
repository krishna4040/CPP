# include "bits/stdc++.h"
using namespace std;

//todo display vector
void display1(vector<int> v)
{
    // using loop
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
void display2(vector<int> v)
{
    // using iterator
    vector <int> :: iterator i;
    for (i = v.begin(); i != v.end() ; i++)
        cout << *i << " ";
}
void display3(vector<int> v)
{
    // using auto keyword ---> auto keyword identifies datatype automatically
    for (auto element : v)
        cout << element << " ";
    // forrange snippet
}

int main(int argc, char const *argv[])
{
    //todo vector declaration
    vector<int> v;
    vector<int> c1(3); // vector of size 3
    vector<int> c2(3,4); // vector of size 3 and all elements as 4
    vector<int> c3 = {1,2,3,4,5};

    //todo Iterators
    v.begin();v.cbegin();v.rbegin();v.crbegin();
    v.end();v.cend();v.rend();v.crend();
    vector<int> :: iterator i , j; // i,j can be equal to either of these or a constant number
    i = v.begin();
    j = v.end();

    //todo Random acess
    v.at(2);    // 3rd element
    v[2];       // 3rd element
    v.front();  // front element
    v.back();   // last element

    //todo Vector characterstics
    v.size();       // returns size
    v.capacity();   // returns max cap
    v.max_size();   // nearly same as cap
    v.empty();      // return 1 if vector is empty

    //todo insertion
    v.push_back(1);     // add at last
    v.emplace_back(2);  // add at last
    v.emplace(i,3);     // add at given index
    v.insert(j,4);      // add at given index

    //todo deletion
    v.pop_back();   // remove from last
    v.clear();      // empty the given vector
    v.erase(i,j);   // erase from range 

    //todo vector operations
    v.swap(c1);
    reverse(i,j);
    sort(i,j);
    swap(v,c1);

    // DEQUE : doubly ended queue
    // Have same methods as that of vectors with addition of push and pop from front and back
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.pop_back();
    d.pop_front();

    return 0;
}