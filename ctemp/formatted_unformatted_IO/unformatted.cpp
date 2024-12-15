# include "bits/stdc++.h"
# include <conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    //* getch: Variable-name = getch();
    /*Reads single char and terminate*/
    char c = getch();
    //* putch: putch(variable_name); 
    /*display single char*/
    putch(c);


    //* getche: getche();
    /*Reads and display and terminate*/
    getche();

    //* getchar: Variable-name = getchar();
    /*whether multiple characters is typed by the user and this function reads one character at a time*/
    char d = getchar();
    char e = fgetchar();
    //* putchar: putchar(variable_name); 
    /*same as putch()*/
    putchar(d);
    fputchar(e);


    //* gets: gets(str); 
    /*Reads a line from console*/
    char name[50];
    gets(name);
    //* puts:  puts(identifier_name);
    /*Display string on console*/
    puts(name);

    return 0;
}
