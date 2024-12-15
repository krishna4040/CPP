// using constructor that take obj of other class as argument
// using overloading casting operator of other class
# include "bits/stdc++.h"
using namespace std;

class cgs
{
private:
    int length , mass , time;
public:
    cgs() : length(0) , mass(0) , time(0) {}
    cgs(int l , int m , int t) : length(l) , mass(m) , time(t) {} 
    void display()
    {
        cout << "lenght: " << length << "cm"  << endl;
        cout << "mass: "   << mass   << "gm"  << endl;
        cout << "time: "   << time   << "sec" << endl;
    }
};

class mks
{
private:
    int length , mass , time;
public:
    mks() : length(0) , mass(0) , time(0) {}
    mks(int l , int m , int t) : length(l) , mass(m) , time(t) {}
    operator cgs()
    {
        cgs c(length*100 , mass*1000 , time);
        return c;
    }
    void display()
    {
        cout << "lenght: " << length << "m"   << endl;
        cout << "mass: "   << mass   << "kg"  << endl;
        cout << "time: "   << time   << "sec" << endl;
    }
};

int main(int argc, char const *argv[])
{
    mks m(1,2,3);
    cgs c = m;
    c.display();
    return 0;
}