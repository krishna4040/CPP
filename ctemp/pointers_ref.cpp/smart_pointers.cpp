# include <iostream>
using namespace std;

//! problems with normal pointers
// memory leaks
// dangling pointer(have to be deleted manually)
// wild pointer
// data inconsistency
// buffer overflow
//* smart pointers: solution
// A class with a ptr , dest , overloaded operator like . ->
template <class T = int>
class smartptr
{
private:
    T *ptr; // actual ptr
public:
    explicit smartptr(T *p = NULL){ptr = p;}
    ~smartptr(){delete ptr;}
    T& operator *(void){return *ptr;}
    T* operator ->(void){return ptr;}
};

int main(int argc, char const *argv[])
{
    smartptr<int> ptr(new int);
    *ptr = 20;

    // c++ provide implementation of following pointers
    // # include <memory>
    /*
        * auto_ptr
        * unique_ptr
        * shared_ptr
        * weak_ptr
    */

    return 0;
}