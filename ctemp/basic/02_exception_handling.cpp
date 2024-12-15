# include <iostream>
using namespace std;

struct myexception : public exception{const char *what() const throw(){return "Division by zero!";}};

float division(float a , float b)
{
    if (b == 0)
        throw myexception();
    return a/b;
}

int main(int argc, char const *argv[])
{
    try{float z = division(1.0f,0);}
    catch(myexception e){cerr << e.what();}
    return 0;
}