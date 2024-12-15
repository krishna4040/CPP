# include <iostream>
using namespace std;

void swap(int &n1 , int &n2);

int main()
{
    // Refrence Variable
    //* Refrence var is a internal pointer
    //* When a variable is declared as a reference, it becomes an alternative name for an existing variable.
    //* A variable can be declared as a reference by putting ‘&’(not an address symbol) in the declaration.
    //* //Rohan ---> monty ---> Rohu ---> dangerous coder

    //* ref var initialsiation
    int a = 10;
    int &ref = a;   // ref is refrence to a

    //* if we change value of ref var then value of actual var also changes
    ref = 20;
    cout << a << endl;   // 20

    //* if we change value of actual var then value of ref var also changes
    a = 30;
    cout << ref << endl; // 30


    // Applications of pointers
    //* 1.Modify passed parameters in function: If a function receives a reference to a variable, it can modify the value of the var
    //* 2.Avoiding a copy of large structures
    //* 3.In For Each Loop to modify all objects

    int x = 1 , y = 2;
    swap(x , y);
    cout << x << y;


    // similarities bw pointers and Refrences
    //* both used to change the local variables of one function inside another function.
    //* Both of them can also be used to save copying of big objects when passed as arguments to functions or returned from functions


    // Differences bw pointers and Refrences
    //* void pointers are valid but void refrences are not
    //* There can be pointers for pointers, though their is ref for ref but they have no utility
    //* we've to use -> for pointers and . for ref var

    return 0;
}

void swap(int &n1 , int &n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}