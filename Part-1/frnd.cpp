
#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class test
{
    int a,b;

    public :

    void getinfo();
    friend void display(test x);
};


void test::getinfo()
{
    cout << "Enter number a ";
    cin >> a;
    cout << "Enter number b ";
    cin >> b;
}

void display(test x)
{
    cout << "Number a : " << x.a << endl;
    cout << "Number b : " << x.b << endl;
}


int main()
{
    test p;

    p.getinfo();
    display(p);
}
