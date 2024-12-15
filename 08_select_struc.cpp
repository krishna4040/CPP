# include <iostream>
using namespace std;
int main()
{
    //1.if else ladder
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "you are a teen" << endl;
    }
    else if (age >= 18)
    {
        cout << "you are adult" << endl;
    }
    else
    {
        cout << "enter correct age";
    }

    //2.swicth case
    switch (age)
    {
    case 18:
        cout << "adult";
        break;
    case 2:
        cout << "teen";
        break;
    case 22:
        cout << "adult";
        break;
    default:
        cout << "no special cases";
        break;
    }

    return 0;
}
