# include <iostream>
using namespace std;

template <class T>
class harry
{
    public:
        T data;
        harry(T a)
        {
            data = a;
        }
        void display();
};

template <class T>
void harry<T> :: display()
{
    cout << data << endl;
}

int main()
{
    harry <int> H(1);
    H.display();

    return 0;
}