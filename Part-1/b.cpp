// Program to define structure book



#include<iostream>

using namespace std;

class book 
{
        int pages;
        float price;
        string author,title;
    public :
        float total;
        void display(void);
        void getbook(string,string,int,float);
        void sum(book,book);
}b;

void book::getbook(string s,string d,int f,float g)
{
    title=s;
    author=d;
    pages=f;
    price=g;
}

void book::display(void)
{
    cout << "Title : " << title << "\nAuthor : " << author << "\nNo. of pages : " << pages << "\nPrice : " << price << endl;
}

void book::sum(book b1,book b2)
{
    total=b1.price+b2.price;
    b2.total=b1.price+b2.price;
}

int main()
{
    book b1,b2,b3;

    b1.getbook("Vidya Vahini","Sathya Sai Baba",138,55.99);
    b1.display();
    b2.getbook("Prema Vahini","Sathya Sai Baba",180,62.99);
    b2.display();

    b1.sum(b1,b2);
    cout << "Sum of prices of books is " <<  b1.total << endl;
	return 0;
}
