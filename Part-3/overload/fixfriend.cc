
#include<iostream>
using namespace std;

class threeD
{
    int x,y,z;
    public:
    threeD(){x=y=z=0;}
    threeD(int i,int j,int k){x=i;y=j;z=k;}
    friend threeD operator ++(threeD &a);
    friend threeD operator ++(threeD &a,int);

    void show();
};

threeD operator ++(threeD &a)
{
    ++a.x;
    ++a.y;
    ++a.z;
    return a;
}


threeD operator ++(threeD &a,int u)
{
    threeD b=a;
    ++a.x;
    ++a.y;
    ++a.z;
    return b;
}

void threeD::show()
{
    cout << x << " " << y << " " << z << endl;
}

int main()
{
    threeD a(1,2,3),b;

    cout << "Original value of a : "; a.show();

    b=++a;
    cout << "Value of a after b = ++a : ";a.show();
    cout << "Value of b after b = ++a : ";b.show();
    b=a++;
    cout << "Value of a after b = a++ : ";a.show();
    cout << "Value of b after b = a++ : ";b.show();
	return 0;
}
