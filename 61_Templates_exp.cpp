# include <iostream>
using namespace std;

template <class T>
class vector
{
    int size;
    public:
        T *arr;
        vector(int m)
        {
            size = m;
            arr = new T[size];
        }
        T dotproduct(vector &v)
        {
            T p = 0;
            for (int i = 0; i < size; i++)
                p += this->arr[i] * v.arr[i]; 
            return p;
        }
};

int main()
{
    vector <int> v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;

    vector <int> v2(3);
    v1.arr[0] = 4;
    v1.arr[1] = 5;
    v1.arr[2] = 6;

    int a = v1.dotproduct(v2);
    cout << a << endl;

    return 0;
}