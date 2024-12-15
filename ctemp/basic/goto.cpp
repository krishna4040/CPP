# include <iostream>
using namespace std;

// function to print numbers from 1 to 10
void printNumbers()
{
    int n = 1;
label:
    printf("%d ",n);
    n++;
    if (n <= 10)
        goto label;
}

int main()
{
    int age;
    Vote:
        cout << "You are eligible for voting";
    NoVote:
        cout << "You are not eligible gor voting";
    cout << "Enter your age: ";
    cin >> age;
    if(age>=18)
        goto Vote;
    else
        goto NoVote;
    return 0;
}