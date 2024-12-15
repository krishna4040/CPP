# include <iostream>
# include <list>
using namespace std;

void display(list <int> &l)
{
    // printing list using iterartor
    list <int> :: iterator itr;
    for (itr = l.begin() ; itr != l.end() ; itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}

int main()
{
    // linked list
    //* When we requiere faster insertion and deletion so we use linked list
    //* but when we requiere faster random access we use array

    // creating list
    list <int> l1;     // list of zero length
    list <int> l2(7);  // empty list of size 7

    // Inserting elements in list
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_front(0);

    // displaying list
    display(l1); // 0 1 2 3 4
    display(l2); // 0 0 0 0 0 0 0 

    // deleting list element
    l1.pop_back();
    l1.pop_front();
    l1.remove(2);
    l2.remove(0);

    display(l1);  // 1 3
    display(l2);  // no result displayed
    for (int i = 0; i < 7; i++)
    {
        l2.push_back(i);
    }
    display(l2);  // 0 1 2 3 4 5 6

    // sorting list
    l1.sort();
    display(l1);  // 1 3

    // merging list
    l1.merge(l2);
    display(l1);   // 0 1 1 2 3 3 4 5 6

    // reversing a list
    l1.reverse();
    display(l1);   // 3 1


    return 0;
}