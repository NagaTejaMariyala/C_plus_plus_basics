

#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class s2;
class s1
{
    int x;

    public:

    void getdata();
    friend void max(s1,s2);
};

class s2
{
    int y;

    public:

    void getdata();
    friend void max(s1 x,s2 y);
};

void s1::getdata()
{
    cout << "Enter number ";
    cin >> x;
}

void s2::getdata()
{
    cout << "Enter number ";
    cin >> y;
}

void max(s1 m, s2 n)
{
    if(m.x>n.y)
        cout << "\nMaximum : " << m.x;
    else
        cout << "\nMaximum : " << n.y;
}
int main()
{
    s1 m;
    s2 n;

    m.getdata();
    n.getdata();

    max(m,n);
}
