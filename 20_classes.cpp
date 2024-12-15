# include <iostream>
using namespace std;

/*********classes and structures*********/
    //we can not use functions within structures 
    //members are public within structures
    //we can use structures if data sec is not concerned and functions are not requiered.

    //classes are extention of structure(in C)
    //classes can have methods(funcs) and properties
    //classes can make few members as private and public

/******Class initialisation*******/
class employee
{
    private:    //private func and var can be used to write only public methods they can not directly used for obj
        int a , b , c;

    public:     //public func and var can be used for object and we can set different values for different objects
        int d , e;
        void setdata(int a , int b , int c); // function decl by prototyping
        void getdata()                       // function decl without prototyping
        {
            cout << "writing function def within class" << endl;
        }
};

//Function def outside class
//return_type class :: func_name(formal arg){}

void employee :: setdata(int a , int b , int c)
{
    cout << a + b + c << endl;
}

/********object initialsation alongwith class*******/
class animal
{
    private:

    public:
        string name;
        int age;
        void greet()
        {
            cout << "thanks";
        }
}dog , cat , cow;   // Objects of class animal

int main()
{
    /******Object declaration********/
    //similar to var declaration we declare an object 
    
    employee harry;
    harry.d = 34;
    harry.e = 89;
    harry.setdata(1,2,4);
    harry.getdata();
    //harry.a = 12; give error

    dog.greet();

    return 0;
}