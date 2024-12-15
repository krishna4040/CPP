# include <iostream>
using namespace std;

class binary
{
    string s;           // By default class members are private
    void chk_bin();     
    public: 
        void read();
        void display();
        void ones_complement();
};

void binary :: read()
{
    cout << "Enter a binary number: ";
    getline(cin , s);
}

void binary :: chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid format" << endl;
            exit(0);
        }
    }
}

void binary :: ones_complement()
{
    chk_bin();      // Nesting of member function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else 
            s.at(i) = '0';
    }
}

void binary :: display()
{
    for (int i = 0; i < s.length(); i++)
        cout << s.at(i);
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    b.display();
    // b.chk_bin();  // nested within ones_comlement
    b.ones_complement();
    b.display();

    return 0;
}