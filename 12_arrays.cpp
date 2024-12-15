# include <iostream>
using namespace std;

int main()
{
    /**************Arrays*******************/
    //Arrays: It is a collection of items of similar type stored in contiguous memory locations
    //Array declaration:

    int arr1[5];
    arr1[0] = 0;
    arr1[1] = 1;
    arr1[2] = 2;
    arr1[3] = 3;
    arr1[4] = 4;
    arr1[5] = 5;

    int arr2[5] = {1 , 2 , 3 , 4 , 5};

    int arr3[5];
    for (int i = 0; i < 5; i++)
    {
        arr3[i] = i;
    }
    
    //User defiened array
    int n;
    int arr4[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr4[i];
    }

    // Partial array declaration
    int  arr5[] = {};
    int  arr6[3] = {};
    int  arr7[3] = {1};  // remaing elements are 0
    char arr8 = {'a'};  // remaing elements are NULL


    //printing Array elements

    cout << arr1[0] << endl;
    cout << arr1[1] << endl;
    cout << arr1[2] << endl;
    cout << arr1[3] << endl;
    cout << arr1[4] << endl;
    cout << arr1[5] << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }
    
    /************Pointers and array****************/
    //arr_var = memory address of first element
    //ptr arithmetic: new_address(ptr+i) = current_address(ptr) + i * size_of_datatype_of_arr

    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;

    cout << ptr  << " " << arr    << endl;  //returns mem(arr[0])
    cout << *ptr << " " << arr[0] << endl;  //returns arr[0]

    cout << "The value of arr[0] is" << *ptr << endl;
    cout << "The value of arr[1] is" << *(ptr+1) << endl;
    cout << "The value of arr[2] is" << *(ptr+2) << endl;
    cout << "The value of arr[3] is" << *(ptr+3) << endl;
    cout << "The value of arr[4] is" << *(ptr+4) << endl;
    cout << "The value of arr[5] is" << *(ptr+5) << endl;

    return 0;
}