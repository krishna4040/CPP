# include <iostream>
using namespace std;

class enclosed
{
private:
    int x;
    class nested
    {
        int y;
        void nestedfun(enclosed *e){cout << e->x;}
    };
};

int main(int argc, char const *argv[])
{

    return 0;
}