# include <iostream>
# include <vector>
# include <iterator>
using namespace std;

int main(int argc, char const *argv[])
{
    // Declaring vector
    vector<int> v = {1,2,3,4};
    // Declaring iterator to vector
    vector<int> :: iterator i; // general iterator can itr through any vec

    // printing vector element using iterator
    for (i = v.begin(); i != v.end(); i++)  // specified itr
        cout << *i << " ";
    
    // iterator operations
    vector<int> :: iterator j = v.begin() , k = v.end();  // j points to 0th idx element and k to 3rd idx element
    advance(j,3);               // sets position by increamenting // j points to 0+3th idx element  
    // if we do not wish to change value of our primary iterator we use next,prev in place of advance
    auto ptr = next(j,3);
    auto ftr = prev(k,2);

    // Inserter operator
    vector<int> c = {0,0,0,0};
    copy(c.begin() , c.end() , inserter(v,ptr));
    for(int ele : v)
        cout << ele << " ";

    return 0;
}
