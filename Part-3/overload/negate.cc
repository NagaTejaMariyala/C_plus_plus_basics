
#include<iostream>
using namespace std;

class test
{
    int x,y,z;
    public:
    test(){x=y=z=0;}
    test(int i,int j,int k){x=i;y=j;z=k;}
    void operator -();

    void display();
};

void test::operator -()
{
    x= -x;
    y= -y;
    z= -z;
}

void test::display()
{
    cout << x << " " << y << " " << z << endl;
}

int main()
{
    test a(1,2,3),b(10,10,10);

    cout << "Original value of a : "; a.display();
    cout << "Original value of b : "; b.display();

    -a;
    cout << "Value of a: ";a.display();
    -b;
    cout << "Value of b: ";b.display();
	return 0;
}
