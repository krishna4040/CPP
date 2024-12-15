# include <iostream>
using namespace std;

int main()
{
    //pointers: data type which holds address of other datatypes
    int a = 3;

    //pointer initialisation
    /*datatype *ptr_var = &var;*/
    int *b = &a;
    
    //printing ptr_var and var
    //& ---> Address operator 
    cout << b << " " << &a << endl;  //gives address of a
    // * ---> dereference operator
    cout <<*b << " " <<  a << endl;  //gives value of a


    //pointer to pointer
    int **c = &b;                                 //int **c = &(&a) ---> invalid
    cout << c  << " " << &b << endl;              //gives address of ptr which gives address of a
    cout <<*c  << " " <<  b << " " << &a << endl; //gives address of a
    cout <<**c << " " << *b << " " <<  a << endl; //gives value of a


    int a = 5;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    cout <<   d << &c;
    cout <<  *d <<  c  << &b;
    cout << **d << *c  <<  b << &a;
    cout <<***d << **c << *b <<  a;

    return 0;
}