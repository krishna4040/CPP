# include <iostream>
# include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream fin("00.txt",ios::in);
    string content; // creating a string to store contents of file in it

    // reading a single line in string and printing on console
    fin >> content;
    cout << content;

    // reading whole file in string line by line and printing on console
    string line;
    int count = 0;
    while (fin.eof() == 0)
    {
        getline(fin,line);
        cout << ++count << ". " << line << endl;
    }
    fin.close();

    // reading char from  file
    int charcount = 0;
    while (fin.eof() == 0)
    {
        char c = fin.get();
        charcount++;
    }
    cout << charcount;

    // Reading var from file
    int a;
    char s[100];
    fin >> s;
    sscanf(s,"%d",&a);

    // seek and tell functions

    //*seekg: file_pointer.seekg (number of bytes ,Reference point); 
    //It is used to move the fin pointer to the desired location concerning a reference point.
    fin.seekg(10 , ios::beg);

    //*tellg: int idx = file_pointer.tellg();
    //tellg() is used to realize which they get pointer is in a file.
    int idx = fin.tellg();

    return 0;
}