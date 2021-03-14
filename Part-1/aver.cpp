
#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class test
{
    int a,b;

    public :

    void getinfo(); 
    void display();
    friend void average(test &s);
};


void test::getinfo()
{
    cout << "Enter number a ";
    cin >> a;
    cout << "Enter number b ";
    cin >> b;
}

void test::display()
{
    cout << "Average  : "  << a << endl;
}

void average(test &s)
{
    s.a=(s.a+s.b)/2.0;
    return;
}

int main()
{
    test p;

    p.getinfo();
    average(p);
    p.display();
}
