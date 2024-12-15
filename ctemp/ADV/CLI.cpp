# include <iostream>
using namespace std;

int main(int argc , char *argv[] /* as good as char **argv */ )
{
    //* argc: Argument count ----> counts number of arguments
    //* *argv[]: Argument vector ----> stores arguments name

    cout << "You have entered " << argc
        << " arguments:" << "\n";

    for (int i = 0; i < argc; ++i)
        cout << argv[i] << "\n";

    return 0;
}