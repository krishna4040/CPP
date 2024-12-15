# include <iostream>
using namespace std;

class student
{
    protected:
        int roll_no;
    public:
        void setnumber(int a)
        {
            roll_no = a;
        }
        void printnumber()
        {
            cout << "Your roll no. is: " << roll_no << endl;
        }
};

class test : virtual public student
{
    protected:
        float maths , physics;
    public:
        void setmarks(float m1 , float m2)
        {
            maths = m1;
            physics = m2;
        }
        void printmarks()
        {
            cout << "marks in maths: " << maths << endl;
            cout << "marks in physics: " << physics << endl;
        }
};

class sports : virtual public student 
{
    protected:
        float score;
    public:
        void setscore(float sc)
        {
            score = sc;
        }
        void printscore()
        {
            cout << "Your pt score is: " << score << endl;
        }
};

class result : public test , public sports
{
    private:
        float total;
    public:
        void display()
        {
            total = maths + physics + score;
            printnumber();
            printmarks();
            printscore();
            cout << "Total score is: " << total << endl;
        }
};

int main()
{
    result krishna;
    krishna.setnumber(1);
    krishna.setmarks(100,99);
    krishna.setscore(100);

    krishna.display();

    return 0;
}