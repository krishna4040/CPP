# include <iostream>
using namespace std;

class item
{
private:
    int id;
    float price;

public:
    void setdata(int a , float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "code of this item is " << id << endl;
        cout << "price of this item is " << price << endl;
    }
};

int main()
{
    item *ptr = new item[3];
    int p , q;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter ID and price of item " << i+1 << endl;
        cin >> p >> q;
        ptr->setdata(p,q);
        ptr++;
    }
    
    ptr-=3;

    for (int i = 0; i < 3; i++)
    {
        cout << "Item numbers: " << i+1 << endl;
        ptr->getdata();
    }

    return 0;
}