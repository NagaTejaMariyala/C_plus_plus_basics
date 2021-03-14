
#include<iostream>
#include<cassert>
#include<cstdlib>

using namespace std;


class queue
{
    int *array,front,rear;
    unsigned int size;

    public:

    // Constructers
    queue(int k);

    void enqueue();
    void dequeue();
    void displayQ();

    // Destructers
    ~queue();
};

queue::queue(int k)
{
    size=k-1;
    array = new int[size];
    front=-1;
    rear=0;
}

queue::~queue()
{
    delete array;
}

void queue::enqueue()
{
    if(front==size)
    {
        cout << "\n\tqueue Overflow\n";
        return;
    }
    int p;
    cout << "Enter the value : ";
    cin >> p;
    array[++front]=p;
}

void queue::dequeue()
{
    if(rear>front)
    {
        cout << "\n\tqueue Underflow\n";
        return;
    }
    cout << "The value is : " << array[rear++] << endl;

    if(rear>front)
    {
        front=-1;
        rear=0;
    }
}

void queue::displayQ()
{
    if(front==-1||rear>front)
        return;
    for(int i=rear;i<=front;i++)
        cout << array[i] << "   " ;
    cout << endl;
}



int main()
{
    int k,i;

    cout << "Enter the size of queue : " ;
    cin >> k;
    assert(k>0);
    queue a(k);

    while(1)
    {
        cout << "Enter an option : \n(1)enqueue\n(2)dequeue\n(3)display\n(0)exit\n";
        cin >> i;
        
        switch(i)
        {
            case 1 :
                a.enqueue();
                break;
            case 2 :
                a.dequeue();
                break;
            case 3 :
                a.displayQ();
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
