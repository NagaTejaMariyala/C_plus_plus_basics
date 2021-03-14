
#include<iostream>
#include<cstdlib>
#include<cassert>

using namespace std;

class node
{
    public:
        int data;
        node* next;
};

class linkedlist
{
    node q;

    public:

    linkedlist()
    {
        q.next=NULL;
    }
    ~linkedlist(){};
    
    void insertatk(int k,int d)
    {
        int i;
        node *m=q.next;
        node *l=&q;
        node* n;
        for(i=0;i<k&&m!=NULL;i++,l=m,m=m->next);
        if(i!=k)
        {
            cout << "\n\tInvalid Input\n";
            return;
        }
        n = new node;
        n->data=d;
        n->next=m;
        l->next=n;
    }
    void deletek(int k)
    {
        node*m=q.next;
        if(m->data==k)
        {
            q.next=m->next;
            delete m;
            return;
        }
        while(m->next!=NULL&&m->next->data!=k)
            m=m->next;
        if(m->next!=NULL)
        {
            node *n=m->next;
            m->next=n->next;
            delete n;
        }

    }
    void display()
    {
        node *p=q.next;
        while(p!=NULL)
        {
            cout << p->data << "  ";
            p=p->next;
        }
        cout << endl;
    }
};


int main()
{
    linkedlist list;
    int i,k,p;

    while(1)
    {
        cout << "\n\tEnter the option \n\t(1)Insert\n\t(2)Delete\n\t(3)Display\n\t(0)Exit\n";
        cin >> i;
        switch(i)
        {
            case 1 :
                cout << "Enter position : ";
                cin >> p;
                cout << "Enter the value : ";
                cin >> k;
                list.insertatk(p,k);
                break;
            case 2 :
                cout << "Enter the value : ";
                cin >> k;
                list.deletek(k);
                break;
            case 3 :
                list.display();
                break;
            case 0 :
                exit(1);
            default :
                cout << "\n\tInvalid Input\n";
                break;
        }
    }
}
