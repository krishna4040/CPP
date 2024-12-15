# include <iostream>
# include <fstream>
using namespace std;

int main()
{
    // connecting our file with hout O/P stream
    ofstream hout("58_sample.txt",ios::out);

    // creating a name string entered by user
    string name;
    getline(cin , name);

    // writing the string to the file
    hout << name;

    // closing file
    hout.close();

    // connnecting our fle with hin I/P stream
    ifstream hin("58_sample.txt");

    // creating a string content to store data
    string content;

    // reading content of file in string
    getline(hin , content);

    // printing the content
    cout << "The content of this file is: " << content;

    // closing file
    hin.close();

    return 0;
}