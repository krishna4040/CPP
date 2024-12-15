// Operators and operators precedence
# include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;
    //1.Binary Arithmatic operators: + - * / % 
    cout << "The value of num1 + num2 = " << num1+num2 << endl;
    cout << "The value of num1 - num2 = " << num1-num2 << endl;
    cout << "The value of num1 * num2 = " << num1*num2 << endl;
    cout << "The value of num1 / num2 = " << num1/num2 << endl; // when we divide two integer we get a integer and we get quotient part as output
    cout << "The value of num1 % num2 = " << num1%num2 << endl;
    cout << "---------------------------" << endl;

    //2.Unary Arithmatic operator: preincremental(++a) predecremental(--a) postincremental(a++) postdecremental(a--)
    //* pre ---> alter - use     post ---> use - alter
    cout << "The value of ++num1 is " << ++num1 << endl; // val inc then printed
    cout << "The value of --num1 is " << --num1 << endl; // val dec then printed
    cout << "The value of num1++ is " << num1++ << endl; // val printed then inc
    cout << "The value of num1-- is " << num1-- << endl; // val printed then dec
    cout << "The value of num1++ + ++num1 is "<< num1++ + ++num1 << endl; // num1+(num1+1)+1
    cout << "The value of num1++ - --num1 + ++num1 - num1-- is " << num1++ - --num1 + ++num1 - num1-- << endl; //num1-((num1+1)-1)+(((num1+1)-1)+1)-(((num1+1)-1)+1) 
    cout << "---------------------------" << endl;

    //3.Relational(comparison) operators: > < == != <= >= returns a boolean value
    cout << "The value of is num1 > num2 "  << (num1 > num2)  << endl;
    cout << "The value of is num1 < num2 "  << (num1 < num2)  << endl;
    cout << "The value of is num1 >= num2 " << (num1 >= num2) << endl;
    cout << "The value of is num1 <= num2 " << (num1 <= num2) << endl;
    cout << "The value of is num1 == num2 " << (num1 == num2) << endl;
    cout << "The value of is num1 != num2 " << (num1 != num2) << endl;
    cout << "---------------------------" << endl;

    //4.Logical operators: && || !
    cout << "The value of (num1>num2)&&(num1<num2) is " << ((num1 > num2) && (num1 < num2)) <<endl; // can use "and" keyword
    cout << "The value of (num1>num2)||(num1<num2) is " << ((num1 > num2) || (num1 < num2)) <<endl; // can use "or"keyword
    cout << "The value of !(num1>num2) is " << !(num1 > num2) << endl; // !(1) = 0   !(0) = 1       // can use "not" keyword
    cout << "---------------------------" << endl;

    //5.Bitwise operators: &(and) |(or) ~(not) ^(xor) <<(left shift) >>(right shift)
    cout << "The value of num1 & num2 is " << (num1&num2) << endl; 
    cout << "The value of num1 | num2 is " << (num1|num2) << endl; 
    cout << "The value of num1 ^ num2 is " << (num1^num2) << endl; // can use xor keyword
    cout << "The value of ~ num1 is " << (~num1) << endl;   // ~n = -(n+1)
    cout << "The value of num1<<num2 is " << (num1<<num2) << endl; // a<<n implies a*(2^n)
    cout << "The value of num2>>num2 is " << (num2>>num2) << endl; // a>>n implies a/(2^n)
    cout << "---------------------------" << endl;

    //6.Assingment operators: = += -= *= /= %= >>= <<= &= |= ^=
    /*
        * &= can be replaced by and_eq
        * |= can be replaced by or_eq
        * ^= can be replaced by xor_eq
    */

    //used to assign value to variable

    //7.Miscellaneous operators:
/*    *sizeof(): returns size occupied in memory by a variable  
      *condition?x:y : returns value(x) if condition is true or else value(y). known as ternary operator
      *cast: covert one datatype to other
      *comma(,): causes sequence of operations to be performed
      *refference(&): returns memory address of var. syntax:&(var)
      *pointer(*): gives pointer to a variable. 
*/ 
    // Operator precedence and associvity:  en.cppreference.com

    return 0;
}