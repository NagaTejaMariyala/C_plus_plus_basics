
#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class max
{
    int a,b;
    int maximum();

    public :

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
    cout << "Maximum : " << maximum() << endl;
}

int max:max:::maximum()
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    max p;

    p.getinfo();
    p.display();
}
