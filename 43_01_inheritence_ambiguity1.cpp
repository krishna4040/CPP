# include <iostream>
using namespace std;

// When same function is present in  base and derived class then there exist an ambiguity

class base1
{
    public:
        void greet()
        {
            cout << "How are you" << endl;
        }
};

class base2
{
    public:
        void greet()
        {
            cout << "kaise ho" << endl;
        }
};

class derieved : public base1 , public base2
{
    int a;
    public:
        // Ambiguity resolution
        void greet()
        {
            base1 :: greet();
        }
};

int main()
{
    base1 b1;
    base2 b2;
    b1.greet();
    b2.greet();

    derieved d;
    d.greet();

    return 0;
}