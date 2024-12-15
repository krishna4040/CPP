# include <iostream>
using namespace std;

class student
{
    protected:
        int roll_number;
    public:
        void set_roll_number(int a)
        {
            roll_number = a;
        }
        void get_roll_number()
        {
            cout << "The roll number is: " << roll_number << endl;
        }
};

class exam : public student
{
    protected:
        float maths;
        float physics;
    public:
        void setmarks(float m , float p)
        {
            maths = m;
            physics = p;
        }
        void gertmarks()
        {
            cout << "Marks of maths are: " << maths << endl;
            cout << "Marks of physics are: " << physics << endl;
        }
};

class result : public exam
{
    float percentage;
    public:
        void display_result()
        {
            get_roll_number();
            gertmarks();
            cout << "Your percentage is: " << (maths + physics) / 2 << "%" << endl;
        }
};

int main()
{
    result shivangi;
    shivangi.set_roll_number(420);
    shivangi.setmarks(99 , 100);
    shivangi.display_result();

    return 0;
}

/*
    notes:
        if we are inheriting B from A and C from B [A--->B--->C]
        1. A is base class for B and B is base class for C
        2. ABC is called inheritence path
*/