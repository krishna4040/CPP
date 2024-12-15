# include <iostream>
using namespace std;

int sum(int n1 , int n2){
    return n1 + n2;
}

int pointersum(int *n1 , int *n2){
    return *n1 + *n2;
} 

int refrencesum(int &n1 , int &n2){
    return n1 + n2;
}

int main()
{
    int a = 2;
    int b = 3;
    cout << sum(a , b) << endl;
    cout << pointersum(&a , &b) << endl;
    cout << refrencesum(a , b) << endl;

    return 0;
}