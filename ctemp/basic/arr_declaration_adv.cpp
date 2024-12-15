# include <iostream>
# include <fstream>
using namespace std;

void input(int arr[] , int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void display(int arr[] , int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void display2(int arr[] , int n)
{
    for (int i = 0; i < n; i++)
        cout << *(arr+i) << " ";
    cout << endl;
}

int main()
{
    //* Array with size declaration
    int arr1[5] = {1,2,3,4,5};
    display(arr1 , 5);  // 1 2 3 4 5

    int arr2[5] = {1};
    display(arr2 , 5);  // 1 0 0 0 0

    int arr3[5];
    input(arr3 , 5);    // 1 2 3 4 5
    display(arr3 , 5);  // 1 2 3 4 5

    int arr4[5] = {};
    input(arr4 , 5);    // 1 1 1 1 1
    display(arr4 , 5);  // 1 1 1 1 1

    int arr5[5] = {1};
    input(arr5 , 5);    // 5 4 3 2 1
    display(arr5 , 5);  // 5 4 3 2 1

    int arr6[5] = {};
    display(arr6 , 5);  // 0 0 0 0 0 

    //* Array without size declaration
    int a1[] = {1,2,3,4,5};
    display(a1 , 5);    // 1 2 3 4 5

    // int a2[];    // invalid

    int a3[] = {};
    input(a3 , 5);      // 1 1 1 1 1
    display(a3 , 5);    // 1 1 1 1 1

    int a4[] = {1};
    input(a4 , 5);      // 5 4 3 2 1
    display(a4 , 5);    // 5 4 3 2 1

    int a5[] = {};
    display(a5 , 5);    // 0 0 0 0 0

    return 0;
}