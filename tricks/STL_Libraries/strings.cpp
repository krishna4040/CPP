//strings
# include <iostream>
# include <string>
# include <algorithm>
using namespace std;

int main()
{
    //string declaration
    string str1; str1 = "hello";
    string str2(5,'n');
    string str3 = "Krishna";

    //printing string
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;

    //taking string as input
    string str4;
    getline(cin , str4); //we can directly use cin but it is more convinient
    cout << str4 << endl;

    //string functions

    //1.len of string
    string length = "length";
    cout << length.size() << endl;
    cout << length.length() << endl;
    //note: length of string is used to itertate over a string

    //2.indexing
    string python = "python";
    cout << python[0] << endl;

    //3.appending
    string r1 = "kris";
    string r2 = "hna";
    r1.append(r2);      //alter: r1 += r2
    cout << r1 << endl;

    //4.inserting: string.insert(index of iniserion,string to be inserted)
    string temp = "temp";
    temp.insert(0,"you");
    cout << temp;

    //4.clear and empty
    string abc = "jkjurhdsfjfkfh";
    abc.clear();
    cout << abc << endl;
    cout << abc.empty() << endl;        //boolean result

    //5.erase: string.erase(index to start deleting, no of char to be deleted)
    string hello = "hello";
    hello.erase(0,2);
    cout << hello << endl;

    //6.comparing two string
    string first = "abc";
    string second = "xyz";
    cout << first.compare(second) << endl;     //boolean result

    //7.find
    string nincompoop = "nincimpoop";
    cout << nincompoop.find("com") << endl;

    //8.substring: string.subtr(index,no of char)
    //by default no. of char = length of str
    string cummins = "cummins";
    cout << cummins.substr(2,4) << endl;
    // note: str.substr(1) gives remaining string eliminating its first letter useful in recursion

    //9.str to int conversion
    string num = "123";
    int x = stoi(num);
    cout << x << endl;

    //10.int to str conversion
    int y = 123;
    cout << to_string(y) << endl;

    //11.sorting string (use algorithm header file)
    string asc = "zxffhdfkfla";
    sort(asc.begin(),asc.end());
    cout << asc << endl;

    //12.case converter
    string cas = "converter";
    transform(cas.begin(),cas.end(),cas.begin(),::toupper);
    transform(cas.begin(),cas.end(),cas.begin(),::tolower);
    

    return 0;
}
