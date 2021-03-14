
#include<iostream>

using namespace std;

class person
{
    string name;
    int age;
    void display();

    public :

    void getinfo();
};


void person::getinfo()
{
    cout << "Enter the name ";
    getline(cin,name);
    cout << "Enter the age ";
    cin >> age;
    display();
}

void person::display()
{
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
}

int main()
{
    person p;

    p.getinfo();
}
