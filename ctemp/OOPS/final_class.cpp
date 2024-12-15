//Final_Class: A non-inheritable class is called final class
# include <iostream>
using namespace std;

class final;

class makefinal{
private:
    makefinal(){cout << "makefinal constructor";}
    friend class final;
};
class final : virtual makefinal{
public:
    final(){cout << "final constructor";}
};

// now we cannot derieve final class
// if we do the derieved class const invoke makefinal class const which is private

int main(int argc, char const *argv[])
{
    
    return 0;
}