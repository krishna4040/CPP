# include <iostream>
# include <algorithm>
# include <functional>
using namespace std;

void display(int arr[] , int n)
{
    // printing array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // function object 
    //* Function wrapped in a class so that it is available like an object
    //* aka functor

    int arr[] = {6,5,4,3,2,1};

    // sorting in asc order
    sort(arr , arr+6);
    display(arr , 6);

    // sorting in des order using func obj
    sort(arr , arr+6 , greater<int>());
    display(arr , 6);

    return 0;
}