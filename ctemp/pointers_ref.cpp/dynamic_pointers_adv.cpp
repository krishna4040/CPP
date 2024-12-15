# include <iostream>
using namespace std;

//* static memory allocation: stack: LIFO fixed size. Global var have global scope while local var have local scope.memory allocation and deallocation is automatic
//* Dynamic memory allocation:Heap : size not fixed.  variables always act as global. memory allocation and deallocation is not automatic if not followed properly than it results in memory leak.
// Application of dynamic memory allocation: 1.vector  2.Linked list  3.Tree

// C uses malloc() , calloc() , realloc() func to allocate memory dynamacially
// c++ support above functions as well as two more operators ---> 1.new   2.delete

int main()
{
    //* Dynamic pointers ----> Dangling pointers
    // new keyword
    // The new operator denotes a request for memory allocation on the Free Store
    int *p = new int;           // data-type pointer-variable = new data-type;
    cout << p << *p << endl;    // throws garbage value
    *p = 2;
    cout << p << *p << endl;    // its address and 2


    // Initialize memory
    //* We can also initialize the memory for built-in data types using a new operator.
    int *builtin_ptr = new int(1);
    cout << builtin_ptr << " " << *builtin_ptr << endl;

    int a = 2;
    int *builtin_ptr2 = new int(a);
    cout << builtin_ptr2 << " " << *builtin_ptr2 << endl;

    //* For custom data types, a constructor is required (with the data type as input) for initializing the value. 
    struct custom
    {
        int var;
        custom(int v){var = v;}
        custom() = default;     // default constructor // as good as custom(){}
    };
    custom *custom_ptr = new custom;        // valid due to presence of default constructor
    custom *custom_ptr2 = new custom(2);

    cout << custom_ptr  -> var << endl;  // garbage value
    cout << custom_ptr2 -> var << endl;  // 2



    // Allocating block of memory
    int *ptr_arr = new int[3];      // It is an array of size 3 where ptr_arr points to its first element of its own sequence
    ptr_arr[0] = 1;
    ptr_arr[1] = 2;
    ptr_arr[2] = 3;

    // Nothrow
    //* What if enough memory is not available during runtime? ----> throws error 
    //* We use nothrow with new operator
    //* If in case memory is not available it makes the pointer to be null
    int *ptr = new(nothrow) int;
    if (!ptr)
        cout << "Memory allocation failed" << endl;
    //* It is always advisible to use this if statement before using dynamically allocated pointer


    // Deallocating memory
    delete p , builtin_ptr , builtin_ptr2 , custom_ptr , custom_ptr2;
    delete[] ptr_arr;

    return 0;
}