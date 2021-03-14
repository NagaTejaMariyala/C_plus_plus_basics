
#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class test
{
    static int count;
    int code;

    public :

    void setcode(void);
    void showcode();
    static void showcount();
};


void test::setcode(int a)
{
    code=++count;
}

void test::showcode()
{
    cout << "Code : " << code << endl;
}

int test::count;

int main()
{
    test a,b,c;
    a.display();
    b.display();
    c.display();

    a.setcode(10);
    b.setcode(20);
    c.setcode(30);

    cout << "After getting data :\n";
    a.display();
    b.display();
    c.display();
}
