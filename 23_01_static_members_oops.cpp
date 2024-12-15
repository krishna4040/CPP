# include <iostream>
using namespace std;


class employee
{
    /*********static variables**********/
    int id;
    static int count;   //static var of class are also known as class var or static data members
                        //these var are not the prop of obj but the prop of class
                        //this var is created once and updated rest of the time with creation of each object
                        //its visibility is within class
    public:
        static int a;
        void setdata()
        {
            cin >> id;
            count++;
        }
        void getdata()
        {
            cout << "count " << count << " id " << id << endl;
        }
        /*******static methods or static member functions*******/
        // can only use static var
        static void getcount()
        {
            cout << count << endl;
            cout << a;
            // cout << id; // throws an error
        }
};

//static var has to be initialised outside the class
int employee :: count;  // default value is zero or we can provide requiered value
int employee :: a = 100;

int main()
{
    employee harry , rohan , lovish;
    harry.setdata();
    harry.getdata();
    employee :: getcount();  // using static methods

    rohan.setdata();
    rohan.getdata();
    employee :: getcount();

    lovish.setdata();
    lovish.getdata();
    employee :: getcount();

    return 0;
}
// static functions cannot be neither virtual nor const onor volatile