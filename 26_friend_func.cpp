# include <iostream>
using namespace std;

class complex
{
    private:
        int a , b;
    public:
        void setnumber(int n1 , int n2)
        {
            a = n1;
            b = n2;
        }
        void printnumber()
        {
            cout << "your number is " << a << "+" << b << "i" << endl;
        }
        friend complex sumcomplex(complex o1 , complex o2); // friend return_type func_name(arguments);
                                                            /****properties of friend function*****/
                                                            //1.Not in the scope of class
                                                            //2.hence connot be called from object. c3.sumcomplex(c1,c2) ---> invalid
                                                            //3.can be involved without help of any object
                                                            //4.usually contains object as arguments
                                                            //5.can be declared inside public or private part of class
};

//other functions cannot use private data of class directly
//to use its data it have to show compiler that it is friend of class 
//hence it need to be declared within class
complex sumcomplex(complex o1 , complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a) , (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1 , c2;
    c1.setnumber(1,4);
    c2.setnumber(5,8);

    c1.printnumber();
    c2.printnumber();

    complex sum = sumcomplex(c1,c2);
    sum.printnumber();

    return 0;
}