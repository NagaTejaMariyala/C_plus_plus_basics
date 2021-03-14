
#include<iostream>

using namespace std;

class max1
{
    int m,n;

    public:

    max1();
    void display();
    int largest();
};

max1::max1()
{
    cout << "Enter 2 integers \n";
    cin >> m >> n;
}

int max1::largest()
{
    if(m>n)
        return m;
    return n;
}

void max1::display()
{
    cout << "Largest of them : " << largest() << endl ;
}

int main()
{
    max1 A;

    A.display();

	return 0;
}
