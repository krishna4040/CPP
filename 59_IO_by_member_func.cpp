# include <iostream>
# include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("59_sample.txt");
    out << "This is me" << endl;
    out << "This is also me" << endl;
    out.close();

    ifstream in;
    in.open("59_sample.txt");
    string s;
    // getline(in , s);  // this will give a line in string s
    // cout << s << endl;

    // print whole file
    while (in.eof() == 0)
    {
        getline(in , s);
        cout << s << endl;
    }
    in.close();

    return 0;
}