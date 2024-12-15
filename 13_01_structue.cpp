# include <iostream>
using namespace std;

int main()
{
    /***************Structure******************/
    //structue: A data structure which can store different type of data unlike array which store similar type of data
    /*syntax:
    strct struct_var{
        datatype1 attr_var1;
        datatype2 attr_var2;
    }

    //using structure
    struct struct_var object;
    obj.attribute_var = val;
    */

    struct employee
    {
        int eID;
        char favchar;
        float salary;
    };
    struct employee harry;
    harry.eID = 1;
    harry.favchar = 'c';
    harry.salary = 1200000;
    
    //Typedef: replace (struct struct_var) by shortcut
    /*
    typedef strct struct_var{
        datatype1 attr_var1;
        datatype2 attr_var2;
    } shortcut
    */

    typedef struct hello
    {
        int Id , number;
        float salary;
    } hl;
    hl krishna;
    krishna.Id = 1;
    krishna.number = 6;
    krishna.salary = 94.484;

    //Structures in c++ are typedefed

    return 0;
}