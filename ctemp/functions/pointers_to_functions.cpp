#include <iostream>

// Function declarations
// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}


int main() {
    // Function pointer declaration
    int (*ptr)(int, int);

    // Assigning functions to function pointers
    ptr = add;
    std::cout << "Addition: " << ptr(3, 4) << std::endl;

    ptr = subtract;
    std::cout << "Subtraction: " << ptr(7, 2) << std::endl;

    ptr = multiply;
    std::cout << "Multiplication: " << ptr(5, 6) << std::endl;

    return 0;
}