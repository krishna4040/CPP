# include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //* Pointers too constants
    // the data pointed by the pointer is constant and cannot be changed. Although, the pointer itself can change and points somewhere else
    const int* ptr = new int(5);

    //* contant pointer
    // the pointer points to a fixed memory location, and the value at that location can be changed because it is a variable, but the pointer will always point to the same location because it is made constant here.
    int* const ptr = new int(5);

    //* constant pointers to constant
    // data pointed and the pointer both are fixed
    const int* const ptr = new int(5);

    return 0;
}