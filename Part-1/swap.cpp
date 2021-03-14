

#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class s2;
class s1
{
    int x;

    public:

    void getdata();
    void display();
    friend void swap(s1 &x,s2 &y);
};

class s2
{
    int y;

    public:

    void getdata();
    void display();
    friend void swap(s1 &x,s2 &y);
};

void s1::getdata()
{
    cout << "Enter number ";
    cin >> x;
}

void s2::getdata()
{
    cout << "Enter number ";
    cin >> y;
}

void s1::display()
{
    cout << "Value x : " << x << endl;
}

void s2::display()
{
    cout << "value y : " << y << endl;
}

void swap(s1 &m,s2 &n)
{
    m.x=m.x+n.y;
    n.y=m.x-n.y;
    m.x=m.x-n.y;
}

int main()
{
    s1 m;
    s2 n;

    m.getdata();
    n.getdata();

    cout << "Before swapping   " << endl;
    m.display();
    n.display();

    swap(m,n);

    cout << "After swapping   " << endl;
    m.display();
    n.display();
    swap(m,n);
}
