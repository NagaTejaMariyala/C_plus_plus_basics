
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
    friend istream& operator >>(istream &din,overload &a);
    friend ostream& operator <<(ostream &dout,overload &a);
    overload operator +(overload);
};

istream& operator >>(istream &din,overload &a)
{
    din >> a.v1 >> a.v2;
    return din;
}

ostream& operator <<(ostream &dout,overload &a)
{
    dout << a.v1 << " , " << a.v2 << endl;
    return dout;
}

overload overload::operator +(overload a)
{
    overload c;

    c.v1 = v1+a.v1;
    c.v2 = v2+a.v2;

    return c;
}

int main()
{

    overload c1,c2,c3;

    cin >> c1 >> c2;
    cout << c1 << endl << c2 << endl;

    c3=c1+c2;
    c3.display();
	return 0;
}
