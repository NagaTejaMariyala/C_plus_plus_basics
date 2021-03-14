
#include<iostream>
using namespace std;

class threeD
{
    int x,y,z;
    public:
    threeD(){x=y=z=0;}
    threeD(int i,int j,int k){x=i;y=j;z=k;}
    void operator ++();

    void show();
};

void threeD::operator ++()
{
    ++x;
    ++y;
    ++z;
}

void threeD::show()
{
    cout << x << " " << y << " " << z << endl;
}

int main()
{
    threeD a(1,2,3);

    cout << "Original value of a : "; a.show();

    ++a;
    cout << "Value of a: ";a.show();
    ++a;
    cout << "Value of a: ";a.show();
	return 0;
}
