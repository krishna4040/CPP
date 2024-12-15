#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /*
    In general, when analyzing the time complexity of a for loop with multiple conditions separated by commas, you should consider
    the relationship between the conditions and how they affect the number of iterations performed by the loop. If the conditions are
    independent of each other and have no impact on the loop behavior, you can simply consider the primary loop condition
    that determines the number of iterations. However, if the conditions are interdependent and affect the loop behavior,
    you will need to consider them together when calculating the time complexity.
    */

    int n = 10;
    for (int i = 0, j = n; i < n, j > 0; i++, j--) {
    // loop body
    }

    /*In summary, while a multi-variable for loop can sometimes replace multiple loops and reduce time complexity,
    it is not a universal solution and should be used judiciously based on the specific requirements of the problem.*/


    return 0;
}
