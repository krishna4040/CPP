#include <iostream>
#include <sstream>
#include<string>
# include <map>
using namespace std;

int countWords(string str)
{
	// Breaking input into word
	// using string stream

	// Used for breaking words
	stringstream s(str);

	// To store individual words
	string word;

	int count = 0;
	while (s >> word)
		count++;
	return count;
}
void printFrequency(string st)
{
    // Each word it mapped to
    // it's frequency
    map<string, int>FW;
    // Used for breaking words
    stringstream ss(st);
    // To store individual words
    string Word;
    while (ss >> Word)
        FW[Word]++;
    map<string, int>::iterator m;
    for (m = FW.begin(); m != FW.end(); m++)
        cout << m->first << "-> "<< m->second << "\n";
}


// Driver code
int main()
{
	string s = "geeks for geeks geeks contribution placements";
	cout << " Number of words are: " << countWords(s);

    string s = "Geeks For Geeks Ide";
    printFrequency(s);

	return 0;
}