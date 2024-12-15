// Example:
// Constant member function defined outside the class
# include "bits/stdc++.h"
using namespace std;

class Demo
{
	int x;
public:
    void set_data(int a){x = a;}
    int get_data() const{return x;}
};

int main()
{
	Demo d;
	d.set_data(10);
	cout << endl << d.get_data();
	return 0;
}
