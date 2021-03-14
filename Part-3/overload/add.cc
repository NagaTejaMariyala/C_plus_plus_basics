
#include<iostream>
using namespace std;

class threeD
{
    int x,y,z;
    public:
    threeD(){x=y=z=0;}
    threeD(int i,int j,int k){x=i;y=j;z=k;}
    friend threeD operator +(threeD a,int b);
    friend threeD operator +(int a,threeD b);
    void show();
};

threeD operator +(threeD a,int b)
{
    a.x+=b;
    a.y+=b;
    a.z+=b;
    return a;
}

threeD operator +(int b,threeD a)
{
    a.x+=b;
    a.y+=b;
    a.z+=b;
    return a;
}

void threeD::show()
{
    cout << x << " " << y << " " << z << endl;
}

int main()
{
    threeD a(1,2,3),b;

    cout << "Original value of a : "; a.show();
    cout << "Original value of b : "; b.show();

    b=a+10;
    cout << "Value of b after a+10 : ";b.show();
    b=10+a;
    cout << "Value of b after 10+a : ";b.show();
	return 0;
}
