# include <iostream>
# include <map>
using namespace std;

int main()
{
    // Map
    //* Map is an assosiated array
    //* Key value Pairs

    // cresting map
    map <char , int> m1;

    // Initialising map
    m1['a'] = 1;
    m1['b'] = 2;
    m1['c'] = 3;
    m1['d'] = 4;

    // printing map
    map <char , int> :: iterator itr;
    for (itr = m1.begin() ; itr != m1.end() ; itr++)
    {
        cout << (*itr).first << " ";   // key
        cout << (*itr).second << " ";  // value
        cout << endl;
    }

    // size
    cout << m1.size() << endl;

    // maxsize
    cout << m1.max_size() << endl;

    // empty
    cout << m1.empty() << endl;  // 0  // bool result


    return 0;
}