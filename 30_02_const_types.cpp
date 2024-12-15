# include <iostream>
# include <cmath>
using namespace std;

class point
{
    int x , y;
    friend int distance(point p , point q);
    public:
        point(int a , int b)
        {
            x = a;
            y = b;
        }
        void displaypoint()
        {
            cout << "(" <<x << "," << y << ")" << endl;
        }
};

int distance(point p , point q)
{
    int r = sqrt((p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y));
    return r;
}

int main()
{
    point p(1,2);
    p.displaypoint();

    point q(4,6);
    q.displaypoint();

    int distace = distance(p,q);
    cout << distace;

    return 0;
}