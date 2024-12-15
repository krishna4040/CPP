# include <iostream>
using namespace std;

/******Base class*******/
class employee
{
    public:
        int id;
        float salary;
        employee()
        {
            cin >> id >> salary;
        }
        employee(int i , int s)
        {
            id = i;
            salary = s;
        }
        void showdata()
        {
            cout << "ID is " << id << " salary is " << salary << endl;
        }
};

/******Derived class********/
/*
class{{derived_class_name}} : {{visibility mode}} {{base_class_name}}
{ 
    class memmbers / methods / etc....
}
*/
// note1: private visibility mode  : public memebers of base class become private member of derived class 
// note2: public  visibility mode  : public memebers of base class become public member of derived class 
// note3: protected visibility mode: 
// note4: default visibility mode is private
// note5: private member of base class can never be inherited

// creating a derived class
class programmer : employee
{
    string lang;
    public:
        // we need to create default constructor in base class to create a constructor in derived class
        programmer(string l)
        {
            lang = l;
        }
        void getdata()
        {
            cout << "ID is " << id << " salary is " << salary << " language is " << lang << endl;
        }
};


int main()
{
    employee harry(1,20000);
    harry.showdata();

    programmer krishna("c++");
    krishna.getdata();

    return 0;
}