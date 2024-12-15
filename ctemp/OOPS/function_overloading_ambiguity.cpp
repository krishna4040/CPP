# include <iostream>
using namespace std;

void test(float s , float t){cout << "Float is called";}
void test(int s , int t){cout << "int is called";}

int main(int argc, char const *argv[])
{
    // test(1.3,2.4); // ambiguity
    test(1.3f,2.3f);  // resolving ambiguity
    // reason: floating literals are by default considered double whose def is not found 

    return 0;
}