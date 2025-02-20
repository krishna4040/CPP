#include <iostream>
#include <stdlib.h>
using namespace std;

//* four file hacks every C/C++ must know
// file size
// check if it exist
// rename
// remove

// A Function to get the file size
unsigned long long int fileSize(const char *filename)
{
	// Open the file
	FILE *fh = fopen(filename, "rb");
	fseek(fh, 0, SEEK_END);
	unsigned long long int size = ftell(fh);
	fclose(fh);

	return size;
}

// A Function to check if the file exists or not
bool fileExists(const char * fname)
{
	FILE *file;
	if (file = fopen(fname, "r"))
	{
		fclose(file);
		return true;
	}
	return false;
}

// Driver Program to test above functions
int main()
{
	cout << fileSize("Passwords.txt") << " Bytes\removen";
	cout << fileSize("Notes.docx") << " Bytes\n";

	if (fileExists("OldData.txt") == true )
		cout << "The File exists\n";
	else
		cout << "The File doesn't exist\n";

	rename("Videos", "English_Videos");
	rename("Songs", "English_Songs");

	remove("OldData.txt");
	remove("Notes.docx");

	if (fileExists("OldData.txt") == true )
		cout << "The File exists\n";
	else
		cout << "The File doesn't exist\n";

	return 0;
}