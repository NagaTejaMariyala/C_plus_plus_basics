
#include<iostream>
using namespace std;

class threeD
{
    int x,y,z;
    public:
    threeD(){x=y=z=0;}
    threeD(int i,int j,int k){x=i;y=j;z=k;}
    void operator =(threeD a);

    void show();
};

void threeD::operator =(threeD a)
{
    x=a.x;
    y=a.y;
    z=a.z;
}

void threeD::show()
{
    cout << x << " " << y << " " << z << endl;
}

int main()
{
    threeD a(1,2,3),b(10,10,10),c;

    cout << "Original value of a : "; a.show();
    cout << "Original value of b : "; b.show();

    c=a;
    cout << "Value of c: ";c.show();
    c=b;
    cout << "Value of c: ";c.show();
	return 0;
}
