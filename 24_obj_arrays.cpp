# include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

    public:
        void setid()
        {
            cout << "Enter ID of employee: ";
            cin >> id;
        }
        void getid()
        {
            cout << "The ID of this employee is " << id << endl;
        }
};


int main()
{
    /*****object arrays******/
    //when there are large number of objects we store them in an array

    employee folks[5];
    for (int i = 0; i < 5; i++)
    {
        folks[i].setid();
        folks[i].getid();
    }

    return 0;
}