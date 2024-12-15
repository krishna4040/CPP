#include <iostream>

class Counter {
private:
    static int count;

public:
    static void increment() {
        count++;
    }

    static int getCount() {
        return count;
    }
};

int Counter::count = 0;

int main() {
    Counter::increment();
    Counter::increment();
    int count = Counter::getCount();

    // Output: Count: 2
    std::cout << "Count: " << count << std::endl;

    return 0;
}