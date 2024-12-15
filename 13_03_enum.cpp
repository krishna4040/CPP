#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Defining enum Gender
    enum Gender { Male, Female };
    
    // an enum provides sequenxe value to all its members
    cout << Male;   // 0
    cout << Female; // 1

    // Creating Gender type variable
    Gender gender = Male;

    switch (gender)
    {
    case Male:
        cout << "Gender is Male";
        break;
    case Female:
        cout << "Gender is Female";
        break;
    default:
        cout << "Value can be Male or Female";
    }
    return 0;
}