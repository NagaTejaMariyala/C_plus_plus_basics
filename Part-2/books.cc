
#include<iostream>
#include<vector>

using namespace std;

class book
{
    int pages;
    float price;
    string name,author;
    public:
    void getdata(string s1,string s2,int i,float f)
    {
        name = s1;
        author = s2;
        pages = i;
        price = f;
    }
    book(string s1,string s2,int i,float f)
    {
        name = s1;
        author = s2;
        pages = i;
        price = f;
    }
    book(){}
    void display()
    {
        cout << "\nTitle  : " << name;
        cout << "\nAuthor : " << author;
        cout << "\nPages  : " << pages;
        cout << "\nPrice  : " << price;
        cout << endl;
    }

    void sum(book b1,book b2)
    {
        name=b1.name+" & "+b2.name;
        author=b1.author;
        price=b1.price+b2.price;
        pages=b1.pages+b2.pages;
    }
};

int main()
{
    book b3;

    vector<book> v;
/*
    vector<book> v(2);
    v[0].getdata("Vidhya vahini","Sai baba",134,90);
    v[1].getdata("Prema vahini","Sai baba",200,101);
*/
    v.push_back(book ("Vidhya vahini","Sai baba",134,90));
    v.push_back(book ("Prema  vahini","Sai baba",200,101));

    vector<book>::iterator it;
    for(it=v.begin(); it != v.end();it++)  (*it).display();

    for(int i=0;i<2;i++)
        v[i].display();

    b3.sum(v[0],v[1]);
    b3.display();

	return 0;
}
