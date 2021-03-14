
#include<iostream>

using namespace std;

class times
{
    int hours;
    int minutes;
    public:
    friend istream& operator >>(istream &i,times &a);
    friend ostream& operator <<(ostream &o,times &b);
    times operator +(times);
};

istream& operator >>(istream &din,times &a)
{
    int i;
    din >> i;
    a.hours = i%24;
    din >> i;
    a.minutes = i%60;
    return din;
}

ostream& operator <<(ostream &dout,times &a)
{
    dout << "Hours : " << a.hours << endl;
    dout << "Minutes : " <<  a.minutes << endl;
    return dout;
}

times times::operator +(times b)
{
    times c;
    c.minutes=(minutes+b.minutes)%60;
    c.hours=(hours+b.hours)%24+(minutes+b.minutes)/60;
	return c;
}

int main()
{
    times a,b,c;

    cout << "Enter t1: ";
    cin >> a;

    cout << "Enter t2: ";
    cin >> b;

    c=a+b;
    cout << "The sum of times is \n";
    cout << c;
}

