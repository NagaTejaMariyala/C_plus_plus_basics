
#include<iostream>
using namespace std;

class overload
{
    int v1,v2;
    public:
    overload(){}
    overload(int a,int b)
    {
        v1=a;
        v2=b;
    }
    void display()
    {
        cout << v1 << " " << v2 << endl;
    }
    overload operator +(overload);
};

overload overload::operator +(overload a)
{
    overload c;

    c.v1 = v1+a.v1;
    c.v2 = v2+a.v2;

    return c;
}

int main()
{

    overload c1(10,20),c2(30,40),c3;

    c3=c1+c2;
    c3.display();
	return 0;
}
