
#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class max
{
    int a,b,large;

    public :

    void largest();
    void getinfo();
    void display();
};


void max::getinfo()
{
    cout << "Enter number a ";
    cin >> a;
    cout << "Enter number b ";
    cin >> b;
}

void max::display()
{
    cout << "Number a : " << a << endl;
    cout << "Number b : " << b << endl;
    largest();
    cout << "Maximum : " << large << endl;
}

void  max::largest()
{
    if(a>b)
        large= a;
    else
        large= b;
}

int main()
{
    max p;

    p.getinfo();
    p.display();
}
