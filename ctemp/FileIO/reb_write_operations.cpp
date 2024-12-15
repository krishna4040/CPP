# include <iostream>
# include <fstream>
using namespace std;

// ifstream: read
// ofstream: write

int main(int argc, char const *argv[])
{
    // write operation
    // ios::out ---> overwrites   ios::app ---> appends
    ofstream fout("00.txt",ios::out);

    // writing simple text
    fout << "Hello World!" << endl;

    // writing from ip from console into file
    string text;
    cin >> text;
    fout << text << endl; 

    // writing continuous ip from console into file
    string line;    // creating a str to store line by line in it and print it on console
    while (fout){
        getline(cin, line);
        if (line == "-1")
            break;
        fout << line << endl;
    }
    fout.close();

    // seek and tell functions
    fout.seekp(ios::cur);
    fout.tellp();

    return 0;
}