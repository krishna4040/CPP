# include <iostream> // iostream: input output stream(sequence of bytes)
using namespace std;
int main()
{
    int num1 , num2;
    cout << "Enter the value of num1: ";  /* << This is called insertion operator*/
    cin >> num1;                          /* >> This is called extraction operator*/ 

    cout << "Enter the value of num2: ";
    cin >> num2;

    cout << "The sum is " << num1 + num2;
    cout << endl;                         /*endl: for newline*/

    return 0;                          
}