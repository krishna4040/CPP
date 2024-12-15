# include "bits/stdc++.h"
using namespace std;

class Base {
public:
    virtual ~Base() { // Virtual destructor
        // Cleanup code for the base class
    }
};

class Derived : public Base {
public:
    ~Derived() { // Derived class destructor
        // Cleanup code for the derived class
    }
};

int main() {
    Base* ptr = new Derived(); // Create a derived class object via a base class pointer
    delete ptr; // Delete the object using the base class pointer

    // if we do not create base dest virtual --> then only base dest is called
    // if we create base dest virtual --> then base dest and derieved dest both are called

    return 0;
}