
#include<iostream>

using namespace std;

class integer
{
    int m,n;

    public:

    integer()
    {
        m=0;
        n=0;
    }
    integer(int a,int b)
    {
        m=a;
        n=b;
    }
    void display()
    {
        cout << "The values are " << m << "  " << n << endl;
    }
};

int main()
{
    integer int1(10,20);

    integer int2 = integer(30,40);

    int1.display();
    int2.display();

    integer int3,int4;

    int3.display();
    int4.display();

	return 0;
}
