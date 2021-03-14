
#include<iostream>
#include<cassert>
#include<cstdlib>

using namespace std;


class stack
{
    int *array,top;
    unsigned int size;

    public:

    // Constructers
    stack(int k);

    void push();
    void pop();
    void display();

    // Destructers
    ~stack();
};

stack::stack(int k)
{
    size=k-1;
    array = new int[size];
    top=-1;
}

stack::~stack()
{
    delete array;
}

void stack::push()
{
    if(top==size)
    {
        cout << "\n\tStack Overflow\n";
        return;
    }
    int p;
    cout << "Enter the value : ";
    cin >> p;
    array[++top]=p;
}

void stack::pop()
{
    if(top==-1)
    {
        cout << "\n\tStack Underflow\n";
        return;
    }
    cout << "The value is : " << array[top--] << endl;
}

void stack::display()
{
    if(top==-1)
        return;
    for(int i=0;i<=top;i++)
        cout << array[i] << "   " ;
    cout << endl;
}



int main()
{
    int k,i;

    cout << "Enter the size of stack : " ;
    cin >> k;
    assert(k>0);
    stack a(k);

    while(1)
    {
        cout << "Enter an option : \n(1)Push\n(2)Pop\n(3)Display\n(0)exit\n";
        cin >> i;
        
        switch(i)
        {
            case 1 :
                a.push();
                break;
            case 2 :
                a.pop();
                break;
            case 3 :
                a.display();
                break;
            case 0 :
                exit(1);
                break;
            default :
                cout << "\n\t Invalid Input \n";
                break;
        }
    }
}
