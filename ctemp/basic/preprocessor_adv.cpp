/*****preprocessor******/
// preprocessor programs provide preprocessor directives that tell complier to preprocess source code before compiling
// # indicate sending the program to preprocessor program before being compiled

/*****Types of preprocessor*****/
// 1.Macros
// 2.File inclusion
// 3.conditional compilation
// 4. other directives

/****file inclusion******/
// # include <header_file_name>
// # include "user_defined_file"
# include <stdio.h>
# include <conio.h>
# include <iostream>
# include <iomanip>
# include <climits>
# include <cmath>
# include <algorithm>
# include <string>
# include <vector>
# include <hash_map>
# include <map>
# include <list>
# include <stack>
# include <queue>
# include <deque>
# include <set>
# include <fstream>
# include "bits/stdc++.h"


/****macro preprocessor****/
/*
Macros are pieces of code in a program that is given some name. Whenever this name is encountered by the compiler,the compiler replaces 
the name with the actual piece of code.The ‘#define’ directive is used to define a macro. Let us now understand the macro definition with the help of a program:
*/
// macro without parameter
# define limit 5
// macro with parameter
# define area(l , b) (l * b)

/*****conditional compilation******/
/* Conditional Compilation directives are a type of directive that helps to compile a specific 
portion of the program or to skip the compilation of some specific part of the program based on some conditions */
/*
    #indef macro_name
        statement 1
        statement 2
        statement 3
    #endif
*/

/****Other derivatives******/
// 1. # undef macro_name : used to undefine macro defined by #define
// 2. # pragma startup macro_name and # pragma exit macro_name
// 3. # pragma warn -rvl / -par / -rch 

int main()
{
    std :: cout << limit;
    std :: cout << area(4,5);

    return 0;
}
