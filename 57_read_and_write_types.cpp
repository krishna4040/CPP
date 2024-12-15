# include <iostream>
# include <fstream>
using namespace std;

// Useful classes for working with files in c++ that are included with fstream are
//* fstreambase
//* ifstream  ---> derieved from fstreambase
//* ofstream  ---> derieved from fstreambase

// In order to work with files in c++ we need to open files
// There are two ways to open a file
//* 1.using the constructor
//* 2.using the member function open() of the class

int main()
{
    // opening files with constructor and writing it
    ofstream out("57_sample.txt");
    string s1 = "Krishna";
    out << s1;  // write operation   // overwrites s1 to sample.txt

    // opening files with constructor and raeding it
    ifstream in("57_sample.txt");
    string s2;
    in >> s2;       // reading operation  // as good as getline(in , s2);
    cout << s2;

    return 0;
}