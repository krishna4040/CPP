# include <iostream>
using namespace std;

/******************Functions***********************/
//It is an important part of top down structured programming. 
//It's purpose is to break our programme in multiple blocks so we can use same peice of code multiple times 

// syntax: return_type func_name(Parameters){body return; return_value;}
// function call: func_name(arguments)
// funions work on concept of call stack(LIFO)

int sum(int a , int b)
//int sum(int a , b) ---> not acceptable
//int sum(int int)   ---> acceptable
{
    int c = a + b;
    return c;
}

void greet()
{
    cout << "hello good morniing" << "\n";
}

/**********Function protoyping*****************/
//predefining Function and writing its code below main function
void hello();


int main()
{
    int num1 , num2;
    cin >> num1 >> num2;
    cout << sum(num1 , num2) << "\n";

    greet();

    hello();

    return 0;
}

//prototyping
void hello()
{
    cout << "hello" << endl;
}