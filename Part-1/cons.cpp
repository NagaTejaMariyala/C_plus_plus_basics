
#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class test
{
    int n;

    public :

    test();
    test(int );
    test(test &);
    void display();
};

test::test()
{
    cout << "default constructor";
}

test::test(int b)
{
    cout << "1 argument constructor";
    n=b;
}

test::test(test &b)
{
    cout << "Copy constructor";
    n=b.n;
}

void test::display()
{
    cout << "Value is : " << n << endl;
}


int main()
{
    test a(20);
    test b(a);
    test c=a;

    a.display();
    b.display();
    c.display();

}
