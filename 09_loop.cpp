# include <iostream>
using namespace std;
int main()
{
    //1.for loops: run a statement for definate amount of time

    /*for(initialisation ; condition ; updation)
    {
        loop body
    }*/

    for (int i = 0; i < 50; i++)
    {
        cout << i;
    }       
    // for spinnet for forward looping
    // forr spinnet for reverse looping

    //2.While loop:

    //intitialsation outside the loop
    /*while(condition)
    {
        loop body
        updation
    }*/

    int i = 0;
    while (i <= 50)
    {
        cout << i << " ";
        i++;
    }
    
    //3.do while loop:
    /*do{
        loop body
    }while(condition)*/

    do
    {
        cout << i << " ";
        i++;
    } while (i <= 50);

    return 0;
}