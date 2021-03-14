// Program to define structure book



#include<iostream>

using namespace std;

class book 
{
        int pages;
        float price;
        string author,title;
    public :
        void getbook(void);
        void display(void);
}b;

void book::getbook(void)
{
    cout << "Title : " ;
    getline(cin,title);
    cout << "\nAuthor : ";
    getline(cin,author);
    cout << "\nNo. of pages : ";
    cin >> pages ; 
    cout << "\nPrice : "<< endl;
    cin >> price ;

}

void book::display(void)
{
    cout << "Title : " << title << "\nAuthor : " << author << "\nNo. of pages : " << pages << "\nPrice : " << price << endl;
}

int main()
{

    b.getbook();
    b.display();

	return 0;
}
