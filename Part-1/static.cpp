
#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class item
{
    int n,m;

    public :

    item(int ,int );
    void display();
};


item::item(int a,int b)
{
    m=a;
    n=b;
}

void item::display()
{
    cout << "Values are : " << m << "  " << n << endl;
}


int main()
{
    item a(10,20),b=item(10,30),c=a;

    a.display();
    b.display();
    c.display();

}
