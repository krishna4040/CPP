# include <iostream>
using namespace std;

class time{
private:
    int hr;
    int min;
public:
    time() : hr(0) , min(0) {}
    time(int h , int m) : hr(h) , min(m) {}
    // using parameterized const to convert int to time
    time(int t){        
        hr = t / 60;
        min = t % 60;
    }
    void display(){cout << "hr: " << hr << " min: " << min;}
    ~time(){}
};

int main(int argc, char const *argv[])
{
    time t = 80;
    t.display();
    return 0;
}
