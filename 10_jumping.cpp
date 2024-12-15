# include <iostream>
using namespace std;
int main()
{
    //there are two jumping statements
    /*
        1.break: used to break the loop on specified condition
        2.continue: used to skip a iteration for specified condition
    */

    /*if continue is used at ending condition of loop it act as break it does the program out of the loop */
    
    for (int i = 0; i < 40; i++)
    {
        cout << i << " ";
        if (i == 20)
        {
            break;
        }
    }

    for (int i = 0; i < 40; i++)
    {
        if (i == 20)
        {
            continue;
        }
        cout << i << " ";
    }
    

    return 0;
}
