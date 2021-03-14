
#include<iostream>
using namespace std;

class media
{
    protected:
        string title;
        float price;
    public:
        media(){}
        media(string s,float f)
        {
            title = s; 
            price =f;
        }
        virtual void display()
        {
            cout << "Title : " << title << endl;
            cout << "Price : " << price << endl;
        }
};

class book : public media
{
    int pages;
    public:
    book(string s,float f,int i)
    {
        title = s; 
        price =f;
        pages = i;
    }
    void display()
    {
        cout << "Title : " << title << endl;
        cout << "Price : " << price << endl;
        cout << "Pages : " << pages << endl;
    }
};

class tape : public media
{
    float time;
    public:
    tape(string s,float f,float i):media(s,f)
    {
        time =i;
    }
    void display()
    {
        cout << "Title : " << title << endl;
        cout << "Price : " << price << endl;
        cout << "Time : " << time << endl;
    }
};

int main()
{

    book B1("Harry potter",1299.99,700);

    tape T1("Eragon",599.99,59.3);

    media *p;

    p = &B1;
    p->display();
    
    p = &T1;
    p->display();
}
