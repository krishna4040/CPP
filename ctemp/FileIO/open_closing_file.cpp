# include <iostream>
# include <fstream>
# include <ios>
using namespace std;

/*
Useful classes for working with files in c++ that are included with fstream base class are
    ifstream(read)  ---> derieved from fstream base *Default mode: ios::in*
    ofstream(write) ---> derieved from fstream base *Default mode: ios::out*
    fstream(both)   ---> main fstream base          *Default mode: ios::in | ios::out* 
*/
int main(int argc, char const *argv[])
{
    /*
    In order to work with files in c++ we need to open files There are two ways to open a file
        *1.using the constructor: fstream pointer("file_name" , open_mode)
        *2.using the member function open() of the class: pointer.open("file_name" , open_mode);
    */

    // opening
    ifstream fin("student.txt",ios::in);    // read
    ofstream fout("student.txt",ios::out);  // write
    fstream finout("student.txt",ios::in | ios::out);

    // closing
    fin.close();
    fout.close();
    finout.close();

    return 0;
}