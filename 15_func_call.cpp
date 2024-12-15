# include <iostream>
using namespace std;

// This will not swap x and y
void swap(int a , int b)
{
    int temp = a;
    a = b;
    b = temp;
}

/*******************pointer refrence*****************/
// This will swap x and y
void swapptr(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*******************Reference var********************/
void swapref(int &a , int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 4 , y = 5;
    cout << x << " " << y << endl;

    swap(x , y);
    cout << x << " " << y << endl;

    swapptr(&x,&y);
    cout << x << " " << y << endl;

    swapref(x,y);
    cout << x << " " << y << endl;

    return 0;
}