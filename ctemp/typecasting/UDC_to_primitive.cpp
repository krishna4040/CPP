# include <iostream>
using namespace std;

class Time
{
private:
    int hr , min;
public:
    Time() : hr(0) , min(0) {}
    Time(int h , int m) : hr(h) , min(m) {}
    operator int(){return min + (60*hr);}   // overloading cast operator
    ~Time(){}
};

int main(int argc, char const *argv[])
{
    Time t(3,40);
    int dur  = t;
    cout << dur;
    return 0;
}