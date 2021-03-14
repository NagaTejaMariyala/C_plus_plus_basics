
#include<iostream>
using namespace std;


class base
{
    int a;
        public:
            int b;
            void getdata()
            {
                cout << "Enter a : ";
                cin >> a;
                cout << "Enter b : ";
                cin >> b;
            }
            int getA()
            {
                return a;
            }
            void displayA()
            {
                cout << "\ta = " << a << endl;
            }

};

class derived : public base
{
    int c;
    public:
        void mul()
        {
            int i;
            i = getA();
            c=i*b;
        }
        void display()
        {
            cout << "The product is " << c << endl;
        }

};

int main()
{
    derived k;

    k.getdata();

    k.mul();

    k.display();

	return 0;
}

