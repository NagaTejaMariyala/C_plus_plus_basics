
#include<iostream>
#include<cstdlib>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

class book
{
    int pages;
    float price;
    string name,author;
    public:
    void getdata()
    {
        cout << "Title  : ";
        getline(cin,name);
        cout << "Author : ";
        getline(cin,author);
        cout << "Pages  : ";
        cin >> pages;
        cout << "Price  : ";
        cin >> price;
        return;
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

    void sum(vector<book> v,int n)
    { 
        float f=0;
        for(int i=0;i<n;i++)
            f+=v[i].price;
        cout << "Total cost is : " << f;
        cout << endl;
    }
};

int main()
{
    book b;

    vector<book> v;
    int n;

    cout << "Enter the number of books : ";
    cin >> n;
    for(int i;i<n;i++)
    {
        b.getdata();
        v.push_back(b);
        cout << endl;
    }

    ostream_iterator<book> output(cout,"\n");

    copy(v.begin(),v.end(),output);

        cout << endl;

        b.sum(v,n);
        cout << endl;

	return 0;
}
