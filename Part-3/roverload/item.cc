
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

const int size =2;

int main()
{
    item*p = new item[size];

    item *q=p;
    int i;
    cout << "Enter the data : ";
    for(i=0;i<size;i++,p++)
        p->getdata();

    for(i=0;i<size;i++,q++)
        q->display();
	return 0;
}
