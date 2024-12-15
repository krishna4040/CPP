# include <iostream>
# include <fstream>
using namespace std;

// file indexing: file is being indexed from 0 onwards at end of each line the '\n' is also present and is also indexed

int main(int argc, char const *argv[])
{
    ifstream fin("00.txt", ios::in);
    int idx_initial = fin.tellg();

    fin.seekg(9,ios::beg);
    int idx_final = fin.tellg();
    string content_final;
    fin >> content_final;
    cout << content_final;

    return 0;
}
