# include <iostream>
using namespace std;

// Pointer
// Pointter is a variable that stores address of a var
// printing pointer or &var it points to both prints address
// Derefring it prints the value stored on that address

int main()
{
    //* Pointer initialisation
    int a = 1;
    int *b = &a;
    // int *c = 20;  invalid initialsation
    int *d;       // if only inilitialised not assigned then it is known as wild pointer they r allowed
    int *n = NULL;   // null pointer  //same as int *n = 0; 

    //* printing pointers
    cout <<  b  << &a << endl;
    cout << *b <<  a << endl;   // * derefrence operator

    //* Pointers for pointers
    int x = 1;
    int *y = &x;
    int **z = &y;

    //* Pointers and array
    //arr_var = memory address of first element
    //ptr arithmetic: new_address(ptr+i) = current_address(ptr) + i * size_of_datatype_of_arr
    int arr[5] = {1,2,3,4,5};
    int *ptr_arr = arr;
    // note that arr name is itself an pointer pointing at first elemnt of array

    cout <<  ptr_arr  << " " << arr    << endl;  //returns mem(arr[0])
    cout << *ptr_arr  << " " << arr[0] << endl;  //returns arr[0]

    cout << "The value of arr[0] is" << *ptr_arr << endl;
    cout << "The value of arr[1] is" << *(ptr_arr+1) << endl;
    cout << "The value of arr[2] is" << *(ptr_arr+2) << endl;
    cout << "The value of arr[3] is" << *(ptr_arr+3) << endl;
    cout << "The value of arr[4] is" << *(ptr_arr+4) << endl;
    cout << "The value of arr[5] is" << *(ptr_arr+5) << endl;

    //* Array of pointers
    int *ptr[3]; // pointer array initialisation
    int array[] = {1,2,3};

    for (int i = 0; i < 3; i++) // making each elemnt of pointer array to refer to an element of other array
        ptr[i] = &array[i];
    
    for (int i = 0; i < 3; i++)
        cout << *ptr[i] << " ";
    cout << endl;

    // Types of pointers:
    /*
        * primitive pointers
        * structure pointers
        * function pointers
        * multi-level pointers ---> 1.pointer to pointers  2.pointers to arrays and multi-dimension-arr 
        * Null pointers
        * opaque pointers
        * void pointers
        * wild pointers
        * pointers to constants
        * constant pointers
        * far pointer
        * near pointer
        * normalized pointer
        * complex pointer
        * huge pointer
        * file pointer
        * dangling pointer: pointers pointing to a deallocated address
        * smart pointers
    */

    //* Void pointers
    // A void pointer is a pointer that has no associated data type with it. 
    // it can be used to store address of derieved datatypes like structure , unions , enums , classes
    // A void pointer can hold address of any type and can be typecasted to any type. 
    // We cannot derefer to address stored in void pointer

    void *p;  // void pointer intialisation
    int u = 2;
    char v = 'v';
    p = &v;
    cout << p << endl;
    p = &u;
    cout << p << endl;
    // to derefer void pointer
    cout << *(int *)p << endl;

    //* Wild pointers: a pointer that is not initialized
    int *i; /*wild ptr*/
    i = &a; // i is not wild now

    //* null pointer: pointer points to null
    int *j = NULL;
    int *k = nullptr;
    nullptr_t n;

    return 0;
}