
#include<iostream>
using namespace std;

class item
{
    int code;
    int price;
    public:
    void getdata(){cin >> code >> price;}
    void display()
    {
        cout << "Code: " << code << endl;
        cout << "Price: " << price << endl;
    }
};


int main()
{
    item *p[5];

    int i;
    cout << "Enter the data : ";
    for(i=0;i<4;i++)
    {
        p[i]= new item;
        p[i]->getdata();
    }   

    for(i=0;i<4;i++)
        p[i]->display();
	return 0;
}
