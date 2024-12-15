# include <iostream>
using namespace std;

// Structure declaration
// we can make data members and data methods constructors destructors
struct employee{
    //* data members
    int id : 2;     // bit specidied // bits id can max have = 2  
    string name;
    int salary;
    char post;
    //* data methods
    void func(){cout << "hello";}
    //* data structures --> embedded structures
    struct date{
        int dd;
        int mm;
        int yyyy;
    }d;
};

// structure inhertence
struct programmer : employee{
    // throws compile error until x is called by struct object
    // we cannot initialise var inside unless we are calling it
    // when obj.x is called x act as a default data member
    int x = 0;
    int project_no;
    string lang;
    struct employee emp;    // structure obj as data member
    programmer()            // constructor creation is allowed
    {cout << "Hello you have created a programmer obj" << endl;}
    ~programmer()           // destructor creation is allowed
    {cout << "obj is destroyed";}
}pro;  // declaration of struct obj alongwith structure

int main()
{
    // order declration
    struct employee karan = {1,"krishna",1200,'M'};
    // karan is structure obj
    // we can print its size by using sizeof function
    // we can pass the object in a func as argument which take the strc obj as a parameter
    // this object can be an array(collection of multiple object)


    // sequence declaration
    pro.project_no = 1;
    pro.lang = "python";
    pro.emp.id = 1;
    pro.emp.name = "krishna";
    pro.emp.post = 'M';
    pro.emp.salary = 100000;
    pro.emp.func();
    pro.emp.d.dd = 01;    
    pro.emp.d.mm = 12;    
    pro.emp.d.yyyy = 2023;

    return 0;
}