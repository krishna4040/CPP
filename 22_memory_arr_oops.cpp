# include <iostream>
using namespace std;

/******memory allocation in oops*******/
//classes do not occupy memory but objects do

/*******classes and arrays*******/
class shop
{
    int item_ID[100];
    int item_price[100];
    int counter;
    public:
        void initcounter()  // initialise counter for an obj
        {
            counter = 0;
        }
        void setprice()     // ask for item id and price and store them in respective arrays of index counter
        {
            cout << "Enter Id of your item num " << counter+1 << endl;
            cin >> item_ID[counter];
            cout << "Enter price of your item" << endl;
            cin >> item_price[counter];
            counter++;
        }
        void displayprice()  // display ID and price of inputed item
        {
            for (int i = 0; i < counter; i++)
            {
                cout << "The price of item with ID" << item_ID[i] << "is" << item_price[i] << endl;
            }
        }
};

int main()
{
    shop dukan;
    dukan.initcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();

    return 0;
}