
#include<iostream>
using namespace std;

class base
{
    public:
        void display(){ cout << "Display base: " << endl; }
        virtual void show(){ cout << "Show  base: " << endl; }
};

class derived : public base
{
    public:
        void display(){ cout << "Display derived: " << endl; }
        void show(){ cout << "Show  derived: " << endl; }
};

int main()
{
    base B;
    derived D;
    base *bp;

    cout << "Bptr points to base class: " << endl;
    bp = &B;
    bp->display();
    bp->show();

    cout << "Bptr points to derived class: " << endl;
    bp = &D;
    bp->display();
    bp->show();

	return 0;
}
